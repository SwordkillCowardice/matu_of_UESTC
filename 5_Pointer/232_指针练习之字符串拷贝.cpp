// �����ַ���������*
#include <stdio.h>
#include <string.h>

// ��һ���������
#define MAX 100

// ������
int main(void)
{
	// �����ַ�����
	char array[MAX + 1];
	char goal[MAX + 1];

	// ��ȡ�ַ���
	scanf_s("%100s", array, (unsigned)sizeof(array));

	// ����ַ�������,������Ӧ����
	int length = strlen(array);

	// �����ַ���
	int j = 0;
	for (int i = 0; i < length; i++)
	{
		// ��������
		if (i == 0 || i % 2 != 0)
		{
			goal[j] = array[i];
			j++;
		}

		// �������array����ĵ�2i(��0)��λ��,���ڶ�Ӧ��jλ���Ȳ���*,�ڰ�array[2i]������ȥ
		else
		{
			goal[j++] = '*';
			goal[j++] = array[i];
		}
	}
	
	// ��Ӵ�β���з�����ӡ
	goal[j] = '\0';

	printf("%s\n", goal);
}