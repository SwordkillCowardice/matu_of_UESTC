// 拷贝字符串
#include <stdio.h>

// 字符串拷贝函数
void my_strcpy(char* destination, char* source);

// 函数体
void my_strcpy(char* destination, char* source)
{
	// 判断异常情况
	if (destination == NULL || source == NULL)
	{
		printf("error");
		return;
	}

	// 复制字符串: 此处注意坑：题目给的字符串不一定以' ' 结尾
	int i = 0;
	do
	{
		destination[i] = source[i];
		i++;
	} while (source[i] != ' ' && source[i] != '\0');

	destination[i] = source[i];
}