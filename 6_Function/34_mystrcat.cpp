// ʵ���ַ���������
#include <stdio.h>
#include <string.h>

// ����
void my_strcat(char* destination, const char* source)
{
	// ����쳣(ָ���Ƿ�Ϊ��)
	if (destination == NULL || source == NULL)
	{
		printf("error");
		return;
	}

	// �ҵ�destination�ַ�����ĩβ
	int index = strcspn(destination, " ");

	// ��destination�ַ���û�пո񣬼�����ֹλ��
	if (index == strlen(destination))
	{
		printf("error");
		return;
	}

	// ��destinationĩβ��ʼ����source���ַ���
	else
	{
		// ptr��¼��ǰĩβλ��
		char* ptr = destination + index;
		int i = 0;

		while (source[i] != ' ')
		{
			*ptr = source[i];
			ptr++;
			i++;
		}

		// ���ĩβ��ֹ��(�˴��Կո�Ϊ��ֹ��)
		*ptr = ' ';
	}
}