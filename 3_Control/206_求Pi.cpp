// ��pi
#include <math.h>
#include <stdio.h>

// ���峣��
#define FACT 4
#define FACTT -1
#define FACTR 2

// ������
int main(void)
{
	// ��ȡ�ۼӴ���n
	int n;
	scanf_s("%d", &n);

	// ���
	double pi = 0;
	
	// ע��Ҫת���ɸ��������� ��Ȼֱ�ӽض�Ϊ0
	for (int i = 0; i < n; i++)
	{
		// ����pow��������Ҫ��double������һ��������Ȼ���ز���ȷ
		pi += 1. / (FACTR * i + 1) * pow(FACTT, (double)i);
	}

	pi = FACT * pi;

	printf("%.2lf", pi);
}	