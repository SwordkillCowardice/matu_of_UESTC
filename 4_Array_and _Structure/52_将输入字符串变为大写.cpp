// �ַ���ת��д
#include <ctype.h>
#include <stdio.h>

// ���峣��
#define MAX_LENGTH 21

// ������
int main(void)
{
	// �����ַ����鲢�洢�ַ���
	char str[MAX_LENGTH];
	scanf_s("%20s", str, (unsigned)sizeof(str));

	// ���ַ�����Сд��ĸת��д
	int i = 0;
	while (str[i] != '\0')
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		i++;
	}

	// ��ӡ
	printf("%s\n", str);
}