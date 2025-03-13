// �۰����
#include <stdio.h>

// ������󳤶�
#define MAX_LENGTH 100

// ������
int main(void)
{
	// ��������
	int array[MAX_LENGTH] = {0};

	// ��ȡ������ЧԪ�ظ���
	int n;
	scanf_s("%d", &n);

	// �����ȡ����Ԫ��
	for (int i = 0; i < n - 1; i++)
	{
		scanf_s("%d,", &array[i]);
	}
	scanf_s("%d", &array[n - 1]);

	// �������Ŀ��
	int goal;
	scanf_s("%d", &goal);

	// ����ߵͽ�
	int high = n - 1;
	int low = 0;

	// �۰����
	while (low <= high)
	{
		// �����н�
		int mid = (high + low) / 2;

		// �жϵ�ǰԪ����Ŀ��Ĺ�ϵ
		if (array[mid] == goal)
		{
			printf("%d", mid + 1);
			return 0;
		}
		else if (array[mid] < goal)
			low = mid + 1;
		else
			high = mid - 1;
	}
}