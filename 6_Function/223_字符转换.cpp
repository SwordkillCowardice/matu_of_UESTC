#include<stdio.h>
void expand(char s[], char t[]) {
	int i, j;
	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a'){t[j++] = 'x'; t[j++] = 'x';} else if (s[i] == 'b'){t[j++] = 'y'; t[j++] = 'y';} else{t[j++] = s[i];}
	}
	t[j] = '\0';
}

void main()
{
	char s[100] = "thisisaboyandheishandsomeandwhatismoreveryrich";
	char t[100] = { 0 };
	expand(s, t);
	printf(t);
}
