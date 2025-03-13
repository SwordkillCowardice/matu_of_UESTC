// 计算e的x次方
#include <math.h>
#include <stdio.h>

// 常量
#define LOW 0

// 函数原型
double factorial(double number);
double e_power(double m, double w);

//主函数
int main(void)
{
	// 定义并获取输入，同时检查
	double x, n;
	int p = scanf_s("%lf %lf", &x, &n);
	if (p != 2 || n < 0)
	{
		printf("error");
		return 0;
	}

	// 计算e的x次方
	double result = e_power(x, n);
	printf("%.6lf", result);
}

// 阶乘函数
double factorial(double number)
{
	// 基本情况
	if (number == 0)
		return 1;

	// 递归情况
	return number * factorial(number - 1);
}

// 计算结果
double e_power(double m, double w)
{
	double sum = 0;
	for (int i = 0; i <= w; i++)
	{
		sum += pow(m, i) / factorial(i);
	}
	return sum;
}