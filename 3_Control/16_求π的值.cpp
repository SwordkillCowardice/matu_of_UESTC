// 求出满足精度要求的Pi值
#include <stdio.h>

// 主函数
int main(void)
{
	// 定义精度，并获取输入
	float accuracy;
	scanf_s("%f", &accuracy);

	// 定义前后求出的Pi
	float pif = 0;
	float pis = 0;

	// 定义迭代变量i,迭代项fact
	double i = 1;
	double fact = i;

	// 永真循环，直至满足要求再退出
	while (1)
	{
		// 第一个pi每次加迭代项，后一个pi在前一个基础上，往后再加一项
		pif += fact;
		pis = pif + fact * i / (2 * i + 1);

		// 判断是否满足条件，若满足，保留第二个pi，并退出
		if ((pis - pif) * 2 < accuracy)
		{
			pis = 2 * pis;
			break;
		}

		// 轮末的循环，更新迭代项
		i++;
		fact *= (i - 1) / (2 * i - 1);
	}

	// 打印pi
	printf("%.6f", pis);
}