// ��ͬ�ַ��ֱ����
#include <ctype.h>
#include <stdio.h>

// ����
void count(char* str)
{
	// ���
	if (str == NULL)
		return;

	else
	{
		// ��������
		int letter_count = 0;
		int digit_count = 0;
		int space_count = 0;

		// ������ʱָ��
		char* tmp = str;

		// ѭ������
		while (*tmp != '\0')
		{
			if (isalpha(*tmp))
				letter_count++;
			else if (isdigit(*tmp))
				digit_count++;
			else if (*tmp == ' ')
				space_count++;
			tmp++;
		}

		// ��ӡ���
		printf("%d,%d,%d", letter_count, digit_count, space_count);
	}
}