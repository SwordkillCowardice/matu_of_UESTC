// 冒泡排序
#include <stdio.h>

// 定义常数
#define LENGTH 10

// 主函数
int main(void)
{
	// 定义数组
	int array[LENGTH];

	// 读取元素
	for (int i = 0; i < LENGTH; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// 冒泡排序
	for (int i = 0; i < LENGTH - 1; i++)
	{
		for (int j = 0; j < LENGTH - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int mid = array[j];
				array[j] = array[j + 1];
				array[j + 1] = mid;
			}
		}
	}

	// 逐个打印元素
	for (int i = 0; i < LENGTH - 1; i++)
	{
		printf("%d,", array[i]);
	}
	printf("%d", array[LENGTH - 1]);
}