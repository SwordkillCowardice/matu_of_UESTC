// 检查字符串1中是否包含字符串2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 猜一个最大长度
#define MAX 100

// 主函数
int main(void)
{
	// 定义两个字符数组，分别存储两个字符串
	char arrayo[MAX + 1];
	char arrayt[MAX + 1];

	// 分别读取字符串
	for (int i = 0; i < MAX; i++)
	{
		scanf_s("%c", &arrayo[i], (unsigned)sizeof(char));

		if (arrayo[i] == '\n')
		{
			arrayo[i] = '\0';
			break;
		}
	}
	arrayo[MAX] = '\0';

	for (int i = 0; i < MAX; i++)
	{
		scanf_s("%c", &arrayt[i], (unsigned)sizeof(char));

		if (arrayt[i] == '\n')
		{
			arrayt[i] = '\0';
			break;
		}
	}
	arrayt[MAX] = '\0';

	// 做初步判断:若字符串2比字符串1长，必然是不包含的
	int length1 = (int)strlen(arrayo);
	int length2 = (int)strlen(arrayt);

	if (length1 < length2)
	{
		printf("NO");
		return 0;
	}

	// 定义出现次数，及记录出现位置的数组
	int times = 0;
	int loc[MAX] = { 0 };

	// 定义goal指针来遍历字符串1,定义tmp指针构造临时存储区
	char* goal = arrayo;
	char* tmp = (char*)malloc(sizeof(char) * (length2 + 1));
	if (tmp == NULL)
		return 0;
	
	// 定义循环计数变量, 定义字符串1未比对长度
	int i = 0;
	int rest = length1;

	// 以固定步长复制字符串1，直至长度不够或者到末端
	while (*goal != '\0' && rest >= length2)
	{
		// 拷贝字符串
		strncpy_s(tmp, length2 + 1, goal, length2);
		printf("%s", tmp);

		// 若比对成功，则标记该位置，并增加次数
		if (!strcmp(tmp, arrayt))
		{
			loc[i] = 1;
			times++;
		}

		// 移动指针，改变从字符串1中复制的内容，更新位置和剩余长度
		goal++;
		i++;
		rest -= 1;
	}

	// 打印结果
	if (times == 0)
		printf("NO");

	else
	{
		printf("%dtimes", times);

		for (int i = 0; i < MAX; i++)
		{
			if (loc[i] != 0)
				printf(",%d", i);
		}
	}

	// 释放内存
	free(tmp);
}