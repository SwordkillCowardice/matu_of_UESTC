// �ߵ�����ַ���
#include <stdio.h>

// ������󳤶�
#define MAX_LENGTH 51

// ������
int main(void)
{
	// �����ַ����鲢�洢�ַ���
	char str[MAX_LENGTH];
	scanf_s("%50s", str, (unsigned)sizeof(str));

	// �õ��ַ���ʵ�ʳ���
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	// ����
	double half = length / 2;
	for (int i = 0; i < half; i++)
	{
		char mid = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = mid;
	}

	// ���
	printf("%s", str);
}