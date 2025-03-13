// 统计字符串中a和d的个数
#include <stdio.h>

// 定义常量
#define LETTERO 'a'
#define LETTERT 'd'
#define MAX_LENGTH 51

// 主函数
int main(void)
{
	// 定义字符数组以存储字符串，获取输入
	char str[MAX_LENGTH];
	scanf_s("%50s", str, (unsigned)sizeof(str));

	// 分别定义两字符的数量
	int a_count = 0;
	int d_count = 0;

	// 遍历整个数组，统计数量
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (str[i] == LETTERO)
			a_count++;
		else if (str[i] == LETTERT)
			d_count++;
	}

	// 打印结果
	printf("a:%d,d:%d", a_count, d_count);
}