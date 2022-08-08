#pragma once
#include<Stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;
SLTNode* BuyNewNode(SLTDataType X);//创建新节点
void SListPrint(SLTNode* phead);//打印
void SListDestory(SLTNode**phead);//销毁
void SListPushFront(SLTNode** pphead, SLTDataType X);//头插
void SListPushBack(SLTNode** pphead, SLTDataType X);//尾插
void SListPopFront(SLTNode** pphead);//头删
void SListPopBack(SLTNode** pphead);//尾删
SLTNode* SListFind(SLTNode* pphead, SLTDataType X);//查询
void SListInsert(SLTNode** pphead,SLTNode*pos, SLTDataType X);//插入-在pos之前插入
void SListInsert( SLTNode* pos, SLTDataType X);//插入-在pos之后插入
void SListEarse(SLTNode** pphead,SLTNode*pos);//删除-删除pos