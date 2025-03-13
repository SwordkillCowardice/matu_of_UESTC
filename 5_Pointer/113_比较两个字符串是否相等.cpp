// 比较字符串
#include <stdio.h>
#include <string.h>

// 定义最大长度
#define MAX_LENGTH 256

// 主函数
int main(void)
{
	// 定义字符数组1和2
	char arrayo[MAX_LENGTH + 1];
	char arrayt[MAX_LENGTH + 1];

	// 读取字符串1
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		scanf_s("%c", &arrayo[i], unsigned(sizeof(char)));
		if (arrayo[i] == '\n')
		{
			arrayo[i] = '\0';
			break;
		}
	}

	// 读取字符串2
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		scanf_s("%c", &arrayt[i], unsigned(sizeof(char)));
		if (arrayt[i] == '\n')
		{
			arrayt[i] = '\0';
			break;
		}
	}

	// 获得比较结果
	if (!strcmp(arrayo, arrayt))
		printf("equal");
	else
		printf("unequal");
}