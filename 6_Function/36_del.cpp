// 在字符串的内部删除字符串
#include <stdio.h>
#include <string.h>

// 删除函数
void del(char* s, int n, int len)
{
	// 初步检查参数
	if (s == NULL || n < 0 || len < 0)
	{
		printf("error");
		return;
	}

	// 计算s的实际长度
	int length = strcspn(s, " ");

	// 再次检查合法性
	if (n > length - 1 || n + len > length)
	{
		printf("error");
		return;
	}

	// 进行删除操作
	// 删除整个串时(即n = 0, len = length)
	if (len == length)
		s[0] = ' ';

	// 一般情况
	else
	{
		// 计算剩余字符初始下标
		int index = n + len;

		// 循环赋值
		while (index <= length)
		{
			s[n++] = s[index];
			index++;
		}
	}
}
