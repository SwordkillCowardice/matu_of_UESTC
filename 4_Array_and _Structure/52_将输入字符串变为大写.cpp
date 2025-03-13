// 字符串转大写
#include <ctype.h>
#include <stdio.h>

// 定义常数
#define MAX_LENGTH 21

// 主函数
int main(void)
{
	// 定义字符数组并存储字符串
	char str[MAX_LENGTH];
	scanf_s("%20s", str, (unsigned)sizeof(str));

	// 将字符串中小写字母转大写
	int i = 0;
	while (str[i] != '\0')
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		i++;
	}

	// 打印
	printf("%s\n", str);
}