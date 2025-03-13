// 求整数绝对值
#include <stdio.h>

int main(void)
{
	// 输入
	int number;
	scanf_s("%d", &number);

	int abs;

	if (number > 0)
		abs = number;
	else
		abs = -number;

	printf("%d", abs);
}