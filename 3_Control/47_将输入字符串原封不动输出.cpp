// ԭ�ⲻ������ַ���
#include <stdio.h>

// ����
#define MAX 21

// ������
int main(void)
{
	char str[MAX];
	scanf_s("%20s", str, (unsigned)sizeof(str));
	printf("%s", str);
	printf("\n");
}