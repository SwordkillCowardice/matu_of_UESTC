// 搜索极值,给出位置
#include <stdio.h>
#include <stdlib.h>

// 主函数
int main(void)
{
	// 输入元素个数，并检查输入合法性
	int number;
	scanf_s("%d", &number);

	if (number < 1)
	{
		printf("error");
		return 0;
	}

	// 动态分配内存，以存储数据
	int* array = (int*)malloc(sizeof(int) * number);
	if (array == NULL)
		return 0;

	// 读取元素
	for (int i = 0; i < number; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// 求出极值，及其位置
	int max = 0;
	int min = array[0];
	int max_pos = 1;
	int min_pos = 1;

	for (int i = 0; i < number; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			max_pos = i + 1;
		}

		if (array[i] < min)
		{
			min = array[i];
			min_pos = i + 1;
		}
	}

	// 输出结果
	printf("max:%d,position:%d\n", max, max_pos);
	printf("min:%d,position:%d\n", min, min_pos);

	// 释放内存
	free(array);
}