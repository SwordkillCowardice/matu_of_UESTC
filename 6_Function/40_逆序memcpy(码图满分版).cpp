// 注：这个版本是码图的满分版本，但是它的错误检查部分是错误的
// 实现逆序拷贝
#include <stdio.h>
#include <string.h>

// 逆序拷贝函数体
void* reversememcpy(void* destination, const void* source, int num)
{
	// 检查参数合法性(这道题最难想到的地方,值得深挖)
	// 需要判断两个地址的重叠情况对复制的影响(属于计分点)
	
	// 当source地址比destination小的时候(若重叠，则对复制有影响)[补;其实重叠也可以处理，偷个懒，以后写memmove再补]
	char* end1 = (char*)source + num - 1;

	if (destination == NULL || source == NULL || num < 0 || (char*)source - destination < num)
	{
		printf("error");
		return destination;
	}

	// 确定逆序拷贝的初始位置ptr(注：需要先转化为char类型指针，才能保证做加法是以字节为步长移动)
	// 同时因为数据在底层都是0/1,无论解释为char还是其他,0/1序列都是一样的
	char* ptr = end1;

	// 用一个字符指针来遍历destination的所有字节
	char* tmp = (char*)destination;

	// 逐个拷贝字节
	for (int i = 0; i < num; i++)
	{
		memcpy(tmp, ptr, 1);
		ptr--;
		tmp++;
	}

	return destination;
}