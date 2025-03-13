// ����С������
#include <stdio.h>

// ����ԭ��
int get_lcm(int x, int y);

// ������
int main(void)
{
	// ��ȡ����
	int first, second;
	scanf_s("%d %d", &first, &second);

	// ����������ӡ
	int result = get_lcm(first, second);
	printf("%d\n", result);
}

// ����С������
int get_lcm(int x, int y)
{
	// �ҳ����������Ǹ�������x��
	if (x < y)
	{
		int mid = x;
		x = y;
		y = mid;
	}

	// ѭ�����
	int i = 1;
	while (x * i % y != 0)
	{
		i++;
	}

	return i * x;
}