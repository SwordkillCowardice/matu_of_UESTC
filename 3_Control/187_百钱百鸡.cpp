// ��Ǯ�ټ�(���⣺��100��Ǯ��100ֻ��) (������Ŀ��С����3ֻ1��Ǯ)
#include <stdio.h>

// ���弦�ۣ���Ǯ�����蹺������������С��������ϵ��
#define MALE_PRICE 5
#define FEMALE_PRICE 3
#define THREESMALL_PRICE 1
#define NUMBER 3
#define MONEY 100
#define TOTAL 100

// ������
int main(void)
{
	// ���嵥��ĳ�༦�����������(Ϊ�˼����ܻ����ķ���,���ҽ�С����ֻ��Ϊһֻ)
	double max_male = MONEY / MALE_PRICE;
	double max_female = MONEY / FEMALE_PRICE;
	double max_small = MONEY / THREESMALL_PRICE;

	// ���廨��
	int cost;

	// ѭ�����
	for (int i = 0; i <= max_male; i++)
	{
		// �ֳ�cost����
		cost = 0;

		// ����cost�����ж�,��ֻ���˹����ͻ�������Ǯ��ֱ���˳�
		cost += i * MALE_PRICE;
		if (cost == MONEY)
			return 0;

		// ����iֻ��������Ǯʣ�࣬����ĸ��
		for (int j = 0; j <= max_female; j++)
		{
			// ����cost�����ж�,��ֻ���˹�����ĸ���ͻ�������Ǯ��Ҳ�ǲ�������100ֻ���ģ��˴�break����return
			cost += j * FEMALE_PRICE;
			if (cost >= MONEY)
				break;

			// ���깫����ĸ��������С��(�˴�ѭ��������cost������ǰ�治ͬ)
			for (int z = 0; z < max_small; z++)
			{
				// ÿ��������ֻС����Ǯ��
				cost += THREESMALL_PRICE;

				// ���㵱ǰС���������Լ��ܹ�����,������������ֱ�ӽ�����ĸ������һ��ѭ��
				int small = NUMBER * (z + 1);
				int buy = small + i + j;
				if (buy > TOTAL || cost > MONEY)
					break;

				// �����������ļ���
				if (cost == MONEY && buy == TOTAL)
				{
					printf("%d,%d,%d,", i, j, small);
					break;
				}
			}

			// ע��costֵ�ĸ���
			cost = i * MALE_PRICE;
		}
	}
}