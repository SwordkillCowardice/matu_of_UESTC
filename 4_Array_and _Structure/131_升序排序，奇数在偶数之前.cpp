// ��������,������ż��֮ǰ
#include <stdio.h>

// �����������ߴ�
#define LENGTH 10

// ������
int main(void)
{
	// ����һ�������ݴ��ȡֵ,��������,����ʵ�ʶ������
	int tmp;
	int array[LENGTH] = { 0 };
	int size = 0;
	
	// ��ȡԪ��
	for (int i = 0; i < LENGTH; i++)
	{
		scanf_s("%d", &tmp);
		if (tmp < 0)
			break;
		array[i] = tmp;
		size++;
	}
	
	// ð������(��΢�޸�ð������)
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			// ǰż������뻻,��ǰ���ż���С����
			if ((array[j] > array[j + 1]  && array[j] % 2 == array[j + 1] % 2)
				|| (array[j] % 2 == 0 && array[j + 1] % 2 != 0))
			{
				int mid = array[j];
				array[j] = array[j + 1];
				array[j + 1] = mid;
			}
		}
	}

	// ��ӡ���
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}