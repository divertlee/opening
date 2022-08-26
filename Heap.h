#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDatatype;
typedef struct Heap
{
	HPDatatype* a;//���͵�ָ��-ָ�빹������
	int size;//����
	int capacity;//����
}HP;
void HeapPrint(HP* php);//��ӡ
void HeapInit(HP* php);//��ʼ��
void HeapDestory(HP* php);//����
void HeapPush(HP* php, HPDatatype x);//����
void HeapPop(HP* php);//ɾ��
int HeapTop(HP* php);//ȡͷ
bool HeapEmpty(HP* php);//����
int HeapSize(HP* php);//����
void Adjustup(HPDatatype* a, int child);//���ϵ���-��������ʱ��
void Adjustdown(HPDatatype* a, int n, int parent);//���µ���-ɾ��
void swap(HPDatatype* x, HPDatatype* y);//��������


