// 求给定范围内水仙花数的个数
#include <math.h>
#include <stdio.h>

// 定义检查边界
#define LOW 100
#define HIGH 999

// 函数原型
int find(int n);

// 函数体
int find(int n)
{
	// 检查n是否符合要求
	if (n < LOW || n > HIGH)
		return 0;

	else
	{
		// 定义计数变量
		int count = 0;

		// 循环求解
		int sum;
		
		for (int i = LOW; i <= n; i++)
		{
			sum = 0;
			int tmp = i;

			// 分别求出各位
			int low = tmp % 10;
			tmp /= 10;
			int mid = tmp % 10;
			tmp /= 10;
			int high = tmp;

			// 计算和并比较
			sum += pow(low, 3.) + pow(mid, 3.) + pow(high, 3.);

			if (sum == i)
				count++;
		}
		return count;
	}
}