//闭环追赶
//fast追slow、
//差距N
//N-2    N-1
//0      1->-1
//则fast需追赶slow为c-1步（c为圈的步数）
//若c-1为奇数，则永远错过 若c-1为偶数，则可以追上
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