// 输出n的1-5次方
#include <math.h>
#include <stdio.h>

// 常数
#define START 1
#define END 5

// 主函数
int main(void)
{
	// 获取输入
	int n;
	scanf_s("%d", &n);

	// 打印
	for (int i = START; i <= END; i++)
	{
		printf("%d", (int)pow(double(n), double(i)));
		if (i <= END - 1)
			printf(" ");
	}
	printf("\n");
}