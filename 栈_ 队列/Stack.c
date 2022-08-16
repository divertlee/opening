#include"Stack.h"
//
//void StackInit(ST* ps)
//{
//	assert(ps);
//	ps->a = NULL;
//	ps->capacity = ps->top = 0;
//
//}
//void StackDestory(ST* ps)
//{
//	assert(ps);
//	
//	ps->a = NULL;
//	ps->capacity = ps->top = 0;
//}
//void StackPush(ST* ps,STDataType X)//插入
//{
//	assert(ps);
//	if (ps->top == ps->capacity)
//	{
//		int NewCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		STDataType* tmp = realloc(ps->a, NewCapacity * sizeof(STDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc failed");
//			exit(-1);
//		}
//		ps->capacity = NewCapacity;
//		ps->a = tmp;
//	}
//	ps->a[ps->top] = X;
//	ps->top++;
//
//}
//void StackPop(ST* ps)//删除
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	--ps->top;
//}
//STDataType StackTop(ST* ps)//访问top（top此时为空，则是访问top位置的前一个位置的数据）
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	return ps->a[ps->top - 1];
//}
//bool StackEmpty(ST* ps)//验证栈顶是不是初始位置--0
//{
//	assert(ps);
//	return ps->top == 0;
//}
//int StackSize(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	return ps->top;
//}

//队列

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	pq->size = 0;
}
void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* del = cur;
		cur = cur->next;
		free(del);
	}
	pq->head = pq->tail = NULL;

}
void QueuePush(Queue* pq, QDataType X)
{
	assert(pq);
	 QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	else {
		newnode->next = NULL;
		newnode->data = X;
	}
		if (pq->tail == NULL)
	
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
			pq->tail->next = newnode;
			pq->tail = newnode;
	}
		pq->size++;
}
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* del = pq->head;
		pq->head = pq->head->next;
		free(del);
		del = NULL;
	}
	pq->size--;
}
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->head->data;
}
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->tail->data;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL && pq->tail == NULL;
}
int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}