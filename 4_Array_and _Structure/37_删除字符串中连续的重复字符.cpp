// 删除连续的重复字符
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// 定义字符串最大长度
#define MAX_LENGTH 51

// 主函数
int main(void)
{
	// 定义字符数组并获取输入
	char str[MAX_LENGTH];
	scanf_s("%50s", str, (unsigned)sizeof(str));

	// 获取字符串长度(警告无需管，scanf_s已经加了)
	int length = (int)strlen(str);

	// 处理字符串
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		// 如果当前字符与下一个字符重复，删除当前字符
		if (str[i + 1] == str[i] && !isalpha(str[i]) && !isdigit(str[i]))
			continue;

		str[count] = str[i];
		count++;
	}

	// 不要忘记在删除过后的数组添加新的终止符
	str[count] = '\0';

	// 打印字符串
	printf("%s", str);
}