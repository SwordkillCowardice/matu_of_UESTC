// ������㾫��Ҫ���Բ���ʺͻ��ѵĲ�����
#include <stdio.h>

// ���峣��
#define FACT 4
#define ACCURACY 1e8

// ������
int main(void)
{
	// ����Բ���ʣ���������������ķ�ĸ
	double pi = 0;
	int steps = 0;
	double divider = 1;

	// ѭ�� (����ܹؼ������ȥ�����Ч�������Ĵ��룬������ĸ��죬����timeout)
	// ������ٳ˳����ظ����㣬�ø���ļӼ��������ж�Ҳ�Ǳȴ�С�üӼ���
	while (divider <= ACCURACY)
	{
		pi += (steps % 2 == 0) ? 1 / divider : -1 / divider;
		steps++;
		divider += 2;
	}

	printf("steps=%d PI=%.5lf", steps + 1, pi * FACT);
}