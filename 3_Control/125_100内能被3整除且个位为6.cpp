// 100���ܱ�3�����Ҹ�λΪ6
#include <stdio.h>

// ����
#define WEIGHT 10
#define MAX 10
#define LAST 6
#define DIVIDER 3

// ������
int main(void)
{
	for (int i = 0; i < MAX; i++)
	{
		int number = i * WEIGHT + LAST;
		if (number % DIVIDER != 0)
			continue;
		printf("%d", number);
	}
}