// ������ֵ,����λ��
#include <stdio.h>
#include <stdlib.h>

// ������
int main(void)
{
	// ����Ԫ�ظ��������������Ϸ���
	int number;
	scanf_s("%d", &number);

	if (number < 1)
	{
		printf("error");
		return 0;
	}

	// ��̬�����ڴ棬�Դ洢����
	int* array = (int*)malloc(sizeof(int) * number);
	if (array == NULL)
		return 0;

	// ��ȡԪ��
	for (int i = 0; i < number; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// �����ֵ������λ��
	int max = 0;
	int min = array[0];
	int max_pos = 1;
	int min_pos = 1;

	for (int i = 0; i < number; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			max_pos = i + 1;
		}

		if (array[i] < min)
		{
			min = array[i];
			min_pos = i + 1;
		}
	}

	// ������
	printf("max:%d,position:%d\n", max, max_pos);
	printf("min:%d,position:%d\n", min, min_pos);

	// �ͷ��ڴ�
	free(array);
}