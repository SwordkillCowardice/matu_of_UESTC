// 验证哥德巴赫猜想
#include <math.h>
#include <stdio.h>

// 定义常数
#define LOW 4
#define HIGH 2000

// 定义判断素数函数,分解函数
int isprime(int number);
void Goldbach(int number);

// 主函数
int main(void)
{
    // 获取输入并检查
    int n;
    scanf_s("%d", &n);

    if (n < LOW || n >= HIGH || n % 2 != 0)
    {
        printf("error");
        return 0;
    }

    // 分解
    Goldbach(n);
}

// 判断素数
int isprime(int number)
{
    // 1不是素数
    if (number == 1)
        return 0;

    // number大于等于2的情况
    double mid = sqrt((double)number);

    for (int i = 2; i <= mid; i++)
    {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

// 分解函数
void Goldbach(int number)
{
    // 仅在number为4时，才会分解为2+2(有偶数出现)
    if (number == 4)
    {
        printf("2 2");
        return;
    }

    // number不为4时
    else
    {
        // 首先，两个素因子一定有一个在数值一半或其左侧，左侧的素因子定义为left，且两因子均为奇数
        int half = number / 2;
        int left;

        // 上方已排除素因子为2情况，直接跳过偶数轮
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