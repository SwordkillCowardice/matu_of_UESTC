// �����ǰn!
#include <stdio.h>

// ������׳˺���
int factor(int n);

// ����ȫ�ֱ��� sign������������ sign_number����������
int sign = 0;
int sign_number;

// ������
int main(void)
{
	// �������� sign_number ��ʼ��Ϊnumber ����δ������
	int number;
	scanf_s("%d", &number);
	sign_number = number;

	// ���ú�������ӡ���
	int result = factor(number);
	printf("%d!=%d", sign_number, result);
}

// ��׳ˣ������������δ������ֵ
int factor(int n)
{
	// �������
	if (n == 0)
		return 1;
	
	// �ݹ鼰�ж����
	int m = factor(n - 1);

	// �ж�sign,���ѱ�ǣ��򷵻�factor��n -1)
	if (sign == 1)
		return m;

	// �ҳ�������� ���޸�sign��sign_number
	int value = m * n;

	// ע��˴��ж����� ����� ��value�϶�С��ʵ����m * n ��ֵ�����������/n,���ý����Ȼ < m
	if (value / n < m)
	{
		sign = 1;
		sign_number = n - 1;
		return m;
	}

	return value;
}