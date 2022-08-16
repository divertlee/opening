#pragma once
#include<Stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<stdbool.h>
 
//’ª
//typedef int STDataType;
//typedef struct stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void StackInit(ST* ps);
//void StackDestory(ST* ps);
//void StackPush(ST* ps,STDataType X);
//void StackPop(ST* ps); 
//STDataType StackTop(ST* ps);
//bool StackEmpty(ST* ps);
//int StackSize(ST* ps);

//∂”¡–

typedef int  QDataType;
typedef struct  QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;


typedef struct Queue
{
	struct QueueNode* head;
	struct QueueNode* tail;
	int size;
}Queue;

void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
void QueuePush(Queue* pq,QDataType X);
void QueuePop(Queue* pq);
QDataType QueueFront(Queue*pq );
QDataType QueueBack(Queue*pq );
bool QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);


