#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
typedef int SLDatetype;

typedef struct  ListNode
{
	SLDatetype data;
	struct  ListNode* next;
}LTNode;

LTNode* SLBuynewnode(SLDatetype x);//  创建新节点
void Print(LTNode* phead);//打印函数

void SLPushfront(LTNode** pphead,SLDatetype x);//头插

void SLPushback(LTNode** pphead, SLDatetype x);//尾插

void SLPopfront(LTNode** pphead);//尾删
void SLPopback(LTNode** pphead);//头删

void SLDestroy(LTNode** phead);//销毁函数

LTNode* SLFind(LTNode* phead,SLDatetype x);//查询函数

void SLInsertbefore(LTNode** pphead, LTNode* pos, SLDatetype x);//插入函数

void SLInsertafter(LTNode** pphead, LTNode* pos, SLDatetype x);//在pos之后插入


void SListEarse(LTNode**pphead,LTNode*pos);//删除函数