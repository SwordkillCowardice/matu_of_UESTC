#include<stdio.h>

void main()
{
	int i, j, k, count = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == j)
				continue;
			else
			{
				for (k = 0; k <= 9; k++)
				{
					if (k == i || k == j) {continue;} else
					{
						count++;
					}
				}
			}
		}	
	}
	printf("%d", count);
}
