// ��̬�����ڴ�
#include <stdio.h>
#include <stdlib.h>

// ������
int main(void)
{
	// �������ռ�Ĵ�С
	int n;
	scanf_s("%d", &n);

	// ��̬�����ڴ�
	int* array = (int*)malloc(sizeof(int) * n);
	if (array == NULL)
		return 0;

	// ��ȡԪ��
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// ð������
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int mid = array[j];
				array[j] = array[j + 1];
				array[j + 1] = mid;
			}
		}
	}

	// ������
	for (int i = 0; i < n - 1; i++)
	{
		printf("%d,", array[i]);
	}
	printf("%d", array[n - 1]);

	// �ͷ��ڴ�
	free(array);
}