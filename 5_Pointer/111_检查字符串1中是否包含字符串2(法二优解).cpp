// ����ַ���1���Ƿ�����ַ���2 (���˽�һ���ַ�����غ���,�Լ�����������������Լ��߼�)
#include <stdio.h>
#include <string.h>

// �����ַ�����󳤶�
#define MAX 100

// ������
int main(void)
{
	// ����arrayo��arrayt,�ֱ�洢�ַ���1��2
	char arrayo[MAX + 1];
	char arrayt[MAX + 1];

	// ��ȡ�ַ���
	fgets(arrayo, (unsigned)sizeof(arrayo), stdin);
	fgets(arrayt, (unsigned)sizeof(arrayt), stdin);

	// ���л��з����룬���д��� 
	// strcspn:����һ���ַ����г����˵ڶ����ַ����е��ַ������ص�һ�����ֵ����������򷵻ص�һ���ַ����ĳ���
	int indexo = strcspn(arrayo, "\n");
	int indext = strcspn(arrayt, "\n");

	if (indexo != strlen(arrayo))
		arrayo[indexo] = '\0';

	if (indext != strlen(arrayt))
		arrayt[indext] = '\0';

	// strstr����������Ӵ��Ƿ�����ڴ������ַ����У���һ������Ϊ�������ַ������ڶ���Ϊ�Ӵ�������ֵΪ����λ�õ�ָ��
	char* goal = strstr(arrayo, arrayt);
	if (goal == NULL)
	{
		printf("NO");
		return 0;
	}

	// ����Ϊ��
	int times = 0;
	int loc[MAX + 1] = { 0 };

	while (goal != NULL)
	{
		times++;
		int pos = goal - arrayo;
		loc[pos] = 1;
		goal = strstr(++goal, arrayt);
	}

	// ��ӡ���
	printf("%dtimes", times);
	for (int i = 0; i < MAX + 1; i++)
	{
		if (loc[i] != 0)
			printf(",%d", i);
	}
}