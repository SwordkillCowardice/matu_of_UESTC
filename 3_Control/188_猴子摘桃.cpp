// ���������
#include <stdio.h>

// ����ϵ�������ڱ�ʾʳ�������������
#define FACTO 2
#define FACTT 1
#define DAYS 9

// ������
int main(void)
{
	// �����ʮ��ʣ������
	int rest = 1;

	// ѭ����ӡ�����ѭ���и���rest
	for (int i = 0; i < DAYS; i++)
	{
		rest = (rest + FACTT) * FACTO;
		printf("%d,", rest);
	}
	
	// ��ӡ��������
	printf("%d", rest);
}
