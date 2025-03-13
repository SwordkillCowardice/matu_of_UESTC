// 处理字符串
#include <ctype.h>
#include <stdio.h>

// 处理字符串函数
void del(char* str)
{
	// 定义额外的字符指针用于遍历字符串
	char* tmp = str;

	// 遍历字符串
	while (*tmp != '\0')
	{
		// 如果当前字符既不是数字也不是字母
		if (!isalpha(*tmp) && !isdigit(*tmp))
		{
			// 定义另一个指针，去寻找下一个不同的字符
			char* ptr = tmp;
			ptr++;

			// 判断下一个字符是否仍然等于当前字符
			if (*ptr == *tmp)
			{
				// 寻找下一个不同的字符
				while (*ptr != '\0' && *ptr == *tmp)
				{
					ptr++;
				}

				// 讨论退出循环情况
				if (*ptr == '\0')
				{
					tmp++;
					*tmp = '\0';
					return;
				}

				// 成功找到下一个不同字符
				else
				{
					// 定义sign指针保存下一个处理位置
					tmp++;
					char* sign = tmp;

					// 将从不同字符处开始的字符串复制到当前位置
					while (*ptr != '\0')
					{
						*tmp = *ptr;
						tmp++;
						ptr++;
					}
					*tmp = '\0';

					// 更新tmp
					tmp = sign;
				}
			}

			else
				tmp++;
		}

		else
			tmp++;
	}
}