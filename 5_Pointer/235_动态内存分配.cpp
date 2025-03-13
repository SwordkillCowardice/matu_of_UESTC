// 动态分配内存
#include <stdio.h>
#include <stdlib.h>

// 主函数
int main(void)
{
	// 定义分配空间的大小
	int n;
	scanf_s("%d", &n);

	// 动态分配内存
	int* array = (int*)malloc(sizeof(int) * n);
	if (array == NULL)
		return 0;

	// 读取元素
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// 冒泡排序
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int mid = array[j];
				array[j] = array[j + 1];
				array[j + 1] = mid;
			}
		}
	}

	// 输出结果
	for (int i = 0; i < n - 1; i++)
	{
		printf("%d,", array[i]);
	}
	printf("%d", array[n - 1]);

	// 释放内存
	free(array);
}