// 拷贝字符串并增加*
#include <stdio.h>
#include <string.h>

// 蒙一个最大数量
#define MAX 100

// 主函数
int main(void)
{
	// 定义字符数组
	char array[MAX + 1];
	char goal[MAX + 1];

	// 读取字符串
	scanf_s("%100s", array, (unsigned)sizeof(array));

	// 求出字符串长度,做出相应处理
	int length = strlen(array);

	// 拷贝字符串
	int j = 0;
	for (int i = 0; i < length; i++)
	{
		// 分类讨论
		if (i == 0 || i % 2 != 0)
		{
			goal[j] = array[i];
			j++;
		}

		// 如果读到array数组的第2i(非0)个位置,则在对应的j位置先插入*,在把array[2i]拷贝过去
		else
		{
			goal[j++] = '*';
			goal[j++] = array[i];
		}
	}
	
	// 添加串尾换行符并打印
	goal[j] = '\0';

	printf("%s\n", goal);
}