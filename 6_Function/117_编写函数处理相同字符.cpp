// �����ַ���
#include <ctype.h>
#include <stdio.h>

// �����ַ�������
void del(char* str)
{
	// ���������ַ�ָ�����ڱ����ַ���
	char* tmp = str;

	// �����ַ���
	while (*tmp != '\0')
	{
		// �����ǰ�ַ��Ȳ�������Ҳ������ĸ
		if (!isalpha(*tmp) && !isdigit(*tmp))
		{
			// ������һ��ָ�룬ȥѰ����һ����ͬ���ַ�
			char* ptr = tmp;
			ptr++;

			// �ж���һ���ַ��Ƿ���Ȼ���ڵ�ǰ�ַ�
			if (*ptr == *tmp)
			{
				// Ѱ����һ����ͬ���ַ�
				while (*ptr != '\0' && *ptr == *tmp)
				{
					ptr++;
				}

				// �����˳�ѭ�����
				if (*ptr == '\0')
				{
					tmp++;
					*tmp = '\0';
					return;
				}

				// �ɹ��ҵ���һ����ͬ�ַ�
				else
				{
					// ����signָ�뱣����һ������λ��
					tmp++;
					char* sign = tmp;

					// ���Ӳ�ͬ�ַ�����ʼ���ַ������Ƶ���ǰλ��
					while (*ptr != '\0')
					{
						*tmp = *ptr;
						tmp++;
						ptr++;
					}
					*tmp = '\0';

					// ����tmp
					tmp = sign;
				}
			}

			else
				tmp++;
		}

		else
			tmp++;
	}
}