// 判断闰年
// 原理：如果year能够被4整除，但是不能被100整除，则year是闰年。
// 如果year能够被400整除，则year是闰年。
#include <stdio.h>

// 定义常数
#define FACTO 4
#define FACTT 100
#define FACTR 400

//主函数
int main(void)
{
	// 定义并获取年份
	int year;
	scanf_s("%d", &year);

	// 判断是否为闰年
	if ((year % FACTO == 0 && year % FACTT != 0) || (year % FACTR == 0))
		printf("yes");
	else
		printf("no");
}