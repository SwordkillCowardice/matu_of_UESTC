// ���ַ������ڲ�ɾ���ַ���
#include <stdio.h>
#include <string.h>

// ɾ������
void del(char* s, int n, int len)
{
	// ����������
	if (s == NULL || n < 0 || len < 0)
	{
		printf("error");
		return;
	}

	// ����s��ʵ�ʳ���
	int length = strcspn(s, " ");

	// �ٴμ��Ϸ���
	if (n > length - 1 || n + len > length)
	{
		printf("error");
		return;
	}

	// ����ɾ������
	// ɾ��������ʱ(��n = 0, len = length)
	if (len == length)
		s[0] = ' ';

	// һ�����
	else
	{
		// ����ʣ���ַ���ʼ�±�
		int index = n + len;

		// ѭ����ֵ
		while (index <= length)
		{
			s[n++] = s[index];
			index++;
		}
	}
}
