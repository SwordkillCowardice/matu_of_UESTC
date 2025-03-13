// 建立单链表
#include <stdio.h>
#include <stdlib.h>

// 定义节点
struct node
{
	int data;
	struct node* next;
};

// 函数原型
struct node* createList(int data[], int n);
void freelst(struct node* h);
void printlst(struct node* h);

// 主函数
int main()
{
	struct node* header = NULL, * p;
	int* data, n, i;
	scanf_s("%d", &n);
	data = (int*)malloc(n * sizeof(int));
	if (!data)return 0;
	for (i = 0; i < n; ++i)scanf_s("%d", data + i);
	header = (struct node*)createList(data, n);
	p = header;
	printlst(header);
	freelst(header);
	free(data);
	return 0;
}

// 打印链表
void printlst(struct node* h)
{
	struct node* p = h->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}

// 销毁链表
void freelst(struct node* h)
{
	struct node* p = h->next;
	while (p)
	{
		h->next = p->next;
		free(p);
		p = h->next;
	}
	free(h);
}

struct node* createList(int data[], int n)
{
	struct node* head = (struct node*)malloc(sizeof(node));
	if (head == NULL)
	{
		printf("error");
		return NULL;
	}
	head->next = NULL;
	struct node* ptr = head;

	int count = 0;
	while (count != n)
	{
		struct node* p = (struct node*)malloc(sizeof(node));
		if (p == NULL)
		{
			printf("error");
			return NULL;
		}

		p->next = NULL;
		p->data = data[count];

		ptr->next = p;
		ptr = ptr->next;
		count++;
	}
	return head;
}
