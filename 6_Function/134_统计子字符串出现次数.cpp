// 统计子串在父串中出现次数(根据题意,被计数的串间不能有交叉)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数体
int SubStrNum(char* str, char* substr)
{
	// 先分别计算两个字符串的长度,做初步判断
	int length1 = strlen(str);
	int length2 = strlen(substr);

	// 子串更长时,必然为0
	if (length1 < length2)
	{
		printf("match times=0");
		return 0;
	}

	// 分配一个sign数组, 来标记str中substr可能出现的起始位置
	// 定义final变量,final变量是需要统计的最后一个位置,也是可能作为起始的总位置数
	int final = length1 - length2 + 1;
	int* sign = (int*)malloc(final * sizeof(int));
	if (sign == NULL)
		return 0;
	
	// 定义count变量,统计起始位置总数
	int count = 0;
	for (int i = 0; i < final; i++)
	{
		if (str[i] == substr[0])
			sign[count++] = i;
	}

	// count为0子串不可能出现,直接退出
	if (count == 0)
	{
		printf("match times=0");
		return 0;
	}

	// 定义计数变量times,统计总次数;定义变量change,标记每轮中是否更新times
	int times = 0;
	int change = 0;

	// 定义指针tmp, 用于比对字符串
	char* tmp = &str[sign[0]];

	// 循环统计
	// 从每个可能的起始位置开始比对
	for (int i = 0; i < count; i++)
	{
		// 此条件用于判断这一轮判断的初始位置是否已包含在上一个有效串中
		if (tmp > &str[sign[i]] && change)
			continue;

		else
		{
			// 轮初change初始化为1
			change = 1;

			// 定义指针ptr,用于遍历子串;tmp用于遍历父串
			char* ptr = substr;
			tmp = &str[sign[i]];

			// 逐一比对父串和子串的内容
			while (*ptr != '\0')
			{
				if (*tmp != *ptr)
				{
					change = 0;
					break;
				}
				ptr++;
				tmp++;
			}

			// 更新times
			if (change)
				times++;
			
		}
	}

	// 打印结果
	printf("match times=%d", times);

	// 释放内存
	free(sign);
	return 0;
}