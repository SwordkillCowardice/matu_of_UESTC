// �Ƚ��ַ���
#include <stdio.h>
#include <string.h>

// ������󳤶�
#define MAX_LENGTH 256

// ������
int main(void)
{
	// �����ַ�����1��2
	char arrayo[MAX_LENGTH + 1];
	char arrayt[MAX_LENGTH + 1];

	// ��ȡ�ַ���1
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		scanf_s("%c", &arrayo[i], unsigned(sizeof(char)));
		if (arrayo[i] == '\n')
		{
			arrayo[i] = '\0';
			break;
		}
	}

	// ��ȡ�ַ���2
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		scanf_s("%c", &arrayt[i], unsigned(sizeof(char)));
		if (arrayt[i] == '\n')
		{
			arrayt[i] = '\0';
			break;
		}
	}

	// ��ñȽϽ��
	if (!strcmp(arrayo, arrayt))
		printf("equal");
	else
		printf("unequal");
}