// ��kֵ����pow�������� Ŀǰ��֪��ԭ��
#include <math.h>
#include <stdio.h>

// ����
#define BASE 2

// ������
int main(void)
{
	// ��ȡmֵ
	unsigned int m;
	scanf_s("%u", &m);

	// ����������
	unsigned int result = 0;

	// ѭ��
	for (double start = pow(BASE, (double)result); start <= m; result++)
	{
		start = pow(BASE, (double)(result + 1));
	}

	// �������ӡ���
	result = result - 1;
	printf("%u", result);
}