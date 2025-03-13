// 输出桃子数
#include <stdio.h>

// 定义系数，用于表示食用情况和总天数
#define FACTO 2
#define FACTT 1
#define DAYS 9

// 主函数
int main(void)
{
	// 定义第十天剩的桃子
	int rest = 1;

	// 循环打印结果，循环中更新rest
	for (int i = 0; i < DAYS; i++)
	{
		rest = (rest + FACTT) * FACTO;
		printf("%d,", rest);
	}
	
	// 打印总桃子数
	printf("%d", rest);
}
