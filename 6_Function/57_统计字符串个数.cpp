// 统计字符串中特别字符个数
#include <ctype.h>
#include <stdio.h>

// 函数体
int CalString(char* str)
{
	// 定义数量, 临时指针
	int count = 0;
	char* tmp = str;

	// 循环统计
	while (*tmp != '\0')
	{
		if (!isalpha(*tmp) && !isdigit(*tmp))
			count++;
		tmp++;
	}

	return count;
}