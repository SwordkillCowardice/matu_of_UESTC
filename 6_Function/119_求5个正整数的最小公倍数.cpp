// ����С������
#include <stdio.h>
#include <stdlib.h>

// �������鳤��
#define LENGTH 5

// ����С����������
int find(int director, int j);

// ������
int main(void)
{
	// ��������,���벢�洢Ԫ��
	int array[LENGTH];

	for (int i = 0; i < LENGTH; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// ������,�����
	int result = find(array[0], array[1]);

	for (int i = 2; i < LENGTH; i++)
	{
		result = find(result, array[i]);
	}

	printf("%d", result);
}

// ����С����������
int find(int director, int j)
{
	// �Ƚ�����תΪ����
	int num1 = abs(director);
	int num2 = abs(j);

	// ����������num1
	if (num1 < num2)
	{
		int mid = num1;
		num1 = num2;
		num2 = mid;
	}

	// ������
	int final = num1;
	while (final % num2 != 0)
	{
		final += num1;
	}
	return final;
}