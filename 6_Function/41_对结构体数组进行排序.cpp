// 对结构体数组进行排序
#include <stdio.h>

// 定义结构体
struct Person {
	int no;
	int age;
	int height;
};
typedef struct Person Person;

// 定义排序方法
void sort(Person* array, int n);

// 排序函数
void sort(Person* array, int n)
{
	// 异常检查
	if (array == NULL || n <= 0)
	{
		printf("error");
		return;
	}

	// 冒泡排序
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (array[j].no > array[j + 1].no || (array[j].no == array[j + 1].no && array[j].age > array[j + 1].age) 
				|| (array[j].no == array[j + 1].no && array[j].age == array[j + 1].age && array[j].height > array[j + 1].height))
			{
				Person mid = array[j];
				array[j] = array[j + 1];
				array[j + 1] = mid;
			}
		}
	}
}