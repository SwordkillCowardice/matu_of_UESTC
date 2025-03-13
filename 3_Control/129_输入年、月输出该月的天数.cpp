// �������µõ�����
#include <stdio.h>

// �����ж��������
#define FACTO 400
#define FACTT 4
#define FACTR 100

// ������ܵ����ں��·�������
const int MONTHS[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
const int DAYS[] = {28, 29, 30, 31};

// ����ԭ��
int is_leapyear(int year);
int get_days(int year, int month);

// ������
int main(void)
{
	// �������£�����ȡ���룬���·�ת�������ʷ�Χ
	int year, month;
	scanf_s("%d %d", &year, &month);
	month = month % (sizeof(MONTHS) / sizeof(int));
	if (month == 0)
		month++;
	
	// ���ú���������
	int days = get_days(year, month);
	printf("days:%d", days);
}

// �ж��Ƿ�Ϊ����
int is_leapyear(int year)
{
	// ����������ж�һ��
	if (year % FACTO == 0)
		return 1;
	else if (year % FACTT == 0 && year % FACTR != 0)
		return 1;
	else
		return 0;
}

// �õ����� ����
int get_days(int year, int month)
{
	// �ж��Ƿ�Ϊ����
	if (month == MONTHS[0] || month == MONTHS[2] || month == MONTHS[4] || month == MONTHS[6]
		|| month == MONTHS[7] || month == MONTHS[9] || month == MONTHS[11])
		return DAYS[3];
	else if (month == MONTHS[3] || month == MONTHS[5] || month == MONTHS[8] || month == MONTHS[10])
		return DAYS[2];
	else if (is_leapyear(year))
		return DAYS[1];
	else
		return DAYS[0];
}