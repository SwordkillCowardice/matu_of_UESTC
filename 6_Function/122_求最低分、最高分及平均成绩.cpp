// ��ʾ�ɼ����
#include <stdio.h>

// �������鳤��
#define LENGTH 10

// ����ԭ��
void minmax(int s[]);

// ������ 
int main(void)
{
	// ��������
	int array[LENGTH];

	// ��ȡԪ��
	for (int i = 0; i < LENGTH; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// ���ú���������
	minmax(array);
}

// ����
void minmax(int s[])
{
	// ������߷֣���ͷ֣��ܳɼ���ƽ��ֵ
	int high = 0;
	int low = s[0];
	int total = 0;
	int ave;

	// ���¸�����
	for (int i = 0; i < LENGTH; i++)
	{
		if (s[i] > high)
			high = s[i];
		if (s[i] < low)
			low = s[i];
		total += s[i];
	}
	ave = total / 10;

	// ��ӡ���
	printf("%d,%d,%d", low, high, ave);
}