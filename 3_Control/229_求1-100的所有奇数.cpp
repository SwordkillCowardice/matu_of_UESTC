// ������
#include <stdio.h>

// ����
#define START 1
#define END 100

// ������
int main(void)
{
	for (int i = START; i < END + 1; i++)
	{
		if (i % 2 != 0)
			printf("%d,", i);
	}
}