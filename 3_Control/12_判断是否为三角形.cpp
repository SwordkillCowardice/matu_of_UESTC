// �ж�������
#include <stdio.h>
#include <stdlib.h>

// ����ԭ��
void is_triangle(int x, int y, int z);

// ������
int main(void)
{
	// ��ȡ���벢���
	int a, b, c;
	int p = scanf_s("%d,%d,%d", &a, &b, &c);
	if (p != 3 || a <= 0 || b <= 0 || c <= 0)
	{
		printf("error");
		return 0;
	}

	// �ж�������
	is_triangle(a, b, c);
}

// �ж�������
void is_triangle(int x, int y, int z)
{
	// �����������ߵĺͲ�
	int sum = x + y;
	int dif = abs(x - y);

	// �ж�
	if (dif < z && sum > z)
		printf("yes");
	else
		printf("no");
}