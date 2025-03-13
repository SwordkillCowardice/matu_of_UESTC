// 字符冒泡排序
#include <stdio.h>

// 定义最大长度
#define MAX_LENGTH 5

// 主函数
int main(void)
{
	// 定义字符数组并读取字符串
	char str[MAX_LENGTH + 1];
	scanf_s("%5s", str, (unsigned)sizeof(str));

	// 冒泡排序
	for (int i = 0; i < MAX_LENGTH - 1; i++)
	{
		for (int j = 0; j < MAX_LENGTH - 1 - i; j++)
		{
			if (str[j] > str[j + 1])
			{
				char mid = str[j];
				str[j] = str[j + 1];
				str[j + 1] = mid;
			}
		}
	}

	// 打印字符串
	for (int i = 0; i < MAX_LENGTH - 1; i++)
	{
		printf("%c,", str[i]);
	}
	printf("%c", str[MAX_LENGTH - 1]);
}