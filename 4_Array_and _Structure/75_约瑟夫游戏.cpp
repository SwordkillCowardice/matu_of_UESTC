// 约瑟夫游戏
#include <stdio.h>
#include <stdlib.h>

// 主函数
int main(void)
{
    // 定义总人数,剩余人数,间隔人数,读取数据并检查
    int total, rest, interval;
    int p = scanf_s("%d %d %d", &total, &rest, &interval);

    // 此处检查逻辑需要注意,总人数可以是1,总人数可以等于剩余人数，总人数可以小于间隔数，还需检查读到是否为整数
    if (total < 1 || total < rest || rest < 0 || interval < 0 || p != 3)
    {
        printf("ERROR");
        return 0;
    }

    // 动态分配一个数组
    int* people = (int*)malloc(sizeof(int) * total);
    if (people == NULL)
        return 0;

    // 如果分配成功,则初始化
    for (int i = 0; i < total; i++)
    {
        people[i] = i + 1;
    }

    // 删除元素直至达到要求(此处通过弃用数组后续空间,将后续元素移动到删除位置来起到缩减效果)
    int index = 0;

    while (total != rest)
    {
        // 更新索引
        index = (index + interval) % total;
        
        // 更新元素
        for (int i = index + 1; i < total; i++)
        {
            people[i - 1] = people[i];
        }
        total--;
    }

    // 打印结果
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

    // 释放空间
    free(people);
}