// ����������Ĳ�(��Ҫ������ת��Ϊ��������,ֱ�����ַ����ͺ�)
#include <stdio.h>
#include <string.h>

// ������󳤶�
#define MAX 51

// ������
int main(void)
{
	// ��������num1,num2�ֱ�洢����
	char num1[MAX];
	char num2[MAX];

	// ��ȡ����
	scanf_s("%51s", num1, (unsigned)sizeof(num1));
	scanf_s("%51s", num2, (unsigned)sizeof(num2));

	// �ж������Ƿ����
	int tmp = strcmp(num1, num2);
	if (!tmp)
	{
		printf("0");
		return 0;
	}

	// �ֱ����������λ��,much��ʾλ������Ǹ�
	int much = (int)strlen(num1);
	int less = (int)strlen(num2);

	// ��������ָ�벢��ʼ����bigָ�����Ǹ�
	char* big = num1;
	char* small = num2;

	// ������Ҫ,����λ��
	if (much < less || (much == less && tmp < 0))
	{
		int mid = much;
		much = less;
		less = mid;
		big = num2;
		small = num1;
	}

	// �����ַ�����ĩ�ַ���ʼ,���������(������ֱ�Ӵ���bigָ��ָ���������)
	int i = much - 1;
	for (int j = less - 1; j >= 0; j--, i--)
	{
		// ����ʱ,ֱ�Ӽ�(ĩβ�ӡ�0��ת��Ϊ�ַ�0-9֮��)
		if (big[i] >= small[j])
			big[i] = big[i] - small[j] + '0';

		// ������ʱ,���λ
		else
		{
			big[i] = big[i] + 10 - small[j] + '0';
			big[i - 1]--;
		}
	}

	// ������ɺ�����������λ(����еĻ�)
	while (i >= 0)
	{
		// ������߱���λΪ0
		if (big[i] < '0')
		{
			// ֱ�Ӽ�10�Ϳ��������ַ�0-9֮��
			big[i] = big[i] + 10;
			big[i - 1]--;
		}
		i--;
	}

	// ���������ֲ����ʱ,��Ҫ�������
	if (big == num1)
		printf("+%s", num1);
	else
		printf("-%s", num2);
}