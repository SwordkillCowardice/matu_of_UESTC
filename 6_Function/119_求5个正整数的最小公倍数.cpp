// 求最小公倍数
#include <stdio.h>
#include <stdlib.h>

// 定义数组长度
#define LENGTH 5

// 求最小公倍数函数
int find(int director, int j);

// 主函数
int main(void)
{
	// 定义数组,读入并存储元素
	int array[LENGTH];

	for (int i = 0; i < LENGTH; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// 求出结果,并输出
	int result = find(array[0], array[1]);

	for (int i = 2; i < LENGTH; i++)
	{
		result = find(result, array[i]);
	}

	printf("%d", result);
}

// 求最小公倍数函数
int find(int director, int j)
{
	// 先将两数转为整数
	int num1 = abs(director);
	int num2 = abs(j);

	// 将大数存入num1
	if (num1 < num2)
	{
		int mid = num1;
		num1 = num2;
		num2 = mid;
	}

	// 求出结果
	int final = num1;
	while (final % num2 != 0)
	{
		final += num1;
	}
	return final;
}