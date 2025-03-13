// 逆序输出数据
#include <stdio.h>

// 函数
void isort(int a[], int n)
{
	// 检查参数合法性
	if (n < 1)
		return;

	else
	{
		for (int i = n - 1; i > 0; i--)
		{
			printf("%d,", a[i]);
		}
		printf("%d", a[0]);
	}
}