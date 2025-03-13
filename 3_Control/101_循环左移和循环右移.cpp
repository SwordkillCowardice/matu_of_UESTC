// 循环左移/右移（即：将移出的高位（低位）再放回低位（高位））
#include <stdio.h>
#include <stdlib.h>

// 常数
#define LENGTH 32

// 主函数
int main(void)
{
	// 获取输入
	int i, j;
	scanf_s("%d %d", &i, &j);

	// 根据j的情况做相应处理
	if (j == 0)
	{
		printf("%d", i);
		return 0;
	}

	// j不为0时，移位前需将i转换为无符号整数，因为有符号数移位时补充0还是1是不确定的，
	// 而无符号数统一补0，满足按位或（|）的运算性质
	else
	{
		// 定义无符号tmp
		unsigned tmp = (unsigned)i;

		// 左移j位
		if (j > 0)
		{
			j = j % LENGTH;
			tmp = tmp << j | tmp >> (LENGTH - j);
		}

		// 右移-j位 负数先取绝对值，再取余（题目写错了 题意是：j为负数时右移-j位
		else
		{
			j = abs(j) % LENGTH;
			tmp = tmp >> j | tmp << (LENGTH - j);
		}

		// 打印结果
		i = (int)tmp;
		printf("%d", i);
	}
}