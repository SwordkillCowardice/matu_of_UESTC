// 判断素数
#include <math.h>
#include <stdio.h>

// 常量
#define LOW 3

// 函数原型
void isprime(int x);

// 主函数
int main(void)
{
	// 定义,获取输入并检查
	int number;
	int p = scanf_s("%d", &number);
	if (p != 1 || number <= LOW)
	{
		printf("error");
		return 0;
	}

	// 输出结果
	isprime(number);
}

// 判断是否为素数并打印结果
void isprime(int x)
{
	double mid = sqrt(double(x));
	for (int i = 2; i <= mid; i++)
	{
		if (x % i == 0)
		{
			printf("no");
			return;
		}
	}
	printf("yes");
	return;
}
