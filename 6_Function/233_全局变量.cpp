#include <stdio.h>

extern int cal(int* pData, int iLen)
{
	// 输入检查
	if (pData == NULL || iLen < 1)
		return 0;

	// 声明最值和平均值
	extern int max_val;
	extern int min_val;
	extern int ave_val;

	max_val = 0;
	min_val = pData[0];

	// 更新最值
	int total = 0;
	for (int i = 0; i < iLen; i++)
	{
		if (pData[i] > max_val)
			max_val = pData[i];
		if (pData[i] < min_val)
			min_val = pData[i];

		total += pData[i];
	}	

	// 计算平均值
	ave_val = total / iLen;
	return 1;
}