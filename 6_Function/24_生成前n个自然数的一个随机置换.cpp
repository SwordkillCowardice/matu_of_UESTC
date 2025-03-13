// ����һ������û�
#include <stdio.h>
#include <stdlib.h>

// �����ⲿ����
extern int RandInt(int i, int j);

// ����1
void RandomPermutation1(int n)
{
	// �������Ϸ���
	if (n <= 0)
	{
		printf("error");
		return;
	}

	// ��̬����һ����СΪn������
	int* array = (int*)malloc(n * sizeof(int));
	if (array == NULL)
		return;

	// ����count������¼�ѻ�õĲ�ͬ���ָ���
	int count;

	// ���������һ������
	array[0] = RandInt(1, n);
	count = 1;

	// �����־��������ʶ���ɳɹ�
	int sign;

	// ѭ�����
	while (count < n)
	{
		while (1)
		{
			// ��־��1
			sign = 1;
			
			// �õ�һ�������
			int tmp = RandInt(1, n);

			// �ж�������Ƿ����Ҫ��
			for (int i = 0; i < count; i++)
			{
				if (tmp == array[i])
				{
					sign = 0;
					break;
				}
			}

			if (sign == 1)
			{
				array[count++] = tmp;
				break;
			}
		}
	}

	// ������
	for (int i = 0; i < n; i++)
	{
		printf("%d,", array[i]);
	}
	printf("0");

	// �ͷ��ڴ�
	free(array);
}

// ����2
void RandomPermutation2(int n)
{
	// �������Ϸ���
	if (n <= 0)
	{
		printf("error");
		return;
	}

	// ��̬�����ڴ棬����������洢����ͱ�־��Ϣ�洢����
	int* array = (int*)malloc(n * sizeof(int));
	if (array == NULL)
		return;

	int* sign = (int*)malloc((n + 1)* sizeof(int));
	if (sign == NULL)
		return;

	// ��ʼ����־����
	for (int i = 0; i < n + 1; i++)
	{
		sign[i] = 0;
	}

	// ����count������¼�ѻ�����������
	int count;

	// �������ɵ�һ�������
	int tmp = RandInt(1, n); 
	array[0] = tmp;
	sign[tmp] = 1;
	count = 1;

	// ѭ�����������,��������
	while (count < n)
	{
		while (1)
		{	
			int x = RandInt(1, n);

			if (sign[x] == 1)
				continue;
			else
			{
				array[count++] = x;
				sign[x] = 1;
				break;
			}
		}
	}

	// ������
	for (int i = 0; i < n; i++)
	{
		printf("%d,", array[i]);
	}
	printf("0");

	// �ͷ��ڴ�
	free(array);
	free(sign);
}

// ��������
void Swap(int* a, int* b)
{
	int mid = *a;
	*a = *b;
	*b = mid;
}

// ����3
void RandomPermutation3(int n)
{
	// �������Ϸ���
	if (n <= 0)
	{
		printf("error");
		return;
	}

	// ��̬�����ڴ棬��������洢�����
	int* array = (int*)malloc(sizeof(int) * n);
	if (array == NULL)
		return;

	// ��ʼ������
	for (int i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}

	// �����������Ԫ��
	for (int i = 1; i < n; i++)
	{
		Swap(&array[i], &array[RandInt(0,i)]);
	}

	// ��ӡ���
	for (int i = 0; i < n; i++)
	{
		printf("%d,", array[i]);
	}
	printf("0");
	
	// �ͷ��ڴ�
	free(array);
}