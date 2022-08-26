#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDatatype;
typedef struct Heap
{
	HPDatatype* a;//类型的指针-指针构建数组
	int size;//数量
	int capacity;//容量
}HP;
void HeapPrint(HP* php);//打印
void HeapInit(HP* php);//初始化
void HeapDestory(HP* php);//销毁
void HeapPush(HP* php, HPDatatype x);//插入
void HeapPop(HP* php);//删除
int HeapTop(HP* php);//取头
bool HeapEmpty(HP* php);//验满
int HeapSize(HP* php);//个数
void Adjustup(HPDatatype* a, int child);//向上调整-插入数据时用
void Adjustdown(HPDatatype* a, int n, int parent);//向下调整-删除
void swap(HPDatatype* x, HPDatatype* y);//交换函数


