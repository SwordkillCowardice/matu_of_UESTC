// ���1-1000֮������(��Ŀ���������Ͻ� Ӧ����һ����ǡ�õ��ڳ�������֮�������֮�ͣ�
#include <stdio.h>

// ����߽糣��
#define LOW 1
#define HIGH 1000

// ��������������
void print_mantissas(int x, int y);

// ������
int main(void)
{
	print_mantissas(LOW, HIGH);
}

// ѭ��Ƕ�������������ӡ
void print_mantissas(int x, int y)
{
	// �������Ӻ�
	int sum;

	for (int i = x; i < y; i++)
	{
		// ÿһ���жϿ�ʼǰ��������
		sum = 0;

		// ���
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}

		// ÿһ�ֽ��������ж�
		if (sum == i)
			printf("%d\n", i);
	}
}