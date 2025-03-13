// 实现矩阵乘法
#include <stdio.h>

// 函数原型
void Matrix_Mul(int a[3][2], int b[2][4])
{
    // 定义结果矩阵
    int result[3][4] = {0};

    // 计算结果
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 打印结果
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}