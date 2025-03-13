#include<stdio.h>
void main()
{
	int n, k = 1, s = 0, m;
	for (n = 1; n <= 100; n++) {
		k = 1; s = 0;
		m = n;
		while (m>0) 
		{
			int low = m % 10; k *= low; s+=low; m = m /10;
		}
		if (k > s)
			printf("%d", n);
	}
}
