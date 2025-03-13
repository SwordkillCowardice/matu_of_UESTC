// 原封不动输出字符串
#include <stdio.h>

// 常量
#define MAX 21

// 主函数
int main(void)
{
	char str[MAX];
	scanf_s("%20s", str, (unsigned)sizeof(str));
	printf("%s", str);
	printf("\n");
}