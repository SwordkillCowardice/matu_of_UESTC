// 复制字符并输出
#include <stdio.h>
#include <string.h>

// 定义常量(猜一个最大尺寸)
#define MAX_LENGTH 150

// 主函数
int main(void)
{
	// 定义字符数组s1,s2 
	char s1[MAX_LENGTH];
	char s2[MAX_LENGTH];

	// 读取字符串并获取其长度
	scanf_s("%150s", s1, (unsigned)sizeof(s1));
	int length = (int)strlen(s1);

	// 将s1复制到s2中
	for (int i = 0; i < length + 1; i++)
	{
		s2[i] = s1[i];
	}

	// 打印s2
	for (int i = 0; i < length + 1; i++)
	{
		if (s2[i] == '\0')
			printf("\\0");
		else
			printf("%c", s2[i]);
	}
}