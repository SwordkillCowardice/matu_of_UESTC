// ��֤��°ͺղ���
#include <math.h>
#include <stdio.h>

// ���峣��
#define LOW 4
#define HIGH 2000

// �����ж���������,�ֽ⺯��
int isprime(int number);
void Goldbach(int number);

// ������
int main(void)
{
    // ��ȡ���벢���
    int n;
    scanf_s("%d", &n);

    if (n < LOW || n >= HIGH || n % 2 != 0)
    {
        printf("error");
        return 0;
    }

    // �ֽ�
    Goldbach(n);
}

// �ж�����
int isprime(int number)
{
    // 1��������
    if (number == 1)
        return 0;

    // number���ڵ���2�����
    double mid = sqrt((double)number);

    for (int i = 2; i <= mid; i++)
    {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

// �ֽ⺯��
void Goldbach(int number)
{
    // ����numberΪ4ʱ���Ż�ֽ�Ϊ2+2(��ż������)
    if (number == 4)
    {
        printf("2 2");
        return;
    }

    // number��Ϊ4ʱ
    else
    {
        // ���ȣ�����������һ����һ������ֵһ�������࣬���������Ӷ���Ϊleft���������Ӿ�Ϊ����
        int half = number / 2;
        int left;

        // �Ϸ����ų�������Ϊ2�����ֱ������ż����
        for (left = 3; left <= half; left += 2)
        {
            if (isprime(left))
            {
                if (isprime(number - left))
                {
                    printf("%d %d", left, number - left);
                    return;
                }
            }
        }
    }
}