// ð������
#include <stdio.h>

// ���峣��
#define LENGTH 10

// ������
int main(void)
{
	// ��������
	int array[LENGTH];

	// ��ȡԪ��
	for (int i = 0; i < LENGTH; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// ð������
	for (int i = 0; i < LENGTH - 1; i++)
	{
		for (int j = 0; j < LENGTH - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int mid = array[j];
				array[j] = array[j + 1];
				array[j + 1] = mid;
			}
		}
	}

	// �����ӡԪ��
	for (int i = 0; i < LENGTH - 1; i++)
	{
		printf("%d,", array[i]);
	}
	printf("%d", array[LENGTH - 1]);
}