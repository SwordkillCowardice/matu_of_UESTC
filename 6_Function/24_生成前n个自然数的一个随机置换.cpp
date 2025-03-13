// 生成一个随机置换
#include <stdio.h>
#include <stdlib.h>

// 引入外部函数
extern int RandInt(int i, int j);

// 函数1
void RandomPermutation1(int n)
{
	// 检查参数合法性
	if (n <= 0)
	{
		printf("error");
		return;
	}

	// 动态分配一个大小为n的数组
	int* array = (int*)malloc(n * sizeof(int));
	if (array == NULL)
		return;

	// 定义count变量记录已获得的不同数字个数
	int count;

	// 单独分配第一个数字
	array[0] = RandInt(1, n);
	count = 1;

	// 定义标志变量来标识生成成功
	int sign;

	// 循环求解
	while (count < n)
	{
		while (1)
		{
			// 标志置1
			sign = 1;
			
			// 得到一个随机数
			int tmp = RandInt(1, n);

			// 判断随机数是否符合要求
			for (int i = 0; i < count; i++)
			{
				if (tmp == array[i])
				{
					sign = 0;
					break;
				}
			}

			if (sign == 1)
			{
				array[count++] = tmp;
				break;
			}
		}
	}

	// 输出结果
	for (int i = 0; i < n; i++)
	{
		printf("%d,", array[i]);
	}
	printf("0");

	// 释放内存
	free(array);
}

// 函数2
void RandomPermutation2(int n)
{
	// 检查参数合法性
	if (n <= 0)
	{
		printf("error");
		return;
	}

	// 动态分配内存，创建随机数存储数组和标志信息存储数组
	int* array = (int*)malloc(n * sizeof(int));
	if (array == NULL)
		return;

	int* sign = (int*)malloc((n + 1)* sizeof(int));
	if (sign == NULL)
		return;

	// 初始化标志数组
	for (int i = 0; i < n + 1; i++)
	{
		sign[i] = 0;
	}

	// 定义count变量记录已获得随机数个数
	int count;

	// 单独生成第一个随机数
	int tmp = RandInt(1, n); 
	array[0] = tmp;
	sign[tmp] = 1;
	count = 1;

	// 循环生成随机数,补充数组
	while (count < n)
	{
		while (1)
		{	
			int x = RandInt(1, n);

			if (sign[x] == 1)
				continue;
			else
			{
				array[count++] = x;
				sign[x] = 1;
				break;
			}
		}
	}

	// 输出结果
	for (int i = 0; i < n; i++)
	{
		printf("%d,", array[i]);
	}
	printf("0");

	// 释放内存
	free(array);
	free(sign);
}

// 交换函数
void Swap(int* a, int* b)
{
	int mid = *a;
	*a = *b;
	*b = mid;
}

// 函数3
void RandomPermutation3(int n)
{
	// 检查参数合法性
	if (n <= 0)
	{
		printf("error");
		return;
	}

	// 动态分配内存，创建数组存储随机数
	int* array = (int*)malloc(sizeof(int) * n);
	if (array == NULL)
		return;

	// 初始化数组
	for (int i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}

	// 随机交换数组元素
	for (int i = 1; i < n; i++)
	{
		Swap(&array[i], &array[RandInt(0,i)]);
	}

	// 打印结果
	for (int i = 0; i < n; i++)
	{
		printf("%d,", array[i]);
	}
	printf("0");
	
	// 释放内存
	free(array);
}