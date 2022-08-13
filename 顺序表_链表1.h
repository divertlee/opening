#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;

} LTNode;

LTNode* ListInit();//��ʼ��
void Listprint(LTNode* phead);//��ӡ
void ListPushBack(LTNode* phead, LTDataType X);//β��
void ListPushFront(LTNode* phead, LTDataType X);//ͷ��
void ListPopBack(LTNode* phead);//βɾ
void ListPopFront(LTNode* phead);//ͷɾ
bool ListEmpty(LTNode* phead);//��ֹɾ��
size_t ListSize(LTNode* phead);//����
LTNode* ListFind(LTNode* phead, LTDataType X);//Ѱ��ָ��-��pos֮ǰ
void ListInsert(LTNode* phead, LTDataType X);//����ָ��-��pos֮ǰ
void ListEarse(LTNode* phead);//ɾ��pos
void ListDestory(LTNode* phead);//����

