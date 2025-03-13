// ��1-n�׳�֮��
#include <stdio.h>

// ����߽�����
#define LOW 1
#define HIGH 10

// ������׳˺���
int factor(int x);

// ������
int main(void)
{
	// ��ȡ���벢���
	int number;
	int p = scanf_s("%d", &number);

	if (p != 1 || number < LOW || number > HIGH)
	{
		printf("error");
		return 0;
	}

	// ��Ͳ�������
	int sum = 0;
	for (int i = LOW; i <= number; i++)
	{
		sum += factor(i);
	}
	printf("%d\n", sum);
}

// ����׳˺���
int factor(int x)
{
	if (x == 0)
		return 1;
	else
		return x * factor(x - 1);
}