// �жϻ�����
#include <stdio.h>

// ����
#define HIGH 99999
#define LOW 10000
#define LENGTH 5
#define BASE 10

// ����ԭ��
void is_replynumber(int x);

// ������
int main(void)
{
	// ��ȡ���벢���
	int number;
	int p = scanf_s("%d", &number);

	if (number < LOW || number > HIGH || p != 1)
	{
		printf("error");
		return 0;
	}

	// �жϻ���
	is_replynumber(number);
}

// ����ȡ��ÿһλ,��¼���Ƚ�
void is_replynumber(int x)
{
	// ����λֵ����
	int bit_value[LENGTH];

	// ѭ��ȡλ
	for (int i = 0; i < LENGTH; i++)
	{
		bit_value[i] = x % BASE;
		x /= BASE;
	}

	// �ж�
	if (bit_value[0] == bit_value[4] && bit_value[1] == bit_value[3])
		printf("Yes");
	else
		printf("No");
}