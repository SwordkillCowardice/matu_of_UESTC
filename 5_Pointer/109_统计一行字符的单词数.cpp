// 统计单词数
#include <stdio.h>

// 定义最大长度
#define MAX_LENGTH 100

// 主函数
int main(void)
{
	// 定义字符数组 读取字符串
	char array[MAX_LENGTH + 1];

	// 定义并获取实际总长
	int length = 0;

	for (int i = 0; i < MAX_LENGTH; i++)
	{
		scanf_s("%c", &array[i], (unsigned)sizeof(char));
		length++;

		// 判断是否达到末尾
		if (array[i] == '\n')
		{
			array[i] = '\0';
			break;
		}
	}

	// 统计总单词数
	int count = 0;

	for (int i = 0; i < length - 1; i++)
	{
		if (array[i] != ' ' && array[i + 1] == ' ')
			count++;
	}

	// 处理特殊情况(即空输入), 同时补充前面判断逻辑
	if (length == 1)
	{
		printf("0");
		return 0;
	}

	else
	{
		if (array[length - 2] != ' ')
			count++;
	}

	// 打印结果
	printf("%d", count);
}