// ������㾫��Ҫ���Piֵ
#include <stdio.h>

// ������
int main(void)
{
	// ���徫�ȣ�����ȡ����
	float accuracy;
	scanf_s("%f", &accuracy);

	// ����ǰ�������Pi
	float pif = 0;
	float pis = 0;

	// �����������i,������fact
	double i = 1;
	double fact = i;

	// ����ѭ����ֱ������Ҫ�����˳�
	while (1)
	{
		// ��һ��piÿ�μӵ������һ��pi��ǰһ�������ϣ������ټ�һ��
		pif += fact;
		pis = pif + fact * i / (2 * i + 1);

		// �ж��Ƿ����������������㣬�����ڶ���pi�����˳�
		if ((pis - pif) * 2 < accuracy)
		{
			pis = 2 * pis;
			break;
		}

		// ��ĩ��ѭ�������µ�����
		i++;
		fact *= (i - 1) / (2 * i - 1);
	}

	// ��ӡpi
	printf("%.6f", pis);
}