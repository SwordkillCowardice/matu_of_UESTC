// ��������ַ���(��󳤶�δ֪) ֪ʶ���ޣ�ѡ������
#include <stdio.h>
#include <stdlib.h>

// ����ڵ�
typedef struct node
{
	char sign;
	struct node* next;
} node;

// ��������������,������
node* inverse(node* p);
void print_list(node* p);
void destroy(node* p);

// ������
int main(void)
{
	// ����һ����ͷ�ڵ�,һ����λָ��,һ���ַ���ȡ������
	node* head = (node*)malloc(sizeof(node));
	if (head == NULL)
		return 0;

	head->next = NULL;
	node* tmp = head;
	char buf;

	// ѭ����ȡ�ַ�
	while (1)
	{
		scanf_s("%c", &buf,(unsigned)sizeof(char));
		
		// �ж��Ƿ��������
		if (buf == '\n')
			break;

		else
		{
			// ����һ���½ڵ�洢�ַ�
			node *poi = (node*)malloc(sizeof(node));

			if (poi == NULL)
			{
				destroy(head);
				return 0;
			}

			poi->sign = buf;
			poi->next = NULL;

			tmp->next = poi;
			tmp = tmp->next;
		}
	}

	// ��������
	head->next = inverse(head->next);

	// ��ӡ����
	print_list(head);

	// ��������
	destroy(head);
}

// ��������(����˼���Ƕ���һ��ǰ�ڵ�ָ��,�ȴ�õ�ǰ�ڵ�����ڵ��λ�ñ��ⶪʧ��
// ���õ�ǰ�ڵ�ָ��ǰ�ڵ�,����ǰ�ڵ�͵�ǰ�ڵ�)
node* inverse(node* p)
{
	// ���嵱ǰָ��,����ǰָ��
	node* cur = p;
	node* pre = NULL;

	// ѭ��
	while (cur != NULL)
	{
		node* tmp = cur->next;
		cur->next = pre;
		pre = cur;
		cur = tmp;
	}

	return pre;
}

// ��ӡ����
void print_list(node* p)
{
	for (node* ptr = p->next; ptr != NULL; ptr = ptr->next)
	{
		printf("%c", ptr->sign);
	}
}

// �ݹ���������
void destroy(node* p)
{
	// �������
	if (p == NULL)
		return;

	// �ݹ����
	else
	{
		destroy(p->next);
		free(p);
	}
}