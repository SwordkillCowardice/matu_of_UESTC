// 计算平均花销
#include <stdio.h>

// 定义常量
#define SINGLE 0.8
#define START 2
#define FACT 2
#define HIGH 100

// 主函数
int main(void)
{
	// 定义总花费，总天数，总苹果个数
	double cost = 0;
	int days = 0;
	int amount = 0;

	// 循环,更新各个变量的值(此处留心判断条件)
	for (int i = START; amount + i <= HIGH; i *= FACT)
	{
		amount += i;
		days++;
		cost += SINGLE * i;
	}

	// 定义平均花费并计算
	double ave = cost / days;
	printf("%.2lf", ave);
}