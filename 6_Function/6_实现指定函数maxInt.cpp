// �������Ԫ�����ֵ
#include <stdio.h>

// �����ֵ����
void maxInt(int* array, int n, int* result)
{
	// �������Ϸ���
	if (array == NULL || n < 1 || result == NULL)
	{
		printf("error");
		return;
	}

	// �����Ϸ�ʱ,������ֵ
	*result = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] > *result)
			*result = array[i];
	}
}