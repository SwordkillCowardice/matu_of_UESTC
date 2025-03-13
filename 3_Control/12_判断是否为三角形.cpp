// 判断三角形
#include <stdio.h>
#include <stdlib.h>

// 函数原型
void is_triangle(int x, int y, int z);

// 主函数
int main(void)
{
	// 获取输入并检查
	int a, b, c;
	int p = scanf_s("%d,%d,%d", &a, &b, &c);
	if (p != 3 || a <= 0 || b <= 0 || c <= 0)
	{
		printf("error");
		return 0;
	}

	// 判断三角形
	is_triangle(a, b, c);
}

// 判断三角形
void is_triangle(int x, int y, int z)
{
	// 定义任意两边的和差
	int sum = x + y;
	int dif = abs(x - y);

	// 判断
	if (dif < z && sum > z)
		printf("yes");
	else
		printf("no");
}