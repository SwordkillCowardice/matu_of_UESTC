// 输出指定的数
#include <stdio.h>

// 定义常量
#define LOW 100
#define HIGH 200
#define FIRST 3
#define SECOND 7

// 主函数
int main(void)
{
	// 循环一下
	for (int i = LOW; i <= HIGH; i++)
	{
		if (i % FIRST == 0 || i % SECOND == 0)
			continue;

		printf("%d", i);
	}
}