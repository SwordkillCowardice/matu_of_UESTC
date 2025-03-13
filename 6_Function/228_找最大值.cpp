#include<stdio.h>

#define N 10 

int fmax(int s[],int n)
{
	int k,p;
	for (p = 1, k = s[0]; p < n; p++) 
	{
		if (s[p] > k) { k = s[p];}
	}	
		return(k); 
}

int main()
{ 
	int a[N], i;
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d", fmax(a, N));
	return 0;
}
