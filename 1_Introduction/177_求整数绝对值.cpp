// ����������ֵ
#include <stdio.h>

int main(void)
{
	// ����
	int number;
	scanf_s("%d", &number);

	int abs;

	if (number > 0)
		abs = number;
	else
		abs = -number;

	printf("%d", abs);
}