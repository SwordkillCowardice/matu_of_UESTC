// delstar
#include <ctype.h>
#include <stdio.h>

// ������󳤶�
#define LENGTH 101

// ������
int main(void)
{
	// ����ԭ�ַ�����,�޸ĺ��ַ�����
	char ostr[LENGTH];
	char lstr[LENGTH];
	scanf_s("%100s", ostr, unsigned(sizeof(ostr)));

	// ������*�����ĸ�ĵ�һ��λ��index1������ĸ���*�����һ��λ��index2
	int first = 0;
	int index1 = -1;
	int index2 = -1;

	// �����ַ�������len
	int len = 1;

	if (ostr[len] == '\0') // �ַ�����Ϊ1
	{
		if (ostr[0] != '*' && !isalpha(ostr[0]))
			printf("error\n");
		else
			printf("%s\n", ostr);
		return 0;
	}

	// �����ַ���
	while (ostr[len] != '\0') 
	{
		if ((ostr[len - 1] != '*' && !(isalpha(ostr[len - 1]))) || (ostr[len] != '*' && !(isalpha(ostr[len])))) // �����ַ���
		{
			printf("error\n");
			return 0;
		}
		if (ostr[len - 1] == '*' && isalpha(ostr[len])) // ǰ*����ĸ
		{
			if (!first)
			{
				index1 = len;
				first = 1;
			}
		}
		else if (isalpha(ostr[len - 1]) && ostr[len] == '*') // ǰ��ĸ��*
			index2 = len - 1;
		len++;
	}

	// ��������
	if (index1 == -1 || index2 == -1) // ���ô�����ַ���
		printf("%s\n", ostr);
	else
	{
		if (ostr[0] == '*' && isalpha(ostr[len - 1])) // ��ͷ*����β��ĸ
			index2 = len - 1;
		else if (isalpha(ostr[0]) && ostr[len - 1] == '*') // ��ͷ��ĸ����β*
			index1 = 0;
		else if (isalpha(ostr[0]) && isalpha(ostr[len - 1])) // ��ͷ��ĸ����β��ĸ
		{
			index1 = 0;
			index2 = len - 1;
		}
		
		// ѭ������
		int ptr = 0;
		int ctr = 0;
		while (ostr[ctr] != '\0')
		{
			if (ctr > index1 && ctr < index2) // ָ��λ��֮����ַ���
			{
				if (ostr[ctr] != '*')
					lstr[ptr++] = ostr[ctr];
			}
			else
				lstr[ptr++] = ostr[ctr];
			ctr++;
		}
		lstr[ptr] = '\0';
		printf("%s\n", lstr); // ������
	}
}