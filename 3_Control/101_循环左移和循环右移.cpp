// ѭ������/���ƣ��������Ƴ��ĸ�λ����λ���ٷŻص�λ����λ����
#include <stdio.h>
#include <stdlib.h>

// ����
#define LENGTH 32

// ������
int main(void)
{
	// ��ȡ����
	int i, j;
	scanf_s("%d %d", &i, &j);

	// ����j���������Ӧ����
	if (j == 0)
	{
		printf("%d", i);
		return 0;
	}

	// j��Ϊ0ʱ����λǰ�轫iת��Ϊ�޷�����������Ϊ�з�������λʱ����0����1�ǲ�ȷ���ģ�
	// ���޷�����ͳһ��0�����㰴λ��|������������
	else
	{
		// �����޷���tmp
		unsigned tmp = (unsigned)i;

		// ����jλ
		if (j > 0)
		{
			j = j % LENGTH;
			tmp = tmp << j | tmp >> (LENGTH - j);
		}

		// ����-jλ ������ȡ����ֵ����ȡ�ࣨ��Ŀд���� �����ǣ�jΪ����ʱ����-jλ
		else
		{
			j = abs(j) % LENGTH;
			tmp = tmp >> j | tmp << (LENGTH - j);
		}

		// ��ӡ���
		i = (int)tmp;
		printf("%d", i);
	}
}