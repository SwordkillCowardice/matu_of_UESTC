// ����ַ���1���Ƿ�����ַ���2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��һ����󳤶�
#define MAX 100

// ������
int main(void)
{
	// ���������ַ����飬�ֱ�洢�����ַ���
	char arrayo[MAX + 1];
	char arrayt[MAX + 1];

	// �ֱ��ȡ�ַ���
	for (int i = 0; i < MAX; i++)
	{
		scanf_s("%c", &arrayo[i], (unsigned)sizeof(char));

		if (arrayo[i] == '\n')
		{
			arrayo[i] = '\0';
			break;
		}
	}
	arrayo[MAX] = '\0';

	for (int i = 0; i < MAX; i++)
	{
		scanf_s("%c", &arrayt[i], (unsigned)sizeof(char));

		if (arrayt[i] == '\n')
		{
			arrayt[i] = '\0';
			break;
		}
	}
	arrayt[MAX] = '\0';

	// �������ж�:���ַ���2���ַ���1������Ȼ�ǲ�������
	int length1 = (int)strlen(arrayo);
	int length2 = (int)strlen(arrayt);

	if (length1 < length2)
	{
		printf("NO");
		return 0;
	}

	// ������ִ���������¼����λ�õ�����
	int times = 0;
	int loc[MAX] = { 0 };

	// ����goalָ���������ַ���1,����tmpָ�빹����ʱ�洢��
	char* goal = arrayo;
	char* tmp = (char*)malloc(sizeof(char) * (length2 + 1));
	if (tmp == NULL)
		return 0;
	
	// ����ѭ����������, �����ַ���1δ�ȶԳ���
	int i = 0;
	int rest = length1;

	// �Թ̶����������ַ���1��ֱ�����Ȳ������ߵ�ĩ��
	while (*goal != '\0' && rest >= length2)
	{
		// �����ַ���
		strncpy_s(tmp, length2 + 1, goal, length2);
		printf("%s", tmp);

		// ���ȶԳɹ������Ǹ�λ�ã������Ӵ���
		if (!strcmp(tmp, arrayt))
		{
			loc[i] = 1;
			times++;
		}

		// �ƶ�ָ�룬�ı���ַ���1�и��Ƶ����ݣ�����λ�ú�ʣ�೤��
		goal++;
		i++;
		rest -= 1;
	}

	// ��ӡ���
	if (times == 0)
		printf("NO");

	else
	{
		printf("%dtimes", times);

		for (int i = 0; i < MAX; i++)
		{
			if (loc[i] != 0)
				printf(",%d", i);
		}
	}

	// �ͷ��ڴ�
	free(tmp);
}