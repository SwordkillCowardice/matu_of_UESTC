// 求出数组元素最大值
#include <stdio.h>

// 求最大值函数
void maxInt(int* array, int n, int* result)
{
	// 检查参数合法性
	if (array == NULL || n < 1 || result == NULL)
	{
		printf("error");
		return;
	}

	// 参数合法时,求出最大值
	*result = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] > *result)
			*result = array[i];
	}
}