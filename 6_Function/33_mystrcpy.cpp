// �����ַ���
#include <stdio.h>

// �ַ�����������
void my_strcpy(char* destination, char* source);

// ������
void my_strcpy(char* destination, char* source)
{
	// �ж��쳣���
	if (destination == NULL || source == NULL)
	{
		printf("error");
		return;
	}

	// �����ַ���: �˴�ע��ӣ���Ŀ�����ַ�����һ����' ' ��β
	int i = 0;
	do
	{
		destination[i] = source[i];
		i++;
	} while (source[i] != ' ' && source[i] != '\0');

	destination[i] = source[i];
}