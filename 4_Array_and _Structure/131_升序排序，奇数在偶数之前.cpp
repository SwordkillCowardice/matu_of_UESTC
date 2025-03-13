// 升序排序,奇数在偶数之前
#include <stdio.h>

// 定义数组最大尺寸
#define LENGTH 10

// 主函数
int main(void)
{
	// 定义一个变量暂存读取值,定义数组,定义实际读入个数
	int tmp;
	int array[LENGTH] = { 0 };
	int size = 0;
	
	// 读取元素
	for (int i = 0; i < LENGTH; i++)
	{
		scanf_s("%d", &tmp);
		if (tmp < 0)
			break;
		array[i] = tmp;
		size++;
	}
	
	// 冒泡排序(稍微修改冒泡条件)
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			// 前偶后奇必须换,非前奇后偶则大小交换
			if ((array[j] > array[j + 1]  && array[j] % 2 == array[j + 1] % 2)
				|| (array[j] % 2 == 0 && array[j + 1] % 2 != 0))
			{
				int mid = array[j];
				array[j] = array[j + 1];
				array[j + 1] = mid;
			}
		}
	}

	// 打印结果
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}