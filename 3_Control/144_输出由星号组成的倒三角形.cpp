// �����������
#include <stdio.h>

// ���峣��
#define LOW 1
#define HIGH 80

// ���庯��
void print_row(int length, int order);
void print_triangle(int length);

// ������
int main(void)
{
	// ��ȡ���߳������
	int length;
	scanf_s("%d", &length);

	if (length < LOW || length > HIGH || length % 2 == 0)
	{
		printf("error");
		return 0;
	}

	// ��ӡ���
	print_triangle(length);
}

// ��ӡÿ��
void print_row(int length, int order)
{
	// ��ӡ�ո�
	int space_count = order;
	
	for (int i = 0; i < space_count; i++)
	{
		printf(" ");
	}

	// ��ӡ����
	int star_count = length - 2 * order;

	for (int i = 0; i < star_count; i++)
	{
		printf("*");
	}

	// ��ӡ���з�
	printf("\n");
}

// ��ӡ������
void print_triangle(int length)
{
	// ����������
	int total_row = (length + 1) / 2;

	for (int i = 0; i < total_row; i++)
	{
		print_row(length, i);
	}
}