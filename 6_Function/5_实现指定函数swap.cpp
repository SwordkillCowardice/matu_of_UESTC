// ʵ�ֽ���
#include <stdio.h>

// ��������
void swap(int* array, int n)
{
	// �������Ϸ���
	if (array == NULL || n < 1)
	{
		printf("error");
		return;
	}

	else
	{
		int mid = array[0];
		array[0] = array[n - 1];
		array[n - 1] = mid;
		return;
	}
}