// �ж�����
// ԭ�����year�ܹ���4���������ǲ��ܱ�100��������year�����ꡣ
// ���year�ܹ���400��������year�����ꡣ
#include <stdio.h>

// ���峣��
#define FACTO 4
#define FACTT 100
#define FACTR 400

//������
int main(void)
{
	// ���岢��ȡ���
	int year;
	scanf_s("%d", &year);

	// �ж��Ƿ�Ϊ����
	if ((year % FACTO == 0 && year % FACTT != 0) || (year % FACTR == 0))
		printf("yes");
	else
		printf("no");
}