// ͳ���ַ�����a��d�ĸ���
#include <stdio.h>

// ���峣��
#define LETTERO 'a'
#define LETTERT 'd'
#define MAX_LENGTH 51

// ������
int main(void)
{
	// �����ַ������Դ洢�ַ�������ȡ����
	char str[MAX_LENGTH];
	scanf_s("%50s", str, (unsigned)sizeof(str));

	// �ֱ������ַ�������
	int a_count = 0;
	int d_count = 0;

	// �����������飬ͳ������
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (str[i] == LETTERO)
			a_count++;
		else if (str[i] == LETTERT)
			d_count++;
	}

	// ��ӡ���
	printf("a:%d,d:%d", a_count, d_count);
}