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

LTNode* SLBuynewnode(SLDatetype x);//  �����½ڵ�
void Print(LTNode* phead);//��ӡ����

void SLPushfront(LTNode** pphead,SLDatetype x);//ͷ��

void SLPushback(LTNode** pphead, SLDatetype x);//β��

void SLPopfront(LTNode** pphead);//βɾ
void SLPopback(LTNode** pphead);//ͷɾ

void SLDestroy(LTNode** phead);//���ٺ���

LTNode* SLFind(LTNode* phead,SLDatetype x);//��ѯ����

void SLInsertbefore(LTNode** pphead, LTNode* pos, SLDatetype x);//���뺯��

void SLInsertafter(LTNode** pphead, LTNode* pos, SLDatetype x);//��pos֮�����


void SListEarse(LTNode**pphead,LTNode*pos);//ɾ������