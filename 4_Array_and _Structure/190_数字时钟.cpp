// ��ʾʱ��
#include <stdio.h>

// ʱ�ӽṹ��
typedef struct clock
{
    int hour;
    int minute;
    int second;
} CLOCK;

// ���峣��
#define LOW 0
#define MAX_HOUR 23
#define RANGE 60

// ������
int main(void)
{
    // ����ʱ�Ӳ���ȡ����,�ж���Ϸ���
    CLOCK clk;
    scanf_s("%d,%d,%d", &clk.hour, &clk.minute, &clk.second);

    if (clk.hour > MAX_HOUR || clk.minute > RANGE || clk.second > RANGE || 
        clk.hour < LOW || clk.minute < LOW || clk.second < LOW)
    {
        printf("error");
        return 0;
    }

    // �Ϸ�ʱֱ����� %0nd��ʾ��nλ�������
    else
        printf("%02d:%02d:%02d", clk.hour, clk.minute, clk.second);
}