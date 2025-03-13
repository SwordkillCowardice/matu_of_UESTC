// Լɪ����Ϸ
#include <stdio.h>
#include <stdlib.h>

// ������
int main(void)
{
    // ����������,ʣ������,�������,��ȡ���ݲ����
    int total, rest, interval;
    int p = scanf_s("%d %d %d", &total, &rest, &interval);

    // �˴�����߼���Ҫע��,������������1,���������Ե���ʣ������������������С�ڼ����������������Ƿ�Ϊ����
    if (total < 1 || total < rest || rest < 0 || interval < 0 || p != 3)
    {
        printf("ERROR");
        return 0;
    }

    // ��̬����һ������
    int* people = (int*)malloc(sizeof(int) * total);
    if (people == NULL)
        return 0;

    // �������ɹ�,���ʼ��
    for (int i = 0; i < total; i++)
    {
        people[i] = i + 1;
    }

    // ɾ��Ԫ��ֱ���ﵽҪ��(�˴�ͨ��������������ռ�,������Ԫ���ƶ���ɾ��λ����������Ч��)
    int index = 0;

    while (total != rest)
    {
        // ��������
        index = (index + interval) % total;
        
        // ����Ԫ��
        for (int i = index + 1; i < total; i++)
        {
            people[i - 1] = people[i];
        }
        total--;
    }

    // ��ӡ���
    if (total == 0)
        printf("0");

    else
    {
        for (int i = 0; i < total - 1; i++)
        {
            printf("%d,", people[i]);
        }
        printf("%d", people[total - 1]);
    }

    // �ͷſռ�
    free(people);
}