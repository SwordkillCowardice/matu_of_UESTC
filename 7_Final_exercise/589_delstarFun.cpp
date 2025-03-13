// delstar
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// 函数原型
char* delstars(char* str);

// 主函数 
int main(void)
{
	// 定义源字符串
	char str[100];
	scanf_s("%99s", str, (unsigned)sizeof(str));

	// 结果字符串
	char* goal;
	goal = delstars(str);
	printf("%s", goal);
}

// 函数实现
char* delstars(char* str)
{
	// 指针判空
	if (str == NULL)
	{
		printf("error\n");
		return NULL;
	}

	// 分配返回指针
	char* news = (char*)malloc(100 * sizeof(char));
	if (news == NULL)
	{
		printf("error\n");
		return NULL;
	}

	// 定义探查指针，固定位置指针
	int first = 1; // 用于固定pos1
	char* find = str;
	char* pos1 = NULL;
	char* pos2 = NULL;

	// 第一次遍历字符串,找到两个固定位置
	while (*find != '\0')
	{
		if (isalpha(*find)) // 找到字母
		{
			pos2 = find;
			if (first)
			{
				pos1 = find;
				first = 0;
			}
		}
		else if (*find != '*') // 非字母也非*
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