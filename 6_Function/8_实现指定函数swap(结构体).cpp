// 交换结构体成员的值
#include <stdio.h>

// 结构体定义
struct Person {
	int age;
	int height;
};
typedef struct Person Person;

// 交换函数
void swap(Person* array, int n)
{
	// 检查参数合法性
	if (array == NULL || n < 1)
	{
		printf("error");
		return;
	}

	// 交换
	int mid = array[0].height;
	array[0].height = array[n - 1].height;
	array[n - 1].height = mid;
}