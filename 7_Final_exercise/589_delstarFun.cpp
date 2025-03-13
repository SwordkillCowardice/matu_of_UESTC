// delstar
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// ����ԭ��
char* delstars(char* str);

// ������ 
int main(void)
{
	// ����Դ�ַ���
	char str[100];
	scanf_s("%99s", str, (unsigned)sizeof(str));

	// ����ַ���
	char* goal;
	goal = delstars(str);
	printf("%s", goal);
}

// ����ʵ��
char* delstars(char* str)
{
	// ָ���п�
	if (str == NULL)
	{
		printf("error\n");
		return NULL;
	}

	// ���䷵��ָ��
	char* news = (char*)malloc(100 * sizeof(char));
	if (news == NULL)
	{
		printf("error\n");
		return NULL;
	}

	// ����̽��ָ�룬�̶�λ��ָ��
	int first = 1; // ���ڹ̶�pos1
	char* find = str;
	char* pos1 = NULL;
	char* pos2 = NULL;

	// ��һ�α����ַ���,�ҵ������̶�λ��
	while (*find != '\0')
	{
		if (isalpha(*find)) // �ҵ���ĸ
		{
			pos2 = find;
			if (first)
			{
				pos1 = find;
				first = 0;
			}
		}
		else if (*find != '*') // ����ĸҲ��*
		{
			printf("error\n");
			return NULL;
		}
		find++;
	}

	if (pos1 == NULL)
		return str;
	else
	{
		find = str;
		char* begin = news;
		while (*find != '\0')
		{
			if (find > pos1 && find < pos2)
			{
				if (*find != '*')
				{
					*begin = *find;
					begin++;
				}
			}
			else
			{
				*begin = *find;
				begin++;
			}
			find++;
		}
		*begin = '\0';
		return news;
	}
}