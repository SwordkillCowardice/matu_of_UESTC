// 百钱百鸡(题意：用100块钱买100只鸡) (看清题目：小鸡是3只1块钱)
#include <stdio.h>

// 定义鸡价，总钱数，需购买总数，计算小鸡数量的系数
#define MALE_PRICE 5
#define FEMALE_PRICE 3
#define THREESMALL_PRICE 1
#define NUMBER 3
#define MONEY 100
#define TOTAL 100

// 主函数
int main(void)
{
	// 定义单买某类鸡的最大购买数量(为了计算总花销的方便,暂且将小鸡三只视为一只)
	double max_male = MONEY / MALE_PRICE;
	double max_female = MONEY / FEMALE_PRICE;
	double max_small = MONEY / THREESMALL_PRICE;

	// 定义花销
	int cost;

	// 循环求解
	for (int i = 0; i <= max_male; i++)
	{
		// 轮初cost清零
		cost = 0;

		// 更新cost并做判断,若只买了公鸡就花光所有钱，直接退出
		cost += i * MALE_PRICE;
		if (cost == MONEY)
			return 0;

		// 买完i只公鸡还有钱剩余，再买母鸡
		for (int j = 0; j <= max_female; j++)
		{
			// 更新cost并做判断,若只买了公鸡和母鸡就花光所有钱，也是不可能买够100只鸡的，此处break而非return
			cost += j * FEMALE_PRICE;
			if (cost >= MONEY)
				break;

			// 买完公鸡和母鸡，再买小鸡(此处循环条件及cost更新与前面不同)
			for (int z = 0; z < max_small; z++)
			{
				// 每轮增加三只小鸡的钱数
				cost += THREESMALL_PRICE;

				// 计算当前小鸡购买量以及总购买量,若不满足题意直接进入买母鸡的下一轮循环
				int small = NUMBER * (z + 1);
				int buy = small + i + j;
				if (buy > TOTAL || cost > MONEY)
					break;

				// 输出满足题意的鸡量
				if (cost == MONEY && buy == TOTAL)
				{
					printf("%d,%d,%d,", i, j, small);
					break;
				}
			}

			// 注意cost值的更新
			cost = i * MALE_PRICE;
		}
	}
}