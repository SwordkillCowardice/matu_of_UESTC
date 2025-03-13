#include<stdio.h>
int fun(int x, int b[])
{
	int k = 0, r;
	do
	{
		b[k++] = x % 2; x = x / 2;
	} while (x);
	return k;
}
void main()
{
	int data = 0;
	scanf("%d",&data);
	int buf[100] = { 0 };
	int count = fun(data, buf);
	for (int i = count; i > 0; i--)
	{
		printf("%d", buf[i - 1]);
	}
}

