// �����Լ������С������
#include <stdio.h>
#include <stdlib.h>

// ����ԭ��
int lco_multiple(int x, int y);
int gco_divisor(int x, int y);

// ������
int main(void)
{
	// ���岢��ȡ����
	int first_number, second_number;
	scanf_s("%d %d", &first_number, &second_number);

	// ʹǰһ����Ϊ����ֵ��������������ظ�����(��0����LCM��GCD��û�����壬�ʲ����������к���0��
	if (abs(first_number) < abs(second_number))
	{
		int mid = first_number;
		first_number = second_number;
		second_number = mid;
	}

	// ���ú��� ��������
	int multiple = lco_multiple(first_number, second_number);
	int divisor = gco_divisor(first_number, second_number);
	printf("%d,%d", divisor, multiple);
}

// �����ȡ��С����������
int lco_multiple(int x, int y)
{
	// �����и��������������[a,b] = [-a,-b]
	int first = abs(x);
	int high = abs(y);

	for (int i = 1; i < high; i++)
	{
		if (first * i % high == 0)
			return first * i;
	}
	return high * first;
}

// �����ȡ���Լ������
int gco_divisor(int x, int y)
{
	// ����ѭ���Ͻ�
	int edge = abs(y);

	for (int i = edge; i > 0; i--)
		if (x % i == 0 && y % i == 0)
			return i;
}