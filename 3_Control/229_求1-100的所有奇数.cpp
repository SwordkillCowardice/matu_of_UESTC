// 求奇数
#include <stdio.h>

// 常数
#define START 1
#define END 100

// 主函数
int main(void)
{
	for (int i = START; i < END + 1; i++)
	{
		if (i % 2 != 0)
			printf("%d,", i);
	}
}