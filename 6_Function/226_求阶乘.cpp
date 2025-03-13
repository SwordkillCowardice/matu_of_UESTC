#include<stdio.h>

long fun(int n) 
{ 
	int i; 
	long s;
	s = 1; for (i = 1; i <= n; i++){s *= i;}
	return( s ); 
}

int main() 
{ 
	int n; 
	scanf("%d",&n); 
	printf("%ld\n", fun(n)); 
	return 0;
}
