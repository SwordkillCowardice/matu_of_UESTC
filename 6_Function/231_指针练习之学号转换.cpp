// ѧ��ת��
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����
#define TOTAL_LENGTH 13
#define MAX 4

// ƫ��������
const int LENGTH[4] = {4, 2, 4, 3};

// ����ԭ��
int fun(const char* p, int result[]);

// ������
int fun(const char* p, int result[])
{
	// �����Ϸ��Լ��
	if (p == NULL)
		return 0;
	else if (strlen(p) != TOTAL_LENGTH)
		return 0;
	else 
	{
		// ����Ƿ񺬷�����
		for (int i = 0; i < TOTAL_LENGTH; i++)
		{
			if (!isdigit(p[i]))
				return 0;
		}

		// ������ʱ�ַ��������Դ洢�ַ���;�����ַ�ָ��,�Խ���ƫ��
		char tmp[MAX + 1];
		char* ptr = (char*) p;

		// ���θ����꼶��ѧԺ���༶��ѧ��, ��ת������Ӧ����
		for (int i = 0; i < MAX; i++)
		{
			strncpy_s(tmp, (unsigned)sizeof(tmp), ptr, LENGTH[i]);
			result[i] = atoi(tmp);
			ptr += LENGTH[i];
		}
		return 1;
	}
}