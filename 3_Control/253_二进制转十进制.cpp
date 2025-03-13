// 二进制转化为十进制(由于C语言动态读取字符串很麻烦，所以选择逐个读取再转换)
#include <math.h>
#include <stdio.h>

// 定义常量
#define SIGN '1'
#define BASE 2

// 主函数
int main(void)
{
	// 定义中间变量tmp，定义结果result
	int tmp = 0;
	int result = 0;

	// 定义缓冲字符，定义位权
	char buf = '\0';
	int weight = 0;

	// 当输入不为空，逐个读取字符
	while (buf != '\n')
	{
		scanf_s("%c", &buf, (unsigned)sizeof(char));
		if (buf == SIGN)
			tmp += pow(BASE, (double)weight);
		weight++;
	}

	// 由于读取逻辑 ,weight比实际位数大1,乘的时候还要再减1，此处还原
	weight -= 2;

	// 刚才读取时是反序的，这里重新得到每一个二进制位，重新求值
	while (tmp != 0)
	{
		// 得到二进制位
		int digit = tmp % BASE;
		tmp = tmp / BASE;
		
		// 更新结果
		result += digit * pow(BASE, (double)weight);
		weight--;
	}

	// 打印结果
	printf("%d", result);
}