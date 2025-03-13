// 求k值（用pow函数更快 目前不知道原因）
#include <math.h>
#include <stdio.h>

// 常数
#define BASE 2

// 主函数
int main(void)
{
	// 获取m值
	unsigned int m;
	scanf_s("%u", &m);

	// 定义结果变量
	unsigned int result = 0;

	// 循环
	for (double start = pow(BASE, (double)result); start <= m; result++)
	{
		start = pow(BASE, (double)(result + 1));
	}

	// 求出并打印结果
	result = result - 1;
	printf("%u", result);
}