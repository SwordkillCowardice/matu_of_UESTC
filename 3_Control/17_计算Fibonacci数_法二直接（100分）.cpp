// 计算Fibonacci数
#include <stdio.h>

// 主函数
int main(void)
{
	// 定义并获取输入
	int number;
	scanf_s("%d", &number);

	// 定义两个数字low和high，以动态更新值，并定义结果变量
	int low = 1;
	int high = 1;
	int result;

	// 判断是否为前两位
	if (number == 1 || number == 2)
	{
		result = high;
		printf("%d", result);
		return 0;
	}

	// 从第三位开始的情况 循环移动low和high
	int times = number - 2;
	for (int i = 0; i < times; i++)
	{
		int mid = low;
		low = high;
		high = high + mid;
	}

	// 结果
	result = high;
	printf("%d", result);
}
