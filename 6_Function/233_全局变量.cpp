#include <stdio.h>

extern int cal(int* pData, int iLen)
{
	// ������
	if (pData == NULL || iLen < 1)
		return 0;

	// ������ֵ��ƽ��ֵ
	extern int max_val;
	extern int min_val;
	extern int ave_val;

	max_val = 0;
	min_val = pData[0];

	// ������ֵ
	int total = 0;
	for (int i = 0; i < iLen; i++)
	{
		if (pData[i] > max_val)
			max_val = pData[i];
		if (pData[i] < min_val)
			min_val = pData[i];

		total += pData[i];
	}	

	// ����ƽ��ֵ
	ave_val = total / iLen;
	return 1;
}