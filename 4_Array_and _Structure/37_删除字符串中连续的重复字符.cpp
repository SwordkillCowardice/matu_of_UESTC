// ɾ���������ظ��ַ�
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// �����ַ�����󳤶�
#define MAX_LENGTH 51

// ������
int main(void)
{
	// �����ַ����鲢��ȡ����
	char str[MAX_LENGTH];
	scanf_s("%50s", str, (unsigned)sizeof(str));

	// ��ȡ�ַ�������(��������ܣ�scanf_s�Ѿ�����)
	int length = (int)strlen(str);

	// �����ַ���
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		// �����ǰ�ַ�����һ���ַ��ظ���ɾ����ǰ�ַ�
		if (str[i + 1] == str[i] && !isalpha(str[i]) && !isdigit(str[i]))
			continue;

		str[count] = str[i];
		count++;
	}

	// ��Ҫ������ɾ���������������µ���ֹ��
	str[count] = '\0';

	// ��ӡ�ַ���
	printf("%s", str);
}