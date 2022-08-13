//�ջ�׷��
//fast׷slow��
//���N
//N-2    N-1
//0      1->-1
//��fast��׷��slowΪc-1����cΪȦ�Ĳ�����
//��c-1Ϊ����������Զ��� ��c-1Ϊż���������׷��
#include"List.h";
LTNode* ListInit()//��ʼ��
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
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));//�����½ڵ�
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
void ListPushBack(LTNode* phead, LTDataType X)//β��
{
	assert(phead);
	//LTNode* newnode = BuyNewnode(X);
	//LTNode* tail = phead->prev;
	//tail->next = newnode;
	//newnode->next = phead;
	//newnode->prev = tail;
	//phead->prev = newnode;
	 ListInsert( phead, X);//���ڱ�λ֮ǰ�������β��
}

void Listprint(LTNode* phead)//��ӡ
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

void ListPushFront(LTNode* phead, LTDataType X)//ͷ��
{
	assert(phead);
	//LTNode* newnode = BuyNewnode(X);
	////������ʱ�ڵ��¼phead��һ��ָ��ɲ�ע��˳��
	//phead->next->prev = newnode;
	//newnode->next = phead->next;
	//newnode->prev = phead;
	//phead->next = newnode;
	ListInsert(phead->next, X);
}
void ListPopBack(LTNode* phead)//βɾ
{
	assert(phead);
	//assert(! ListEmpty(phead));
	//LTNode* cur = phead->prev;
	//phead->prev = phead->prev->prev;
	//phead->prev->next = phead;
	//free(cur);
	//cur = NULL;
	ListEarse(phead->prev);//ɾ��phead��ǰһ��Ϊβɾ
}
void ListPopFront(LTNode* phead)//ͷɾ
{
	assert(phead);
	//assert(!ListEmpty(phead));
	//LTNode* cur = phead->next;
	//phead->next = phead->next->next;
	//phead->next->prev = phead;
	//free(cur);
	//cur= NULL;
	ListEarse(phead->next);//ɾ��phead����һ��λͷɾ
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
size_t ListSize(LTNode* phead)//��¼����
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

LTNode* ListFind(LTNode* phead, LTDataType X)//Ѱ��
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

void ListInsert(LTNode*pos,LTDataType X)//��po֮ǰ����
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* newnode = BuyNewnode(X);
	pos->prev = newnode;
	newnode->next = pos;
	newnode->prev = prev;
	prev->next = newnode;
}

void ListEarse(LTNode* pos)//ɾ��pos
{
	assert(pos);
	LTNode* cur = pos->prev;
	LTNode* tail = pos->next;
	cur->next = tail;
	tail->prev = cur;
	free(pos);
//	pos = NULL;
}
//�������ö���ָ��ֱ�Ӱ�phead�ÿգ����飺ʹ��һ��ָ�룬���ֽӿ�һ���ԣ���ListDestory�����ÿ�
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