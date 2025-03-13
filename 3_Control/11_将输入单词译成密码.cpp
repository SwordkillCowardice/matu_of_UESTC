// 将单词翻译为密码
#include <ctype.h>
#include <stdio.h>

// 常数
#define MAX 20
#define FIRSTO 'a'
#define FIRSTT 'A'
#define LAST0 'v'
#define LASTT 'V'
#define BIASO 4
#define BIAST 22

// 函数原型
int get_words(char word[], int length);
void substitute(char word[]);

// 主函数
int main(void)
{	
	// 定义原文数组
	char plain[MAX + 1];

	// 获取单词
	int sign = get_words(plain, MAX);

	// 替换字符
	if (sign != 0)
		substitute(plain);
}

// 正确获取单词
int get_words(char word[], int length)
{
	// 逐个读取字符 并作相应处理
	for (int i = 0; i < length; i++)
	{
		scanf_s("%c", &word[i], (unsigned)sizeof(char));

		// 读取首字符
		if (i == 0)
		{
			if (!isalpha(word[i]))
			{
				printf("error");
				return 0;
			}
		}

		// 第二轮及往后
		else
		{
			// 若为enter，则结束输入，并标记终止符为替换做准备
			if (word[i] == '\n')
			{
				word[i] = '\0';
				return 1;
			}

			// 再判断是否为字母
			else if (!isalpha(word[i]))
			{
				printf("error");
				return 0;
			}
		}
	}
	// 读取了满20个字符，没有遇到enter,则末尾添上'\0'
	word[length] = '\0';
	return 1;
}

// 加密并输出
void substitute(char word[])
{
	for (int i = 0; word[i] != '\0'; i++)
	{
		if ((word[i] >= FIRSTO && word[i] <= LAST0) || (word[i] >= FIRSTT && word[i] <= LASTT))
			word[i] = word[i] + BIASO;
		else
			word[i] = word[i] - BIAST;
		printf("%c", word[i]);
	}
}