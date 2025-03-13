// �����ʷ���Ϊ����
#include <ctype.h>
#include <stdio.h>

// ����
#define MAX 20
#define FIRSTO 'a'
#define FIRSTT 'A'
#define LAST0 'v'
#define LASTT 'V'
#define BIASO 4
#define BIAST 22

// ����ԭ��
int get_words(char word[], int length);
void substitute(char word[]);

// ������
int main(void)
{	
	// ����ԭ������
	char plain[MAX + 1];

	// ��ȡ����
	int sign = get_words(plain, MAX);

	// �滻�ַ�
	if (sign != 0)
		substitute(plain);
}

// ��ȷ��ȡ����
int get_words(char word[], int length)
{
	// �����ȡ�ַ� ������Ӧ����
	for (int i = 0; i < length; i++)
	{
		scanf_s("%c", &word[i], (unsigned)sizeof(char));

		// ��ȡ���ַ�
		if (i == 0)
		{
			if (!isalpha(word[i]))
			{
				printf("error");
				return 0;
			}
		}

		// �ڶ��ּ�����
		else
		{
			// ��Ϊenter����������룬�������ֹ��Ϊ�滻��׼��
			if (word[i] == '\n')
			{
				word[i] = '\0';
				return 1;
			}

			// ���ж��Ƿ�Ϊ��ĸ
			else if (!isalpha(word[i]))
			{
				printf("error");
				return 0;
			}
		}
	}
	// ��ȡ����20���ַ���û������enter,��ĩβ����'\0'
	word[length] = '\0';
	return 1;
}

// ���ܲ����
void substitute(char word[])
{
	for (int i = 0; word[i] != '\0'; i++)
	{
		if ((word[i] >= FIRSTO && word[i] <= LAST0) || (word[i] >= FIRSTT && word[i] <= LASTT))
			word[i] = word[i] + BIASO;
		else
			word[i] = word[i] - BIAST;
		printf("%c", word[i]);
	}
}