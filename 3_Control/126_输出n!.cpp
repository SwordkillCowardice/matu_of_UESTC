// 求溢出前n!
#include <stdio.h>

// 定义求阶乘函数
int factor(int n);

// 定义全局变量 sign标记溢出发生， sign_number标记溢出数字
int sign = 0;
int sign_number;

// 主函数
int main(void)
{
	// 输入数字 sign_number 初始化为number 处理未溢出情况
	int number;
	scanf_s("%d", &number);
	sign_number = number;

	// 调用函数并打印结果
	int result = factor(number);
	printf("%d!=%d", sign_number, result);
}

// 求阶乘，若溢出，返回未溢出最大值
int factor(int n)
{
	// 基本情况
	if (n == 0)
		return 1;
	
	// 递归及判断溢出
	int m = factor(n - 1);

	// 判断sign,若已标记，则返回factor（n -1)
	if (sign == 1)
		return m;

	// 找出初次溢出 并修改sign和sign_number
	int value = m * n;

	// 注意此处判断条件 若溢出 则value肯定小于实际上m * n 的值，计算过后再/n,所得结果必然 < m
	if (value / n < m)
	{
		sign = 1;
		sign_number = n - 1;
		return m;
	}

	return value;
}