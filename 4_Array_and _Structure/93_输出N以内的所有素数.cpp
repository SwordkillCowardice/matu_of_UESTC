// �ҳ�1-N����������
#include <math.h>
#include <stdio.h>

// �ж���������
int isprime(int number);
void print_prime(int x);

// ������
int main(void)
{
	// ��ȡ���벢���
	int N;
	int p = scanf_s("%d", &N);

	if (p != 1 || N <= 1)
	{
		printf("error");
		return 0;
	}

	// ��ӡ����
	print_prime(N);
}

// �����ж���������
int isprime(int number)
{
	// ����1��������
	if (number == 1)
		return 0;
	
	// �ж�����
	double tmp = sqrt((double)number);

	for (int i = 2; i <= tmp; i++)
	{
		if (number % i == 0)
			return 0;
	}

	return 1;
}

// ��ӡ����
void print_prime(int x)
{
	// 2ֱ�Ӵ�ӡ
	printf("2,");

	// ����ż����
	for (int i = 3; i <= x; i += 2)
	{
		if (isprime(i))
			printf("%d,", i);
	}
}