// ע������汾����ͼ�����ְ汾���������Ĵ����鲿���Ǵ����
// ʵ�����򿽱�
#include <stdio.h>
#include <string.h>

// ���򿽱�������
void* reversememcpy(void* destination, const void* source, int num)
{
	// �������Ϸ���(����������뵽�ĵط�,ֵ������)
	// ��Ҫ�ж�������ַ���ص�����Ը��Ƶ�Ӱ��(���ڼƷֵ�)
	
	// ��source��ַ��destinationС��ʱ��(���ص�����Ը�����Ӱ��)[��;��ʵ�ص�Ҳ���Դ���͵�������Ժ�дmemmove�ٲ�]
	char* end1 = (char*)source + num - 1;

	if (destination == NULL || source == NULL || num < 0 || (char*)source - destination < num)
	{
		printf("error");
		return destination;
	}

	// ȷ�����򿽱��ĳ�ʼλ��ptr(ע����Ҫ��ת��Ϊchar����ָ�룬���ܱ�֤���ӷ������ֽ�Ϊ�����ƶ�)
	// ͬʱ��Ϊ�����ڵײ㶼��0/1,���۽���Ϊchar��������,0/1���ж���һ����
	char* ptr = end1;

	// ��һ���ַ�ָ��������destination�������ֽ�
	char* tmp = (char*)destination;

	// ��������ֽ�
	for (int i = 0; i < num; i++)
	{
		memcpy(tmp, ptr, 1);
		ptr--;
		tmp++;
	}

	return destination;
}