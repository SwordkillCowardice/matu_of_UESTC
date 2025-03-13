// 判断回文数
#include <stdio.h>

// 常数
#define HIGH 99999
#define LOW 10000
#define LENGTH 5
#define BASE 10

// 函数原型
void is_replynumber(int x);

// 主函数
int main(void)
{
	// 获取输入并检查
	int number;
	int p = scanf_s("%d", &number);

	if (number < LOW || number > HIGH || p != 1)
	{
		printf("error");
		return 0;
	}

	// 判断回文
	is_replynumber(number);
}

// 依次取出每一位,记录并比较
void is_replynumber(int x)
{
	// 定义位值数组
	int bit_value[LENGTH];

	// 循环取位
	for (int i = 0; i < LENGTH; i++)
	{
		bit_value[i] = x % BASE;
		x /= BASE;
	}

	// 判断
	if (bit_value[0] == bit_value[4] && bit_value[1] == bit_value[3])
		printf("Yes");
	else
		printf("No");
}