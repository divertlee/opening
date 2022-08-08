//顺序表的缺点
//1.中间或中部的插入和删除，时间复杂度为o（n）
//2.增容需要申请空间，拷贝数据，释放旧空间，会有消耗
//3.扩容一般以2倍的增长，易造成空间浪费

//链表
//无头单向非循环单链表：结构简单，一般不会单独用来存数据，实际上更多作为其他数据结构的子结构，如哈希表，图的邻接表
#include"SList.h"

void SListPrint(SLTNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
}
	printf("NULL\n");
}
SLTNode* BuyNewNode(SLTDataType X)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->data = X;
	newnode->next = NULL;
	return newnode;
}
void SListPushFront(SLTNode** pphead, SLTDataType X)//头插-链表吧不为空，要改变的是SList-用地址
{
	assert(pphead);
	SLTNode* newnode = BuyNewNode(X);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPushBack(SLTNode** pphead, SLTDataType X)//尾插-链表不为空，要改变的是SList 的成员-用结构体指针即可
{
	assert(pphead);
	SLTNode* newnode = BuyNewNode(X);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾
		SLTNode* tail = *pphead;
		while(tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SListPopFront(SLTNode** pphead)//头删
{
	assert(pphead);
//	if (*pphead == NULL)//温柔检查
//	{
//		return;
//
//}
	assert(*pphead != NULL);//暴力检查
	
	SLTNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
	del = NULL;
}
//void SListPopBack(SLTNode** pphead)//尾删
//{
//	assert(pphead);
//		//找尾
//		SLTNode* tail = *pphead;
//		SLTNode* open = NULL;
//		while (tail->next != NULL)
//		{
//			open = tail;
//			tail = tail->next;
//		}
//		open->next = NULL;
//		free(tail->next);
//		tail = NULL;
//	
//}
void SListPopBack(SLTNode** pphead)//尾删
{
	//	if (*pphead == NULL)//温柔检查
//	{
//		return;
//
//}
	assert(*pphead != NULL);//暴力检查
	assert(pphead);
	//一个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//多个节点
	{
		//找尾
		SLTNode* tail = *pphead;

		if (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

void SListDestory(SLTNode** pphead)
{
	assert(pphead);
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}
SLTNode* SListFind(SLTNode* phead, SLTDataType X)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == X)
		{
			return cur;
		}
			cur = cur->next;
	}
	return NULL;
	
}
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType X)//插入-在pos之前插入
{
	assert(pphead);
	assert(pos);//在pos之前插入
	if (pos == *pphead)
	{
		SListPushFront(pphead,X);
	}
	else {
		SListNode* pre = *pphead;
		while (pre->next != pos)
		{
			pre = pre->next;
			assert(pre);//找到NULL还没找到pos说明pos传错了
		}
		SListNode* newnode = BuyNewNode(X);
		pre->next = newnode;
		newnode->next = pos;
	}
}
void SListEarse(SLTNode** pphead, SLTNode* pos)//删除-删除pos
{

}
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType X)//插入-在pos之后插入
{
	assert(pos);
	SListNode* newnode = BuyNewNode(X);
	newnode->next = pos->next;
	pos->next = newnode;
}