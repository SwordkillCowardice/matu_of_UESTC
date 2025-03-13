// 输出由星号组成的三角形
#include <stdio.h>

// 常量
#define FACTOR 2
#define LOW 1
#define HIGH 80

// 函数原型
void print_row(int length, int row);
void print_triangle(int length);

// 主函数
int main(void)
{
	// 获取输入并检查
	int length;
	int p = scanf_s("%d", &length);

	if (p != 1 || length < LOW || length > HIGH || length % 2 == 0)
	{
		printf("error");
		return 0;
	}

	// 输出
	print_triangle(length);
}

// 打印每行
void print_row(int length, int row)
{
	// 定义每行的空格数和星数
	int star_number = FACTOR * row + 1;
	int space_number = (length - star_number) / FACTOR;

	// 打印空格和星星，末尾再打换行符
	for (int i = 0; i < space_number; i++)
	{
		printf(" ");
	}

	for (int i = 0; i < star_number; i++)
	{
		printf("*");
	}

	printf("\n");
}

// 总打印函数
void print_triangle(int length)
{
	// 确定总行数
	int total = (length + 1) / FACTOR;
	
	// 打印
	for (int i = 0; i < total; i++)
	{
		print_row(length, i);
	}
}