//闭环追赶
//fast追slow、
//差距N
//N-2    N-1
//0      1->-1
//则fast需追赶slow为c-1步（c为圈的步数）
//若c-1为奇数，则永远错过 若c-1为偶数，则可以追上
#include"List.h";
LTNode* ListInit()//初始化
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
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));//建立新节点
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
void ListPushBack(LTNode* phead, LTDataType X)//尾插
{
	assert(phead);
	//LTNode* newnode = BuyNewnode(X);
	//LTNode* tail = phead->prev;
	//tail->next = newnode;
	//newnode->next = phead;
	//newnode->prev = tail;
	//phead->prev = newnode;
	 ListInsert( phead, X);//在哨兵位之前插入等于尾插
}

void Listprint(LTNode* phead)//打印
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

void ListPushFront(LTNode* phead, LTDataType X)//头插
{
	assert(phead);
	//LTNode* newnode = BuyNewnode(X);
	////建立临时节点记录phead下一个指针可不注意顺序
	//phead->next->prev = newnode;
	//newnode->next = phead->next;
	//newnode->prev = phead;
	//phead->next = newnode;
	ListInsert(phead->next, X);
}
void ListPopBack(LTNode* phead)//尾删
{
	assert(phead);
	//assert(! ListEmpty(phead));
	//LTNode* cur = phead->prev;
	//phead->prev = phead->prev->prev;
	//phead->prev->next = phead;
	//free(cur);
	//cur = NULL;
	ListEarse(phead->prev);//删除phead的前一个为尾删
}
void ListPopFront(LTNode* phead)//头删
{
	assert(phead);
	//assert(!ListEmpty(phead));
	//LTNode* cur = phead->next;
	//phead->next = phead->next->next;
	//phead->next->prev = phead;
	//free(cur);
	//cur= NULL;
	ListEarse(phead->next);//删除phead的下一个位头删
}
bool ListEmpty(LTNode* phead)
{
	assert(phead);

	/*if (phead->next == phead)
		return true;
	else
		return false;*/

	return phead->next == phead;
}
size_t ListSize(LTNode* phead)//记录个数
{
	assert(phead);
	size_t n = 0;
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		++n;
		cur = cur->next;
	}
	return n;
	printf("\n");
 }

LTNode* ListFind(LTNode* phead, LTDataType X)//寻找
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == X)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void ListInsert(LTNode*pos,LTDataType X)//在po之前插入
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* newnode = BuyNewnode(X);
	pos->prev = newnode;
	newnode->next = pos;
	newnode->prev = prev;
	prev->next = newnode;
}

void ListEarse(LTNode* pos)//删除pos
{
	assert(pos);
	LTNode* cur = pos->prev;
	LTNode* tail = pos->next;
	cur->next = tail;
	tail->prev = cur;
	free(pos);
//	pos = NULL;
}
//可以设置二级指针直接把phead置空；建议：使用一级指针，保持接口一致性，让ListDestory的人置空
void ListDestory(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}