// 逆序输出字符串(最大长度未知) 知识有限，选择链表
#include <stdio.h>
#include <stdlib.h>

// 定义节点
typedef struct node
{
	char sign;
	struct node* next;
} node;

// 定义销毁链表函数,逆序函数
node* inverse(node* p);
void print_list(node* p);
void destroy(node* p);

// 主函数
int main(void)
{
	// 定义一个空头节点,一个移位指针,一个字符读取缓冲区
	node* head = (node*)malloc(sizeof(node));
	if (head == NULL)
		return 0;

	head->next = NULL;
	node* tmp = head;
	char buf;

	// 循环读取字符
	while (1)
	{
		scanf_s("%c", &buf,(unsigned)sizeof(char));
		
		// 判断是否结束输入
		if (buf == '\n')
			break;

		else
		{
			// 分配一个新节点存储字符
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

	// 链表逆序
	head->next = inverse(head->next);

	// 打印链表
	print_list(head);

	// 销毁链表
	destroy(head);
}

// 链表逆序(基本思想是定义一个前节点指针,先存好当前节点后续节点的位置避免丢失，
// 再让当前节点指向前节点,更新前节点和当前节点)
node* inverse(node* p)
{
	// 定义当前指针,定义前指针
	node* cur = p;
	node* pre = NULL;

	// 循环
	while (cur != NULL)
	{
		node* tmp = cur->next;
		cur->next = pre;
		pre = cur;
		cur = tmp;
	}

	return pre;
}

// 打印链表
void print_list(node* p)
{
	for (node* ptr = p->next; ptr != NULL; ptr = ptr->next)
	{
		printf("%c", ptr->sign);
	}
}

// 递归销毁链表
void destroy(node* p)
{
	// 基本情况
	if (p == NULL)
		return;

	// 递归情况
	else
	{
		destroy(p->next);
		free(p);
	}
}