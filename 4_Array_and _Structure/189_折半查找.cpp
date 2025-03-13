// 折半查找
#include <stdio.h>

// 定义最大长度
#define MAX_LENGTH 100

// 主函数
int main(void)
{
	// 定义数组
	int array[MAX_LENGTH] = {0};

	// 获取数组有效元素个数
	int n;
	scanf_s("%d", &n);

	// 逐个读取数组元素
	for (int i = 0; i < n - 1; i++)
	{
		scanf_s("%d,", &array[i]);
	}
	scanf_s("%d", &array[n - 1]);

	// 定义查找目标
	int goal;
	scanf_s("%d", &goal);

	// 定义高低界
	int high = n - 1;
	int low = 0;

	// 折半查找
	while (low <= high)
	{
		// 定义中界
		int mid = (high + low) / 2;

		// 判断当前元素与目标的关系
		if (array[mid] == goal)
		{
			printf("%d", mid + 1);
			return 0;
		}
		else if (array[mid] < goal)
			low = mid + 1;
		else
			high = mid - 1;
	}
}