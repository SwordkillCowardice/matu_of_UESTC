// ͳ�Ƶ�����
#include <stdio.h>

// ������󳤶�
#define MAX_LENGTH 100

// ������
int main(void)
{
	// �����ַ����� ��ȡ�ַ���
	char array[MAX_LENGTH + 1];

	// ���岢��ȡʵ���ܳ�
	int length = 0;

	for (int i = 0; i < MAX_LENGTH; i++)
	{
		scanf_s("%c", &array[i], (unsigned)sizeof(char));
		length++;

		// �ж��Ƿ�ﵽĩβ
		if (array[i] == '\n')
		{
			array[i] = '\0';
			break;
		}
	}

	// ͳ���ܵ�����
	int count = 0;

	for (int i = 0; i < length - 1; i++)
	{
		if (array[i] != ' ' && array[i + 1] == ' ')
			count++;
	}

	// �����������(��������), ͬʱ����ǰ���ж��߼�
	if (length == 1)
	{
		printf("0");
		return 0;
	}

	else
	{
		if (array[length - 2] != ' ')
			count++;
	}

	// ��ӡ���
	printf("%d", count);
}