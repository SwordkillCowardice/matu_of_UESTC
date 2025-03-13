// ������֮��Ϊż��
#include <stdio.h>

// �����ж���������
int is_prime(int x);

// ���������½�
#define LOW 2

// ������
int main(void)
{
	// ���岢��ȡ����,ͬʱ���
	int number;
	scanf_s("%d", &number);

	if (number <= LOW || number % 2 != 0)
	{
		printf("Error");
		return 0;
	}

	// ѭ���ҳ����з��������������
	for (int i = LOW; i < number; i++)
	{
		if (is_prime(i))
		{
			for (int j = i; j < number; j++)
			{
				if (i + j == number && is_prime(j))
				{
					printf("%d+%d\n", i, j);
					break;
				}
			}
		}
	}
}

// �ж�һ�����ǲ�������
int is_prime(int x)
{   
	// ���ж�x�ǲ���1
	if (x == 1)
		return 0;

	// ����ѭ���ж�
	for (int i = LOW; i < x; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}