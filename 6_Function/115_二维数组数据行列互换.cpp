// ʵ�־���ת��
#include <stdio.h>

// ����
void tran(int array[5][3], int out_array[3][5])
{
	// ���Ϸ���
	if (array == NULL || out_array == NULL)
	{
		printf("error");
		return;
	}

	// ѭ������
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			out_array[j][i] = array[i][j];
		}
	}
}