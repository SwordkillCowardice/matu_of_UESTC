// 数组逆序
#include <stdio.h>

// 逆序函数
int ReverseArray(int array[], int size)
{
	// 参数检查
	if (size <= 0 || array == NULL)
		return 0;

	else
	{
		// 交换元素以实现逆序
		int mid = size / 2;
		for (int i = 0; i < mid; i++)
		{
			int tmp = array[i];
			array[i] = array[size - 1 - i];
			array[size - 1 - i] = tmp;
		}
		return 1;
	}
}