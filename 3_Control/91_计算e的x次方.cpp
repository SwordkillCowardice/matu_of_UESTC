// ����e��x�η�
#include <math.h>
#include <stdio.h>

// ����
#define LOW 0

// ����ԭ��
double factorial(double number);
double e_power(double m, double w);

//������
int main(void)
{
	// ���岢��ȡ���룬ͬʱ���
	double x, n;
	int p = scanf_s("%lf %lf", &x, &n);
	if (p != 2 || n < 0)
	{
		printf("error");
		return 0;
	}

	// ����e��x�η�
	double result = e_power(x, n);
	printf("%.6lf", result);
}

// �׳˺���
double factorial(double number)
{
	// �������
	if (number == 0)
		return 1;

	// �ݹ����
	return number * factorial(number - 1);
}

// ������
double e_power(double m, double w)
{
	double sum = 0;
	for (int i = 0; i <= w; i++)
	{
		sum += pow(m, i) / factorial(i);
	}
	return sum;
}