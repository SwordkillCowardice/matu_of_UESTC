// �������Χ��ˮ�ɻ����ĸ���
#include <math.h>
#include <stdio.h>

// ������߽�
#define LOW 100
#define HIGH 999

// ����ԭ��
int find(int n);

// ������
int find(int n)
{
	// ���n�Ƿ����Ҫ��
	if (n < LOW || n > HIGH)
		return 0;

	else
	{
		// �����������
		int count = 0;

		// ѭ�����
		int sum;
		
		for (int i = LOW; i <= n; i++)
		{
			sum = 0;
			int tmp = i;

			// �ֱ������λ
			int low = tmp % 10;
			tmp /= 10;
			int mid = tmp % 10;
			tmp /= 10;
			int high = tmp;

			// ����Ͳ��Ƚ�
			sum += pow(low, 3.) + pow(mid, 3.) + pow(high, 3.);

			if (sum == i)
				count++;
		}
		return count;
	}
}