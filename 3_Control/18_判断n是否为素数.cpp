// �ж�����
#include <math.h>
#include <stdio.h>

// ����
#define LOW 3

// ����ԭ��
void isprime(int x);

// ������
int main(void)
{
	// ����,��ȡ���벢���
	int number;
	int p = scanf_s("%d", &number);
	if (p != 1 || number <= LOW)
	{
		printf("error");
		return 0;
	}

	// ������
	isprime(number);
}

// �ж��Ƿ�Ϊ��������ӡ���
void isprime(int x)
{
	double mid = sqrt(double(x));
	for (int i = 2; i <= mid; i++)
	{
		if (x % i == 0)
		{
			printf("no");
			return;
		}
	}
	printf("yes");
	return;
}
