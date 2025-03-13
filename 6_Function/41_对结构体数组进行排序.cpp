// �Խṹ�������������
#include <stdio.h>

// ����ṹ��
struct Person {
	int no;
	int age;
	int height;
};
typedef struct Person Person;

// �������򷽷�
void sort(Person* array, int n);

// ������
void sort(Person* array, int n)
{
	// �쳣���
	if (array == NULL || n <= 0)
	{
		printf("error");
		return;
	}

	// ð������
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (array[j].no > array[j + 1].no || (array[j].no == array[j + 1].no && array[j].age > array[j + 1].age) 
				|| (array[j].no == array[j + 1].no && array[j].age == array[j + 1].age && array[j].height > array[j + 1].height))
			{
				Person mid = array[j];
				array[j] = array[j + 1];
				array[j + 1] = mid;
			}
		}
	}
}