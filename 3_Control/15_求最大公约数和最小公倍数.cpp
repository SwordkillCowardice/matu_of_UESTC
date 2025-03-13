// 求最大公约数和最小公倍数
#include <stdio.h>
#include <stdlib.h>

// 函数原型
int lco_multiple(int x, int y);
int gco_divisor(int x, int y);

// 主函数
int main(void)
{
	// 定义并获取输入
	int first_number, second_number;
	scanf_s("%d %d", &first_number, &second_number);

	// 使前一个数为绝对值更大的数，避免重复处理(对0讨论LCM和GCD都没有意义，故不考虑输入中含有0）
	if (abs(first_number) < abs(second_number))
	{
		int mid = first_number;
		first_number = second_number;
		second_number = mid;
	}

	// 调用函数 并输出结果
	int multiple = lco_multiple(first_number, second_number);
	int divisor = gco_divisor(first_number, second_number);
	printf("%d,%d", divisor, multiple);
}

// 定义获取最小公倍数函数
int lco_multiple(int x, int y)
{
	// 处理有负数的情况，利用[a,b] = [-a,-b]
	int first = abs(x);
	int high = abs(y);

	for (int i = 1; i < high; i++)
	{
		if (first * i % high == 0)
			return first * i;
	}
	return high * first;
}

// 定义获取最大公约数函数
int gco_divisor(int x, int y)
{
	// 定义循环上界
	int edge = abs(y);

	for (int i = edge; i > 0; i--)
		if (x % i == 0 && y % i == 0)
			return i;
}