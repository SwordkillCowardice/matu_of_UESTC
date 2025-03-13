#include<stdio.h>
void main() {
	int i, j=0;
	for (i = 0; j<100; i++) 
	{
		j = i * 10 + 6;
		if (j % 3 != 0) {continue;}
		printf("%d", j);
	}
}
