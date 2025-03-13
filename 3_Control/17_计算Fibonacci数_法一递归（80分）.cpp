// 计算Fibonacci数
#include <stdio.h>

// 递归函数
int Fibonacci(int number);

// 主函数
int main(void)
{
	// 定义并获取输入
	int count;
	scanf_s("%d", &count);

	// 调用函数求出结果并打印
	int result = Fibonacci(count);
	printf("%d", result);
}

// 函数原型
int Fibonacci(int number)
{
	// 基本情况
	if (number == 1 || number == 2)
		return 1;

	// 递归情况
	else
		return Fibonacci(number - 1) + Fibonacci(number - 2);
}