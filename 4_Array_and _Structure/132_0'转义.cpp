// �����ַ������
#include <stdio.h>
#include <string.h>

// ���峣��(��һ�����ߴ�)
#define MAX_LENGTH 150

// ������
int main(void)
{
	// �����ַ�����s1,s2 
	char s1[MAX_LENGTH];
	char s2[MAX_LENGTH];

	// ��ȡ�ַ�������ȡ�䳤��
	scanf_s("%150s", s1, (unsigned)sizeof(s1));
	int length = (int)strlen(s1);

	// ��s1���Ƶ�s2��
	for (int i = 0; i < length + 1; i++)
	{
		s2[i] = s1[i];
	}

	// ��ӡs2
	for (int i = 0; i < length + 1; i++)
	{
		if (s2[i] == '\0')
			printf("\\0");
		else
			printf("%c", s2[i]);
	}
}