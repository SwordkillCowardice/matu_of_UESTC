// ������ת��Ϊʮ����(����C���Զ�̬��ȡ�ַ������鷳������ѡ�������ȡ��ת��)
#include <math.h>
#include <stdio.h>

// ���峣��
#define SIGN '1'
#define BASE 2

// ������
int main(void)
{
	// �����м����tmp��������result
	int tmp = 0;
	int result = 0;

	// ���建���ַ�������λȨ
	char buf = '\0';
	int weight = 0;

	// �����벻Ϊ�գ������ȡ�ַ�
	while (buf != '\n')
	{
		scanf_s("%c", &buf, (unsigned)sizeof(char));
		if (buf == SIGN)
			tmp += pow(BASE, (double)weight);
		weight++;
	}

	// ���ڶ�ȡ�߼� ,weight��ʵ��λ����1,�˵�ʱ��Ҫ�ټ�1���˴���ԭ
	weight -= 2;

	// �ղŶ�ȡʱ�Ƿ���ģ��������µõ�ÿһ��������λ��������ֵ
	while (tmp != 0)
	{
		// �õ�������λ
		int digit = tmp % BASE;
		tmp = tmp / BASE;
		
		// ���½��
		result += digit * pow(BASE, (double)weight);
		weight--;
	}

	// ��ӡ���
	printf("%d", result);
}