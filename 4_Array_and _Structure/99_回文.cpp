// �жϻ���
#include <stdio.h>
#include <string.h>

// ���峣��
#define MAX_LENGTH 31

// ������
int main(void)
{
	// �����ַ����飬�洢�ַ���
	char str[MAX_LENGTH];
	scanf_s("%30s", str, (unsigned)sizeof(str));
	
	// ����ַ������ȼ����е�
	int length = strlen(str);
	int half = length / 2;

	// ѭ���ж�
	for (int i = 0; i < half; i++)
	{
		if (str[i] != str[length - i - 1])
		{
			printf("false");
			return 0;
		}
	}
	printf("true");
}