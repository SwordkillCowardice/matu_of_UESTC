// 实现在字符串的内部增加字符串
#include <stdio.h>
#include <string.h>

// 插入函数
void insert(char* s1, char* s2, int n)
{
	// 参数检查
	if (s1 == NULL || s2 == NULL || n < 0)
	{
		printf("error");
		return;
	}

	// 计算出s1和s2的实际长度(以空格为结束符)
	int length1 = strcspn(s1, " ");
	int length2 = strcspn(s2, " ");

	// 根据n的大小进行讨论
	if (n > length1)
	{
		printf("error");
		return;
	}

	else
	{
		// 移动原有字符(包含末尾空格(视为结束符))
		for (int j = length1; j >= n; j--)
		{
			s1[j + length2] = s1[j];
		}

		// 插入s2(s2的结束符不再插入)
		for (int i = 0; i < length2; i++)
		{
			s1[n++] = s2[i];
		}
	}
}