// 显示时间
#include <stdio.h>

// 时钟结构体
typedef struct clock
{
    int hour;
    int minute;
    int second;
} CLOCK;

// 定义常量
#define LOW 0
#define MAX_HOUR 23
#define RANGE 60

// 主函数
int main(void)
{
    // 定义时钟并获取输入,判断其合法性
    CLOCK clk;
    scanf_s("%d,%d,%d", &clk.hour, &clk.minute, &clk.second);

    if (clk.hour > MAX_HOUR || clk.minute > RANGE || clk.second > RANGE || 
        clk.hour < LOW || clk.minute < LOW || clk.second < LOW)
    {
        printf("error");
        return 0;
    }

    // 合法时直接输出 %0nd表示以n位输出整数
    else
        printf("%02d:%02d:%02d", clk.hour, clk.minute, clk.second);
}