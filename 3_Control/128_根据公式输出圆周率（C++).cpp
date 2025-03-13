// 输出满足精度要求的圆周率和花费的步骤数
#include <stdio.h>

// 定义常数
#define FACT 4
#define ACCURACY 1e8

// 主函数
int main(void)
{
	// 定义圆周率，步骤数，迭代项的分母
	double pi = 0;
	int steps = 0;
	double divider = 1;

	// 循环 (这里很关键，如何去精简高效地设计你的代码，让他算的更快，否则timeout)
	// 比如减少乘除和重复运算，用更多的加减（条件判断也是比大小用加减）
	while (divider <= ACCURACY)
	{
		pi += (steps % 2 == 0) ? 1 / divider : -1 / divider;
		steps++;
		divider += 2;
	}

	printf("steps=%d PI=%.5lf", steps + 1, pi * FACT);
}