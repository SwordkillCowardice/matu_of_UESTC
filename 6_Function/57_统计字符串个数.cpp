// ͳ���ַ������ر��ַ�����
#include <ctype.h>
#include <stdio.h>

// ������
int CalString(char* str)
{
	// ��������, ��ʱָ��
	int count = 0;
	char* tmp = str;

	// ѭ��ͳ��
	while (*tmp != '\0')
	{
		if (!isalpha(*tmp) && !isdigit(*tmp))
			count++;
		tmp++;
	}

	return count;
}