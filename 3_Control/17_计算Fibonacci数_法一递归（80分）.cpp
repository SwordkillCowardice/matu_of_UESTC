// ����Fibonacci��
#include <stdio.h>

// �ݹ麯��
int Fibonacci(int number);

// ������
int main(void)
{
	// ���岢��ȡ����
	int count;
	scanf_s("%d", &count);

	// ���ú�������������ӡ
	int result = Fibonacci(count);
	printf("%d", result);
}

// ����ԭ��
int Fibonacci(int number)
{
	// �������
	if (number == 1 || number == 2)
		return 1;

	// �ݹ����
	else
		return Fibonacci(number - 1) + Fibonacci(number - 2);
}