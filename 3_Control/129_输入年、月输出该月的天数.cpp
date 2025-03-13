// 输入年月得到天数
#include <stdio.h>

// 定义判断闰年参数
#define FACTO 400
#define FACTT 4
#define FACTR 100

// 定义可能的日期和月份情况情况
const int MONTHS[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
const int DAYS[] = {28, 29, 30, 31};

// 函数原型
int is_leapyear(int year);
int get_days(int year, int month);

// 主函数
int main(void)
{
	// 定义年月，并获取输入，将月份转换到合适范围
	int year, month;
	scanf_s("%d %d", &year, &month);
	month = month % (sizeof(MONTHS) / sizeof(int));
	if (month == 0)
		month++;
	
	// 调用函数输出结果
	int days = get_days(year, month);
	printf("days:%d", days);
}

// 判断是否为闰年
int is_leapyear(int year)
{
	// 两种情况都判断一下
	if (year % FACTO == 0)
		return 1;
	else if (year % FACTT == 0 && year % FACTR != 0)
		return 1;
	else
		return 0;
}

// 得到天数 函数
int get_days(int year, int month)
{
	// 判断是否为大月
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