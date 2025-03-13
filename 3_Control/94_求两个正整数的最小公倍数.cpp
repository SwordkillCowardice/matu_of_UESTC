// 求最小公倍数
#include <stdio.h>

// 函数原型
int get_lcm(int x, int y);

// 主函数
int main(void)
{
	// 获取输入
	int first, second;
	scanf_s("%d %d", &first, &second);

	// 求出结果并打印
	int result = get_lcm(first, second);
	printf("%d\n", result);
}

// 求最小公倍数
int get_lcm(int x, int y)
{
	// 找出里面更大的那个并存在x中
	if (x < y)
	{
		int mid = x;
		x = y;
		y = mid;
	}

	// 循环求解
	int i = 1;
	while (x * i % y != 0)
	{
		i++;
	}

	return i * x;
}