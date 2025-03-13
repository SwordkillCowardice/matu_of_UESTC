// 求指定范围内的素数
#include <math.h>
#include <stdio.h>

// 判断一个数是不是素数
int isPrime(int number);

// 主函数
int main(void)
{
	// 定义边界
	int m, n;
	int count = scanf_s("%d %d", &m, &n);
	if (count != 2 || m >= n || n <= 1)
	{
		printf("error");
		return 0;
	}

	// 定义判断起点
	int start;
	if (m <= 1)
		start = 2;
	else
		start = m + 1;

	// 逐个判断
	for (int i = start; i < n; i++)
	{
		if (isPrime(i))
			printf("%d ", i);
	}
}

// 判断一个数是不是素数
int isPrime(int number)
{
	if (number <= 1)
		return 0;
	else if (number == 2 || number == 3)
		return 1;

	double x = sqrt(double(number));
	for (int i = 2; i <= x; i++)
	{
		if (number % i == 0)
			return 0;
	}
	return 1;
}