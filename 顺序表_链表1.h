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

LTNode* ListInit();//初始化
void Listprint(LTNode* phead);//打印
void ListPushBack(LTNode* phead, LTDataType X);//尾插
void ListPushFront(LTNode* phead, LTDataType X);//头插
void ListPopBack(LTNode* phead);//尾删
void ListPopFront(LTNode* phead);//头删
bool ListEmpty(LTNode* phead);//防止删空
size_t ListSize(LTNode* phead);//个数
LTNode* ListFind(LTNode* phead, LTDataType X);//寻找指针-在pos之前
void ListInsert(LTNode* phead, LTDataType X);//插入指针-在pos之前
void ListEarse(LTNode* phead);//删除pos
void ListDestory(LTNode* phead);//销毁

