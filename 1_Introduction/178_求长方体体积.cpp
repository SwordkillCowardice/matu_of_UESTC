// 求长方体体积
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int v = a * b * c;
	printf("%d", v);
}