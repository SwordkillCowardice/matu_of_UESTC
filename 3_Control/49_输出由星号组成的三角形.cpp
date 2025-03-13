// ������Ǻ���ɵ�������
#include <stdio.h>

// ����
#define FACTOR 2
#define LOW 1
#define HIGH 80

// ����ԭ��
void print_row(int length, int row);
void print_triangle(int length);

// ������
int main(void)
{
	// ��ȡ���벢���
	int length;
	int p = scanf_s("%d", &length);

	if (p != 1 || length < LOW || length > HIGH || length % 2 == 0)
	{
		printf("error");
		return 0;
	}

	// ���
	print_triangle(length);
}

// ��ӡÿ��
void print_row(int length, int row)
{
	// ����ÿ�еĿո���������
	int star_number = FACTOR * row + 1;
	int space_number = (length - star_number) / FACTOR;

	// ��ӡ�ո�����ǣ�ĩβ�ٴ��з�
	for (int i = 0; i < space_number; i++)
	{
		printf(" ");
	}

	for (int i = 0; i < star_number; i++)
	{
		printf("*");
	}

	printf("\n");
}

// �ܴ�ӡ����
void print_triangle(int length)
{
	// ȷ��������
	int total = (length + 1) / FACTOR;
	
	// ��ӡ
	for (int i = 0; i < total; i++)
	{
		print_row(length, i);
	}
}