// 找出1-N中所有素数
#include <math.h>
#include <stdio.h>

// 判断素数函数
int isprime(int number);
void print_prime(int x);

// 主函数
int main(void)
{
	// 获取输入并检查
	int N;
	int p = scanf_s("%d", &N);

	if (p != 1 || N <= 1)
	{
		printf("error");
		return 0;
	}

	// 打印素数
	print_prime(N);
}

// 定义判断素数函数
int isprime(int number)
{
	// 数字1单独处理
	if (number == 1)
		return 0;
	
	// 判断素数
	double tmp = sqrt((double)number);

	for (int i = 2; i <= tmp; i++)
	{
		if (number % i == 0)
			return 0;
	}

	return 1;
}

// 打印素数
void print_prime(int x)
{
	// 2直接打印
	printf("2,");

	// 跳过偶数轮
	for (int i = 3; i <= x; i += 2)
	{
		if (isprime(i))
			printf("%d,", i);
	}
}