#include<stdio.h>
void main()
{
	char s[80];
	int i=0, j=0; 
	gets(s);
	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 'c') {s[j] = s[i]; j++;}
	}
	s[j] = '\0';
	puts(s);
}
