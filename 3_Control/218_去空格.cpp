#include<stdio.h>
void main()
{
	int i= 0, j= 0;
	char s[100] = {0};
	scanf("%[^\n]",s);
	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' '){s[j++] = s[i];}
		
	}
	s[j] = '\0';
	printf("%s", s);
}
