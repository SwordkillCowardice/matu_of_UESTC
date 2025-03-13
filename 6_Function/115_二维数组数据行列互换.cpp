// 实现矩阵转置
#include <stdio.h>

// 函数
void tran(int array[5][3], int out_array[3][5])
{
	// 检查合法性
	if (array == NULL || out_array == NULL)
	{
		printf("error");
		return;
	}

	// 循环交换
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			out_array[j][i] = array[i][j];
		}
	}
}