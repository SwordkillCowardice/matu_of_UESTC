// 颠倒输出字符串
#include <stdio.h>

// 定义最大长度
#define MAX_LENGTH 51

// 主函数
int main(void)
{
	// 定义字符数组并存储字符串
	char str[MAX_LENGTH];
	scanf_s("%50s", str, (unsigned)sizeof(str));

	// 得到字符串实际长度
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	// 颠序
	double half = length / 2;
	for (int i = 0; i < half; i++)
	{
		char mid = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = mid;
	}

	// 输出
	printf("%s", str);
}