// ����������
#include <stdio.h>

// ������󳤶�
#define MAX 3

// ������
int main(void)
{
	// ��������,��ȡ����
	int array[MAX];

	for (int i = 0; i < MAX; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// ����ָ������ֵ
	int max = 0;
	int* p = &max;

	// �������ֵ
	for (int i = 0; i < MAX; i++)
	{
		if (array[i] > *p)
		{
			p = &array[i];
		}
	}

	// ������ֵ
	printf("%d", *p);
}