#include<stdio.h>
void main()
{
	char a[20] = "cehiknqtw"; char s[] = "fbla";
	int i, k, j;
	for (k = 0; s[k] != '\0'; k++)
	{
		j = 0;
		while (s[k] >= a[j] && a[j] != '\0') j++;
		for (int m = 9 + k ; m > j; m--){a[m] = a[m-1];}
		a[j] = s[k];
	}
	puts(a);
}
