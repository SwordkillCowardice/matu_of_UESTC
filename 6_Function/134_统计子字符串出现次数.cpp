// ͳ���Ӵ��ڸ����г��ִ���(��������,�������Ĵ��䲻���н���)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ������
int SubStrNum(char* str, char* substr)
{
	// �ȷֱ���������ַ����ĳ���,�������ж�
	int length1 = strlen(str);
	int length2 = strlen(substr);

	// �Ӵ�����ʱ,��ȻΪ0
	if (length1 < length2)
	{
		printf("match times=0");
		return 0;
	}

	// ����һ��sign����, �����str��substr���ܳ��ֵ���ʼλ��
	// ����final����,final��������Ҫͳ�Ƶ����һ��λ��,Ҳ�ǿ�����Ϊ��ʼ����λ����
	int final = length1 - length2 + 1;
	int* sign = (int*)malloc(final * sizeof(int));
	if (sign == NULL)
		return 0;
	
	// ����count����,ͳ����ʼλ������
	int count = 0;
	for (int i = 0; i < final; i++)
	{
		if (str[i] == substr[0])
			sign[count++] = i;
	}

	// countΪ0�Ӵ������ܳ���,ֱ���˳�
	if (count == 0)
	{
		printf("match times=0");
		return 0;
	}

	// �����������times,ͳ���ܴ���;�������change,���ÿ�����Ƿ����times
	int times = 0;
	int change = 0;

	// ����ָ��tmp, ���ڱȶ��ַ���
	char* tmp = &str[sign[0]];

	// ѭ��ͳ��
	// ��ÿ�����ܵ���ʼλ�ÿ�ʼ�ȶ�
	for (int i = 0; i < count; i++)
	{
		// �����������ж���һ���жϵĳ�ʼλ���Ƿ��Ѱ�������һ����Ч����
		if (tmp > &str[sign[i]] && change)
			continue;

		else
		{
			// �ֳ�change��ʼ��Ϊ1
			change = 1;

			// ����ָ��ptr,���ڱ����Ӵ�;tmp���ڱ�������
			char* ptr = substr;
			tmp = &str[sign[i]];

			// ��һ�ȶԸ������Ӵ�������
			while (*ptr != '\0')
			{
				if (*tmp != *ptr)
				{
					change = 0;
					break;
				}
				ptr++;
				tmp++;
			}

			// ����times
			if (change)
				times++;
			
		}
	}

	// ��ӡ���
	printf("match times=%d", times);

	// �ͷ��ڴ�
	free(sign);
	return 0;
}