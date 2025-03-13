// 输出最大整数
#include <stdio.h>

// 定义最大长度
#define MAX 3

// 主函数
int main(void)
{
	// 定义数组,读取数据
	int array[MAX];

	for (int i = 0; i < MAX; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// 定义指针和最大值
	int max = 0;
	int* p = &max;

	// 更新最大值
	for (int i = 0; i < MAX; i++)
	{
		if (array[i] > *p)
		{
			p = &array[i];
		}
	}

	// 输出最大值
	printf("%d", *p);
}