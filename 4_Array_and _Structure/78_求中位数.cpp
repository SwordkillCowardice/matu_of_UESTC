// ����λ��
#include <stdio.h>
#include <stdlib.h>

// ������
int main(void)
{
	// ���岢��ȡ��Ԫ�ظ���
	int n;
	int p = scanf_s("%d", &n);

	// �������Ϸ���
	if (n <= 0 || p != 1)
	{
		printf("ERROR");
		return 0;
	}

	// ��̬�����ڴ��Դ洢Ԫ��
	int* a = (int*)malloc(n * sizeof(int));
	if (a == NULL)
	{
		free(a);
		return 0;
	}

	// �����ȡ����Ԫ��
	for (int i = 0; i < n - 1; i++)
	{
		scanf_s("%d ", &a[i]);
	}
	scanf_s("%d", &a[n - 1]);

	// ѡ������
	int small;
	int index;

	for (int i = 0; i < n - 1; i++)
	{
		// �ֳ���ʼ����СԪ��Ϊa[i],����Ϊi
		small = a[i];
		index = i;

		// ��������Ԫ��,�����СԪ
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < small)
			{
				small = a[j];
				index = j;
			}
		}

		// ����ҵ��˸�Сֵ,�򽻻�Ԫ��λ��
		if (index != i)
		{
			int mid = a[index];
			a[index] = a[i];
			a[i] = mid;
		}
	}

	// ��ӡԪ��
	printf("%d", a[(n - 1) / 2]);

	// ��Ҫ�����ͷ��ڴ棡����������
	free(a);
}