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
SLTNode* BuyNewNode(SLTDataType X);//�����½ڵ�
void SListPrint(SLTNode* phead);//��ӡ
void SListDestory(SLTNode**phead);//����
void SListPushFront(SLTNode** pphead, SLTDataType X);//ͷ��
void SListPushBack(SLTNode** pphead, SLTDataType X);//β��
void SListPopFront(SLTNode** pphead);//ͷɾ
void SListPopBack(SLTNode** pphead);//βɾ
SLTNode* SListFind(SLTNode* pphead, SLTDataType X);//��ѯ
void SListInsert(SLTNode** pphead,SLTNode*pos, SLTDataType X);//����-��pos֮ǰ����
void SListInsert( SLTNode* pos, SLTDataType X);//����-��pos֮�����
void SListEarse(SLTNode** pphead,SLTNode*pos);//ɾ��-ɾ��pos