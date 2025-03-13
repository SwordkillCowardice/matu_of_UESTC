// 检查字符串1中是否包含字符串2 (多了解一下字符串相关函数,以及输入输出函数，可以简化逻辑)
#include <stdio.h>
#include <string.h>

// 定义字符串最大长度
#define MAX 100

// 主函数
int main(void)
{
	// 定义arrayo和arrayt,分别存储字符串1和2
	char arrayo[MAX + 1];
	char arrayt[MAX + 1];

	// 读取字符串
	fgets(arrayo, (unsigned)sizeof(arrayo), stdin);
	fgets(arrayt, (unsigned)sizeof(arrayt), stdin);

	// 若有换行符读入，进行处理 
	// strcspn:若第一个字符串中出现了第二个字符串中的字符，返回第一处出现的索引，否则返回第一个字符串的长度
	int indexo = strcspn(arrayo, "\n");
	int indext = strcspn(arrayt, "\n");

	if (indexo != strlen(arrayo))
		arrayo[indexo] = '\0';

	if (indext != strlen(arrayt))
		arrayt[indext] = '\0';

	// strstr函数：检查子串是否包含在待查找字符串中，第一个参数为待查找字符串，第二个为子串，返回值为出现位置的指针
	char* goal = strstr(arrayo, arrayt);
	if (goal == NULL)
	{
		printf("NO");
		return 0;
	}

	// 若不为空
	int times = 0;
	int loc[MAX + 1] = { 0 };

	while (goal != NULL)
	{
		times++;
		int pos = goal - arrayo;
		loc[pos] = 1;
		goal = strstr(++goal, arrayt);
	}

	// 打印结果
	printf("%dtimes", times);
	for (int i = 0; i < MAX + 1; i++)
	{
		if (loc[i] != 0)
			printf(",%d", i);
	}
}