// 输出倒三角形
#include <stdio.h>

// 定义常量
#define LOW 1
#define HIGH 80

// 定义函数
void print_row(int length, int order);
void print_triangle(int length);

// 主函数
int main(void)
{
	// 获取顶边长并检查
	int length;
	scanf_s("%d", &length);

	if (length < LOW || length > HIGH || length % 2 == 0)
	{
		printf("error");
		return 0;
	}

	// 打印结果
	print_triangle(length);
}

// 打印每行
void print_row(int length, int order)
{
	// 打印空格
	int space_count = order;
	
	for (int i = 0; i < space_count; i++)
	{
		printf(" ");
	}

	// 打印星星
	int star_count = length - 2 * order;

	for (int i = 0; i < star_count; i++)
	{
		printf("*");
	}

	// 打印换行符
	printf("\n");
}

// 打印三角形
void print_triangle(int length)
{
	// 计算总行数
	int total_row = (length + 1) / 2;

	for (int i = 0; i < total_row; i++)
	{
		print_row(length, i);
	}
}