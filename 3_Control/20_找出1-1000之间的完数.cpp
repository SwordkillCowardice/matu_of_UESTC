// 求出1-1000之间完数(题目描述不够严谨 应该是一个数恰好等于除他自身之外的因子之和）
#include <stdio.h>

// 定义边界常量
#define LOW 1
#define HIGH 1000

// 定义求完数函数
void print_mantissas(int x, int y);

// 主函数
int main(void)
{
	print_mantissas(LOW, HIGH);
}

// 循环嵌套求出完数并打印
void print_mantissas(int x, int y)
{
	// 定义因子和
	int sum;

	for (int i = x; i < y; i++)
	{
		// 每一轮判断开始前需做重置
		sum = 0;

		// 求和
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}

		// 每一轮结束进行判定
		if (sum == i)
			printf("%d\n", i);
	}
}