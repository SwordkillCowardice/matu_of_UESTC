// 计算大整数的差(不要老想着转化为整数再算,直接用字符串就好)
#include <stdio.h>
#include <string.h>

// 定义最大长度
#define MAX 51

// 主函数
int main(void)
{
	// 定义数组num1,num2分别存储数字
	char num1[MAX];
	char num2[MAX];

	// 读取数字
	scanf_s("%51s", num1, (unsigned)sizeof(num1));
	scanf_s("%51s", num2, (unsigned)sizeof(num2));

	// 判断数字是否相等
	int tmp = strcmp(num1, num2);
	if (!tmp)
	{
		printf("0");
		return 0;
	}

	// 分别求出两数字位数,much表示位数多的那个
	int much = (int)strlen(num1);
	int less = (int)strlen(num2);

	// 定义两个指针并初始化，big指向大的那个
	char* big = num1;
	char* small = num2;

	// 若有需要,交换位置
	if (much < less || (much == less && tmp < 0))
	{
		int mid = much;
		much = less;
		less = mid;
		big = num2;
		small = num1;
	}

	// 从两字符串的末字符开始,逐个做减法(处理结果直接存在big指针指向的数组中)
	int i = much - 1;
	for (int j = less - 1; j >= 0; j--, i--)
	{
		// 够减时,直接减(末尾加‘0’转化为字符0-9之间)
		if (big[i] >= small[j])
			big[i] = big[i] - small[j] + '0';

		// 不够减时,需借位
		else
		{
			big[i] = big[i] + 10 - small[j] + '0';
			big[i - 1]--;
		}
	}

	// 减法完成后处理大数多出的位(如果有的话)
	while (i >= 0)
	{
		// 处理最高被借位为0
		if (big[i] < '0')
		{
			// 直接加10就可以落在字符0-9之间
			big[i] = big[i] + 10;
			big[i - 1]--;
		}
		i--;
	}

	// 在两个数字不相等时,按要求输出差
	if (big == num1)
		printf("+%s", num1);
	else
		printf("-%s", num2);
}