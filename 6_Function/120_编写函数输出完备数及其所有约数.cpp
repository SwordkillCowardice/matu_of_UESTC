// ����걸������Լ��(30000����)
#include <math.h>
#include <stdio.h>

// ������󳤶�(����һ����n��������и���n��Լ�����˴����Դ���)
#define LENGTH 180

// ��С�ڵ���j���걸������Լ��
void find(int j)
{
	// ���������Դ洢Լ��
	int array[LENGTH] = { 0 };

	// ���Լ������¼Լ��֮�� (1,2,3�����жϲ���)
	for (int i = 4; i <= j; i++)
	{
		// ����Լ��������Լ��֮�ͣ�ƽ����
		int count = 0;
		int total = 0;
		double tmp = sqrt((double)i);

		// ���Լ������¼,��¼�ܺ�
		for (int z = 2; z <= tmp; z++)
		{
			if (i % z == 0)
			{
				// zΪ����ֵʱ��ֻ���¼һ��(z = 1ֱ�Ӽ���)
				if (z == tmp)
				{
					total += z;
					array[count++] = z;
				}

				// zΪ����Լ��ʱ����Ҫ��¼����
				else
				{
					int num = i / z;
					total += (z + num);
					array[count++] = z;
					array[count++] = num;
				}
			}
		}

		// ��û�ӵ�1����
		total += 1;
		count += 1;
		array[count - 1] = 1;

		// �ж��ǲ����걸��
		if (total == i)
		{
			// ����¼Լ��������Ԫ������
			for (int k = 0; k < count - 1; k++)
			{
				for (int t = 0; t < count - k - 1; t++)
				{
					if (array[t] > array[t + 1])
					{
						int mid = array[t];
						array[t] = array[t + 1];
						array[t + 1] = mid;
					}
				}
			}

			// ��ӡ���
			printf("%d=", i);
			for (int i = 0; i < count - 1; i++)
			{
				printf("%d+", array[i]);
			}
			printf("%d\n", array[count - 1]);
		}
	}
}