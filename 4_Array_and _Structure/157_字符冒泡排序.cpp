// �ַ�ð������
#include <stdio.h>

// ������󳤶�
#define MAX_LENGTH 5

// ������
int main(void)
{
	// �����ַ����鲢��ȡ�ַ���
	char str[MAX_LENGTH + 1];
	scanf_s("%5s", str, (unsigned)sizeof(str));

	// ð������
	for (int i = 0; i < MAX_LENGTH - 1; i++)
	{
		for (int j = 0; j < MAX_LENGTH - 1 - i; j++)
		{
			if (str[j] > str[j + 1])
			{
				char mid = str[j];
				str[j] = str[j + 1];
				str[j + 1] = mid;
			}
		}
	}

	// ��ӡ�ַ���
	for (int i = 0; i < MAX_LENGTH - 1; i++)
	{
		printf("%c,", str[i]);
	}
	printf("%c", str[MAX_LENGTH - 1]);
}