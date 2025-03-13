// 不同字符分别计数
#include <ctype.h>
#include <stdio.h>

// 函数
void count(char* str)
{
	// 检查
	if (str == NULL)
		return;

	else
	{
		// 定义数量
		int letter_count = 0;
		int digit_count = 0;
		int space_count = 0;

		// 定义临时指针
		char* tmp = str;

		// 循环计数
		while (*tmp != '\0')
		{
			if (isalpha(*tmp))
				letter_count++;
			else if (isdigit(*tmp))
				digit_count++;
			else if (*tmp == ' ')
				space_count++;
			tmp++;
		}

		// 打印结果
		printf("%d,%d,%d", letter_count, digit_count, space_count);
	}
}