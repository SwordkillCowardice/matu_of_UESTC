#include<stdio.h>
void main()
{
	int x = 0;
	int amax = x, amin = 100;
	while (x>=0)
	{
		if (x > amax){amax = x;}  if (x > 0 && x < amin) { amin = x;}
		scanf("%d", &x);
	}
	printf("%d,%d", amax, amin);
}
