// ʵ�����ַ������ڲ������ַ���
#include <stdio.h>
#include <string.h>

// ���뺯��
void insert(char* s1, char* s2, int n)
{
	// �������
	if (s1 == NULL || s2 == NULL || n < 0)
	{
		printf("error");
		return;
	}

	// �����s1��s2��ʵ�ʳ���(�Կո�Ϊ������)
	int length1 = strcspn(s1, " ");
	int length2 = strcspn(s2, " ");

	// ����n�Ĵ�С��������
	if (n > length1)
	{
		printf("error");
		return;
	}

	else
	{
		// �ƶ�ԭ���ַ�(����ĩβ�ո�(��Ϊ������))
		for (int j = length1; j >= n; j--)
		{
			s1[j + length2] = s1[j];
		}

		// ����s2(s2�Ľ��������ٲ���)
		for (int i = 0; i < length2; i++)
		{
			s1[n++] = s2[i];
		}
	}
}