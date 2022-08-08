//˳����ȱ��
//1.�м���в��Ĳ����ɾ����ʱ�临�Ӷ�Ϊo��n��
//2.������Ҫ����ռ䣬�������ݣ��ͷžɿռ䣬��������
//3.����һ����2��������������ɿռ��˷�

//����
//��ͷ�����ѭ���������ṹ�򵥣�һ�㲻�ᵥ�����������ݣ�ʵ���ϸ�����Ϊ�������ݽṹ���ӽṹ�����ϣ��ͼ���ڽӱ�
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
void SListPushFront(SLTNode** pphead, SLTDataType X)//ͷ��-����ɲ�Ϊ�գ�Ҫ�ı����SList-�õ�ַ
{
	assert(pphead);
	SLTNode* newnode = BuyNewNode(X);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPushBack(SLTNode** pphead, SLTDataType X)//β��-����Ϊ�գ�Ҫ�ı����SList �ĳ�Ա-�ýṹ��ָ�뼴��
{
	assert(pphead);
	SLTNode* newnode = BuyNewNode(X);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//��β
		SLTNode* tail = *pphead;
		while(tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SListPopFront(SLTNode** pphead)//ͷɾ
{
	assert(pphead);
//	if (*pphead == NULL)//������
//	{
//		return;
//
//}
	assert(*pphead != NULL);//�������
	
	SLTNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
	del = NULL;
}
//void SListPopBack(SLTNode** pphead)//βɾ
//{
//	assert(pphead);
//		//��β
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
void SListPopBack(SLTNode** pphead)//βɾ
{
	//	if (*pphead == NULL)//������
//	{
//		return;
//
//}
	assert(*pphead != NULL);//�������
	assert(pphead);
	//һ���ڵ�
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//����ڵ�
	{
		//��β
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
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType X)//����-��pos֮ǰ����
{
	assert(pphead);
	assert(pos);//��pos֮ǰ����
	if (pos == *pphead)
	{
		SListPushFront(pphead,X);
	}
	else {
		SListNode* pre = *pphead;
		while (pre->next != pos)
		{
			pre = pre->next;
			assert(pre);//�ҵ�NULL��û�ҵ�pos˵��pos������
		}
		SListNode* newnode = BuyNewNode(X);
		pre->next = newnode;
		newnode->next = pos;
	}
}
void SListEarse(SLTNode** pphead, SLTNode* pos)//ɾ��-ɾ��pos
{

}
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType X)//����-��pos֮�����
{
	assert(pos);
	SListNode* newnode = BuyNewNode(X);
	newnode->next = pos->next;
	pos->next = newnode;
}