// ���n��1-5�η�
#include <math.h>
#include <stdio.h>

// ����
#define START 1
#define END 5

// ������
int main(void)
{
	// ��ȡ����
	int n;
	scanf_s("%d", &n);

	// ��ӡ
	for (int i = START; i <= END; i++)
	{
		printf("%d", (int)pow(double(n), double(i)));
		if (i <= END - 1)
			printf(" ");
	}
	printf("\n");
}