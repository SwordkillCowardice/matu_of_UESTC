// 输出完备数及其约数(30000以内)
#include <math.h>
#include <stdio.h>

// 定义最大长度(对于一个数n，它最多有根号n个约数，此处粗略处理)
#define LENGTH 180

// 求小于等于j的完备数及其约数
void find(int j)
{
	// 定义数组以存储约数
	int array[LENGTH] = { 0 };

	// 求出约数并记录约数之和 (1,2,3肉眼判断不是)
	for (int i = 4; i <= j; i++)
	{
		// 定义约数个数，约数之和，平方根
		int count = 0;
		int total = 0;
		double tmp = sqrt((double)i);

		// 求出约数并记录,记录总和
		for (int z = 2; z <= tmp; z++)
		{
			if (i % z == 0)
			{
				// z为开方值时，只需记录一次(z = 1直接加上)
				if (z == tmp)
				{
					total += z;
					array[count++] = z;
				}

				// z为其他约数时，需要记录两个
				else
				{
					int num = i / z;
					total += (z + num);
					array[count++] = z;
					array[count++] = num;
				}
			}
		}

		// 把没加的1补上
		total += 1;
		count += 1;
		array[count - 1] = 1;

		// 判断是不是完备数
		if (total == i)
		{
			// 将记录约数的数组元素排序
			for (int k = 0; k < count - 1; k++)
			{
				for (int t = 0; t < count - k - 1; t++)
				{
					if (array[t] > array[t + 1])
					{
						int mid = array[t];
						array[t] = array[t + 1];
						array[t + 1] = mid;
					}
				}
			}

			// 打印结果
			printf("%d=", i);
			for (int i = 0; i < count - 1; i++)
			{
				printf("%d+", array[i]);
			}
			printf("%d\n", array[count - 1]);
		}
	}
}