// 实现字符串的连接
#include <stdio.h>
#include <string.h>

// 函数
void my_strcat(char* destination, const char* source)
{
	// 检查异常(指针是否为空)
	if (destination == NULL || source == NULL)
	{
		printf("error");
		return;
	}

	// 找到destination字符串的末尾
	int index = strcspn(destination, " ");

	// 若destination字符串没有空格，即无终止位置
	if (index == strlen(destination))
	{
		printf("error");
		return;
	}

	// 从destination末尾开始复制source中字符串
	else
	{
		// ptr记录当前末尾位置
		char* ptr = destination + index;
		int i = 0;

		while (source[i] != ' ')
		{
			*ptr = source[i];
			ptr++;
			i++;
		}

		// 添加末尾终止符(此处以空格为终止符)
		*ptr = ' ';
	}
}