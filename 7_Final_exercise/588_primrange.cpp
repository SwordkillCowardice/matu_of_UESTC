// ��ָ����Χ�ڵ�����
#include <math.h>
#include <stdio.h>

// �ж�һ�����ǲ�������
int isPrime(int number);

// ������
int main(void)
{
	// ����߽�
	int m, n;
	int count = scanf_s("%d %d", &m, &n);
	if (count != 2 || m >= n || n <= 1)
	{
		printf("error");
		return 0;
	}

	// �����ж����
	int start;
	if (m <= 1)
		start = 2;
	else
		start = m + 1;

	// ����ж�
	for (int i = start; i < n; i++)
	{
		if (isPrime(i))
			printf("%d ", i);
	}
}

// �ж�һ�����ǲ�������
int isPrime(int number)
{
	if (number <= 1)
		return 0;
	else if (number == 2 || number == 3)
		return 1;

	double x = sqrt(double(number));
	for (int i = 2; i <= x; i++)
	{
		if (number % i == 0)
			return 0;
	}
	return 1;
}