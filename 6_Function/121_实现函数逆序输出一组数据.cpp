// �����������
#include <stdio.h>

// ����
void isort(int a[], int n)
{
	// �������Ϸ���
	if (n < 1)
		return;

	else
	{
		for (int i = n - 1; i > 0; i--)
		{
			printf("%d,", a[i]);
		}
		printf("%d", a[0]);
	}
}