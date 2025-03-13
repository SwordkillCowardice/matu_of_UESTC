// 求pi
#include <math.h>
#include <stdio.h>

// 定义常数
#define FACT 4
#define FACTT -1
#define FACTR 2

// 主函数
int main(void)
{
	// 获取累加次数n
	int n;
	scanf_s("%d", &n);

	// 求和
	double pi = 0;
	
	// 注意要转化成浮点数除法 不然直接截断为0
	for (int i = 0; i < n; i++)
	{
		// 调用pow函数参数要传double（至少一个），不然重载不明确
		pi += 1. / (FACTR * i + 1) * pow(FACTT, (double)i);
	}

	pi = FACT * pi;

	printf("%.2lf", pi);
}	