// 韩信点兵
#include <stdio.h>
#include <stdlib.h>

// 主函数
int main(void)
{
    // 定义总排队情况cases，获取cases并检查
    int cases;
    int p = scanf_s("%d", &cases);

    if (p != 1 || cases < 1)
    {
        printf("error");
        return 0;
    }

    // 动态分配内存，以存储排队情况
    int* divisors = (int*)malloc(cases * sizeof(int));
    int* reminders = (int*)malloc(cases * sizeof(int));

    if (divisors == NULL || reminders == NULL)
        return 0;

    // 逐情况读取，并存储最大的排队基数
    int max = 0;

    for (int i = 0; i < cases; i++)
    {
        scanf_s("%d %d", &divisors[i], &reminders[i]);

        // 检查输入
        if (divisors[i] <= 0 || reminders[i] < 0 || reminders[i] > divisors[i])
        {
            printf("error");
            return 0;
        }

        // 更新最大基数，存其下标
        if (divisors[i] > max)
            max = i;
    }

    // 定义迭代变量count,标志变量sign,结果变量result
    int count = 0;
    int sign = 1;
    int result = 0;

    // while永真循环，直到找到数字才退出
    while (max)
    {
        // 迭代result值
        result = divisors[max] * count + reminders[max];

        // 判断当前result是否满足条件
        for (int i = 0; i < cases; i++)
        {
            if (result % divisors[i] != reminders[i])
            {
                sign = 0;
                break;
            }
        }

        // result满足条件 则退出
        if (sign == 1)
            break;

        // 重置sign并迭代
        sign = 1;
        count++;
    }

    // 打印结果
    printf("%d", result);
}