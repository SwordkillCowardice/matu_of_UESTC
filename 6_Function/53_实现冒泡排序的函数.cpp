// Ã°ÅİÅÅĞò
#include <stdio.h>

// º¯Êı
void bubbleSort(int data[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                int mid = data[j];
                data[j] = data[j + 1];
                data[j + 1] = mid;
            }
        }
    }
}