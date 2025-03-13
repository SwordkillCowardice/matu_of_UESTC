// 求中位数
#include <stdio.h>
#include <stdlib.h>

// 主函数
int main(void)
{
	// 定义并获取总元素个数
	int n;
	int p = scanf_s("%d", &n);

	// 检查输入合法性
	if (n <= 0 || p != 1)
	{
		printf("ERROR");
		return 0;
	}

	// 动态分配内存以存储元素
	int* a = (int*)malloc(n * sizeof(int));
	if (a == NULL)
	{
		free(a);
		return 0;
	}

	// 逐个读取输入元素
	for (int i = 0; i < n - 1; i++)
	{
		scanf_s("%d ", &a[i]);
	}
	scanf_s("%d", &a[n - 1]);

	// 选择排序
	int small;
	int index;

	for (int i = 0; i < n - 1; i++)
	{
		// 轮初初始化最小元素为a[i],索引为i
		small = a[i];
		index = i;

		// 遍历其他元素,求出最小元
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < small)
			{
				small = a[j];
				index = j;
			}
		}

		// 如果找到了更小值,则交换元素位置
		if (index != i)
		{
			int mid = a[index];
			a[index] = a[i];
			a[i] = mid;
		}
	}

	// 打印元素
	printf("%d", a[(n - 1) / 2]);

	// 不要忘记释放内存！！！！！！
	free(a);
}