#include"SLNode.h"



LTNode*SLBuynewnode(SLDatetype x)//�����½ڵ�
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
void Print(LTNode*phead)//��ӡ����
{

	LTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SLPushfront(LTNode**phead,SLDatetype x)//ͷ��
{
	assert(phead);
	LTNode* newnode = SLBuynewnode(x);
	newnode->next = *phead;
	*phead = newnode;//�½ڵ�䵱��ͷ
	
}


void SLPushback(LTNode** pphead, SLDatetype x)//β��
{
	assert(pphead);
	LTNode* newnode = SLBuynewnode(x);//�½��ڵ�
	//һ�����Ϊ������
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	//��һ�������Ϊ������
	else
	{
		LTNode* tail = *pphead;
		while (tail->next != NULL)//�ұ�β
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}


void SLDestroy(LTNode**phead)//���ٺ���
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

void SLPopfront1(LTNode** pphead)//βɾ-��ָ�뷨
{
	LTNode* cur = *pphead;
	while (cur->next->next != NULL)//��β
	{
		cur = cur->next;
	}
	LTNode* prev = cur->next;
	cur->next = cur->next -> next;
	free(prev);
	prev = NULL;
	cur = NULL;
}

void SLPopfront2(LTNode** pphead)//βɾ-˫ָ�뷨
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

void SLPopback(LTNode** pphead)//ͷɾ
{	
	assert(pphead);
	LTNode* cur = *pphead;
	*pphead = cur->next;
	free(cur);
	cur = NULL;
}


LTNode*SLFind(LTNode* phead, SLDatetype x)//��ѯ����
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
void SLInsertbefore(LTNode** pphead, LTNode* pos, SLDatetype x)//���뺯��-��pos֮ǰ
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

void SListEarse(LTNode** pphead, LTNode* pos)//ɾ������
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