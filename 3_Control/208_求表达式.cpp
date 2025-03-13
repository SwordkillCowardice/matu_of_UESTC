#include<stdio.h>

void main()
{
	int i, t = 1, s = 0;
	for (i = 1; i <= 101; i += 2) 
	{		
		s += i * t;  t *= -1;
	}
	printf("%d", s);
}

