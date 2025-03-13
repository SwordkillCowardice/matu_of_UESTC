// 判断回文
#include <stdio.h>
#include <string.h>

// 定义常数
#define MAX_LENGTH 31

// 主函数
int main(void)
{
	// 定义字符数组，存储字符串
	char str[MAX_LENGTH];
	scanf_s("%30s", str, (unsigned)sizeof(str));
	
	// 求出字符串长度及其中点
	int length = strlen(str);
	int half = length / 2;

	// 循环判断
	for (int i = 0; i < half; i++)
	{
		if (str[i] != str[length - i - 1])
		{
			printf("false");
			return 0;
		}
	}
	printf("true");
}