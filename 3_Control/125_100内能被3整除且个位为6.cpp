// 100内能被3整除且个位为6
#include <stdio.h>

// 常量
#define WEIGHT 10
#define MAX 10
#define LAST 6
#define DIVIDER 3

// 主函数
int main(void)
{
	for (int i = 0; i < MAX; i++)
	{
		int number = i * WEIGHT + LAST;
		if (number % DIVIDER != 0)
			continue;
		printf("%d", number);
	}
}