// 统计字母个数和数字个数
#include <ctype.h>
#include <stdio.h>

// 蒙一个最大长度
#define MAX_LENGTH 100

// 主函数
int main(void)
{
	// 定义字符数组,读取字符串
	char array[MAX_LENGTH + 1];

	for (int i = 0; i < MAX_LENGTH; i++)
	{
		scanf_s("%c", &array[i], (unsigned)sizeof(char));

		if (array[i] == '\n')
		{
			array[i] = '\0';
			break;
		}
	}

	// 统计数量 
	int letter_count = 0;
	int digit_count = 0;
	char* p = array;

	while (*p != '\0')
	{
		// 判断是否为字母/数字
		if (isalpha(*p))
			letter_count++;
		if (isdigit(*p))
			digit_count++;
		p++;
	}

	// 打印结果
	printf("letters:%d,digits:%d", letter_count, digit_count);
}