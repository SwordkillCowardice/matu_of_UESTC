// ��������
#include <stdio.h>

// ������
int ReverseArray(int array[], int size)
{
	// �������
	if (size <= 0 || array == NULL)
		return 0;

	else
	{
		// ����Ԫ����ʵ������
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