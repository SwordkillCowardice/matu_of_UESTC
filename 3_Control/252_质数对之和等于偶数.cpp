// 质数对之和为偶数
#include <stdio.h>

// 定义判断质数函数
int is_prime(int x);

// 定义数的下界
#define LOW 2

// 主函数
int main(void)
{
	// 定义并获取输入,同时检查
	int number;
	scanf_s("%d", &number);

	if (number <= LOW || number % 2 != 0)
	{
		printf("Error");
		return 0;
	}

	// 循环找出所有符合满足的质数对
	for (int i = LOW; i < number; i++)
	{
		if (is_prime(i))
		{
			for (int j = i; j < number; j++)
			{
				if (i + j == number && is_prime(j))
				{
					printf("%d+%d\n", i, j);
					break;
				}
			}
		}
	}
}

// 判断一个数是不是质数
int is_prime(int x)
{   
	// 先判断x是不是1
	if (x == 1)
		return 0;

	// 常规循环判断
	for (int i = LOW; i < x; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}