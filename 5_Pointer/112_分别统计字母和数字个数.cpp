// ͳ����ĸ���������ָ���
#include <ctype.h>
#include <stdio.h>

// ��һ����󳤶�
#define MAX_LENGTH 100

// ������
int main(void)
{
	// �����ַ�����,��ȡ�ַ���
	char array[MAX_LENGTH + 1];

	for (int i = 0; i < MAX_LENGTH; i++)
	{
		scanf_s("%c", &array[i], (unsigned)sizeof(char));

		if (array[i] == '\n')
		{
			array[i] = '\0';
			break;
		}
	}

	// ͳ������ 
	int letter_count = 0;
	int digit_count = 0;
	char* p = array;

	while (*p != '\0')
	{
		// �ж��Ƿ�Ϊ��ĸ/����
		if (isalpha(*p))
			letter_count++;
		if (isdigit(*p))
			digit_count++;
		p++;
	}

	// ��ӡ���
	printf("letters:%d,digits:%d", letter_count, digit_count);
}