// �����ṹ���Ա��ֵ
#include <stdio.h>

// �ṹ�嶨��
struct Person {
	int age;
	int height;
};
typedef struct Person Person;

// ��������
void swap(Person* array, int n)
{
	// �������Ϸ���
	if (array == NULL || n < 1)
	{
		printf("error");
		return;
	}

	// ����
	int mid = array[0].height;
	array[0].height = array[n - 1].height;
	array[n - 1].height = mid;
}