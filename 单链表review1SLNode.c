#include"SLNode.h"



LTNode*SLBuynewnode(SLDatetype x)//创建新节点
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void Print(LTNode*phead)//打印函数
{

	LTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SLPushfront(LTNode**phead,SLDatetype x)//头插
{
	assert(phead);
	LTNode* newnode = SLBuynewnode(x);
	newnode->next = *phead;
	*phead = newnode;//新节点充当表头
	
}


void SLPushback(LTNode** pphead, SLDatetype x)//尾插
{
	assert(pphead);
	LTNode* newnode = SLBuynewnode(x);//新建节点
	//一种情况为空链表
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	//另一种情况不为空链表
	else
	{
		LTNode* tail = *pphead;
		while (tail->next != NULL)//找表尾
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}


void SLDestroy(LTNode**phead)//销毁函数
{
	assert(phead);
	LTNode* cur = *phead;
	while (cur != NULL)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(cur);
	cur = NULL;
	
}

void SLPopfront1(LTNode** pphead)//尾删-单指针法
{
	LTNode* cur = *pphead;
	while (cur->next->next != NULL)//找尾
	{
		cur = cur->next;
	}
	LTNode* prev = cur->next;
	cur->next = cur->next -> next;
	free(prev);
	prev = NULL;
	cur = NULL;
}

void SLPopfront2(LTNode** pphead)//尾删-双指针法
{
	assert(pphead);
	LTNode* cur = *pphead;
	LTNode* prev = NULL;
	while (cur->next != NULL)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = cur->next;
	free(cur);
	cur =  NULL;
	prev = NULL;
}

void SLPopback(LTNode** pphead)//头删
{	
	assert(pphead);
	LTNode* cur = *pphead;
	*pphead = cur->next;
	free(cur);
	cur = NULL;
}


LTNode*SLFind(LTNode* phead, SLDatetype x)//查询函数
{
	LTNode* cur = phead;
	while (cur!=NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;

}

//
void SLInsertbefore(LTNode** pphead, LTNode* pos, SLDatetype x)//插入函数-在pos之前
{
	assert(pphead);
	assert(pos);
	if (pos == *pphead)
	{
		SLPushfront(pphead, x);
	}
	else
	{
		LTNode* tail = *pphead;
		while (tail->next != pos)
		{
			tail = tail->next;
			assert(tail);
		}
		LTNode* newnode = SLBuynewnode(x);
		tail->next = newnode;
		newnode->next = pos;
	}
}

void  SLInsertafter(LTNode** pphead, LTNode* pos, SLDatetype x)
{
	assert(pphead);
	assert(pos);
	if (pos==*pphead)
	{
		SLPopback(pphead, x);
	}
	else
	{
		LTNode* tail = SLBuynewnode(x);
		pos->next = tail;
	}
}

void SListEarse(LTNode** pphead, LTNode* pos)//删除函数
{
	assert(pphead);
	assert(pos);
	if (pos == *pphead)
	{
		LTNode* cur = pos->next;
		free(pos);
		pos = NULL;
		*pphead = cur;
	}
	else
	{
		LTNode* tail = *pphead;
		while (tail->next != pos)
		{
			tail = tail->next;
			assert(tail);
		}
		tail->next = pos->next;
		free(pos);
		pos = NULL;
	}
}