// ����ƽ������
#include <stdio.h>

// ���峣��
#define SINGLE 0.8
#define START 2
#define FACT 2
#define HIGH 100

// ������
int main(void)
{
	// �����ܻ��ѣ�����������ƻ������
	double cost = 0;
	int days = 0;
	int amount = 0;

	// ѭ��,���¸���������ֵ(�˴������ж�����)
	for (int i = START; amount + i <= HIGH; i *= FACT)
	{
		amount += i;
		days++;
		cost += SINGLE * i;
	}

	// ����ƽ�����Ѳ�����
	double ave = cost / days;
	printf("%.2lf", ave);
}