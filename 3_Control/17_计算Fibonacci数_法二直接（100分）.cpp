// ����Fibonacci��
#include <stdio.h>

// ������
int main(void)
{
	// ���岢��ȡ����
	int number;
	scanf_s("%d", &number);

	// ������������low��high���Զ�̬����ֵ��������������
	int low = 1;
	int high = 1;
	int result;

	// �ж��Ƿ�Ϊǰ��λ
	if (number == 1 || number == 2)
	{
		result = high;
		printf("%d", result);
		return 0;
	}

	// �ӵ���λ��ʼ����� ѭ���ƶ�low��high
	int times = number - 2;
	for (int i = 0; i < times; i++)
	{
		int mid = low;
		low = high;
		high = high + mid;
	}

	// ���
	result = high;
	printf("%d", result);
}
