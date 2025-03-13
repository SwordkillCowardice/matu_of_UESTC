// 求1-n阶乘之和
#include <stdio.h>

// 定义边界输入
#define LOW 1
#define HIGH 10

// 定义求阶乘函数
int factor(int x);

// 主函数
int main(void)
{
	// 获取输入并检查
	int number;
	int p = scanf_s("%d", &number);

	if (p != 1 || number < LOW || number > HIGH)
	{
		printf("error");
		return 0;
	}

	// 求和并输出结果
	int sum = 0;
	for (int i = LOW; i <= number; i++)
	{
		sum += factor(i);
	}
	printf("%d\n", sum);
}

// 定义阶乘函数
int factor(int x)
{
	if (x == 0)
		return 1;
	else
		return x * factor(x - 1);
}