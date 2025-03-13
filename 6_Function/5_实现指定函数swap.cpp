// 实现交换
#include <stdio.h>

// 交换函数
void swap(int* array, int n)
{
	// 检查参数合法性
	if (array == NULL || n < 1)
	{
		printf("error");
		return;
	}

	else
	{
		int mid = array[0];
		array[0] = array[n - 1];
		array[n - 1] = mid;
		return;
	}
}