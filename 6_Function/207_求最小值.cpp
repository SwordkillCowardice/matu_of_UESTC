#include<stdio.h>
#include <math.h>

void findmin(int *s, int t, int *k) {
	int p;
	for (p = 0, *k = p; p < t; p++)
	{
		if (s[p] < s[*k])
		{
			*k = p;
		}			
	}	
}


void main()
{
	int a[10] = { 0 };
	int k;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	findmin(a, 10, &k);
	printf("%d,%d\n", k, a[k]);
}
