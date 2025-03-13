// 学号转换
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 常数
#define TOTAL_LENGTH 13
#define MAX 4

// 偏移量数组
const int LENGTH[4] = {4, 2, 4, 3};

// 函数原型
int fun(const char* p, int result[]);

// 函数体
int fun(const char* p, int result[])
{
	// 参数合法性检查
	if (p == NULL)
		return 0;
	else if (strlen(p) != TOTAL_LENGTH)
		return 0;
	else 
	{
		// 检查是否含非数字
		for (int i = 0; i < TOTAL_LENGTH; i++)
		{
			if (!isdigit(p[i]))
				return 0;
		}

		// 定义临时字符缓冲区以存储字符串;定义字符指针,以进行偏移
		char tmp[MAX + 1];
		char* ptr = (char*) p;

		// 依次复制年级、学院、班级、学号, 并转换成相应数字
		for (int i = 0; i < MAX; i++)
		{
			strncpy_s(tmp, (unsigned)sizeof(tmp), ptr, LENGTH[i]);
			result[i] = atoi(tmp);
			ptr += LENGTH[i];
		}
		return 1;
	}
}