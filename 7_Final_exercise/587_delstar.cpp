// delstar
#include <ctype.h>
#include <stdio.h>

// 定义最大长度
#define LENGTH 101

// 主函数
int main(void)
{
	// 定义原字符数组,修改后字符数组
	char ostr[LENGTH];
	char lstr[LENGTH];
	scanf_s("%100s", ostr, unsigned(sizeof(ostr)));

	// 定义由*变成字母的第一个位置index1；由字母变成*的最后一个位置index2
	int first = 0;
	int index1 = -1;
	int index2 = -1;

	// 定义字符串长度len
	int len = 1;

	if (ostr[len] == '\0') // 字符串长为1
	{
		if (ostr[0] != '*' && !isalpha(ostr[0]))
			printf("error\n");
		else
			printf("%s\n", ostr);
		return 0;
	}

	// 遍历字符串
	while (ostr[len] != '\0') 
	{
		if ((ostr[len - 1] != '*' && !(isalpha(ostr[len - 1]))) || (ostr[len] != '*' && !(isalpha(ostr[len])))) // 错误字符串
		{
			printf("error\n");
			return 0;
		}
		if (ostr[len - 1] == '*' && isalpha(ostr[len])) // 前*后字母
		{
			if (!first)
			{
				index1 = len;
				first = 1;
			}
		}
		else if (isalpha(ostr[len - 1]) && ostr[len] == '*') // 前字母后*
			index2 = len - 1;
		len++;
	}

	// 分类讨论
	if (index1 == -1 || index2 == -1) // 不用处理的字符串
		printf("%s\n", ostr);
	else
	{
		if (ostr[0] == '*' && isalpha(ostr[len - 1])) // 开头*，结尾字母
			index2 = len - 1;
		else if (isalpha(ostr[0]) && ostr[len - 1] == '*') // 开头字母，结尾*
			index1 = 0;
		else if (isalpha(ostr[0]) && isalpha(ostr[len - 1])) // 开头字母，结尾字母
		{
			index1 = 0;
			index2 = len - 1;
		}
		
		// 循环处理
		int ptr = 0;
		int ctr = 0;
		while (ostr[ctr] != '\0')
		{
			if (ctr > index1 && ctr < index2) // 指定位置之间的字符串
			{
				if (ostr[ctr] != '*')
					lstr[ptr++] = ostr[ctr];
			}
			else
				lstr[ptr++] = ostr[ctr];
			ctr++;
		}
		lstr[ptr] = '\0';
		printf("%s\n", lstr); // 输出结果
	}
}