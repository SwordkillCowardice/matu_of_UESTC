// ���ָ������
#include <stdio.h>

// ���峣��
#define LOW 100
#define HIGH 200
#define FIRST 3
#define SECOND 7

// ������
int main(void)
{
	// ѭ��һ��
	for (int i = LOW; i <= HIGH; i++)
	{
		if (i % FIRST == 0 || i % SECOND == 0)
			continue;

		printf("%d", i);
	}
}