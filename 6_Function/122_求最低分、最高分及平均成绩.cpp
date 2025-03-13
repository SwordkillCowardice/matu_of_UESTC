// 显示成绩情况
#include <stdio.h>

// 定义数组长度
#define LENGTH 10

// 函数原型
void minmax(int s[]);

// 主函数 
int main(void)
{
	// 定义数组
	int array[LENGTH];

	// 读取元素
	for (int i = 0; i < LENGTH; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// 调用函数输出结果
	minmax(array);
}

// 函数
void minmax(int s[])
{
	// 定义最高分，最低分，总成绩，平均值
	int high = 0;
	int low = s[0];
	int total = 0;
	int ave;

	// 更新各变量
	for (int i = 0; i < LENGTH; i++)
	{
		if (s[i] > high)
			high = s[i];
		if (s[i] < low)
			low = s[i];
		total += s[i];
	}
	ave = total / 10;

	// 打印结果
	printf("%d,%d,%d", low, high, ave);
}