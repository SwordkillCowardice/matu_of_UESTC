// ���ŵ��
#include <stdio.h>
#include <stdlib.h>

// ������
int main(void)
{
    // �������Ŷ����cases����ȡcases�����
    int cases;
    int p = scanf_s("%d", &cases);

    if (p != 1 || cases < 1)
    {
        printf("error");
        return 0;
    }

    // ��̬�����ڴ棬�Դ洢�Ŷ����
    int* divisors = (int*)malloc(cases * sizeof(int));
    int* reminders = (int*)malloc(cases * sizeof(int));

    if (divisors == NULL || reminders == NULL)
        return 0;

    // �������ȡ�����洢�����Ŷӻ���
    int max = 0;

    for (int i = 0; i < cases; i++)
    {
        scanf_s("%d %d", &divisors[i], &reminders[i]);

        // �������
        if (divisors[i] <= 0 || reminders[i] < 0 || reminders[i] > divisors[i])
        {
            printf("error");
            return 0;
        }

        // �����������������±�
        if (divisors[i] > max)
            max = i;
    }

    // �����������count,��־����sign,�������result
    int count = 0;
    int sign = 1;
    int result = 0;

    // while����ѭ����ֱ���ҵ����ֲ��˳�
    while (max)
    {
        // ����resultֵ
        result = divisors[max] * count + reminders[max];

        // �жϵ�ǰresult�Ƿ���������
        for (int i = 0; i < cases; i++)
        {
            if (result % divisors[i] != reminders[i])
            {
                sign = 0;
                break;
            }
        }

        // result�������� ���˳�
        if (sign == 1)
            break;

        // ����sign������
        sign = 1;
        count++;
    }

    // ��ӡ���
    printf("%d", result);
}