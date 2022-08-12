//�ջ�׷��
//fast׷slow��
//���N
//N-2    N-1
//0      1->-1
//��fast��׷��slowΪc-1����cΪȦ�Ĳ�����
//��c-1Ϊ����������Զ��� ��c-1Ϊż���������׷��
#include"List.h";
LTNode* ListInit()
{
	LTNode* guard =(LTNode*) malloc(sizeof(LTNode));
	if (guard == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	guard->next = guard;
	guard->prev = guard;
	return guard;
}
LTNode* BuyNewnode(X)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	newnode->data = X;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
void ListPushBack(LTNode* phead, LTDataType X)
{
	assert(phead);
	LTNode* newnode = BuyNewnode(X);
	LTNode* tail = phead->prev;
	tail->next = newnode;
	newnode->next = phead;
	newnode->prev = tail;
	phead->prev = newnode;
}

void Listprint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	printf("phead");
	while (cur != phead)
	{
		printf("<=>%d<=>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}