#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<assert.h>
#include<stdbool.h>
//
//
typedef int HPDatatype;
typedef struct Heap
{
	HPDatatype* a;//类型的指针-指针构建数组
	int size;//数量
	int capacity;//容量
}HP;
void PrintfArry(int* a, int n);//打印函数

void InsertSort(int* a, int n);//插入排序
//
void HeapSort(int* a, int n);//堆排序

void ShellSort(int* a, int n);//希尔排序

void SelectSort(int* a, int n);// 选择排序

void BubbleSort(int* a, int n);//冒泡排序

void QuickSort(int* a, int begin,int end);//快速排序

void QuickSortNonR(int* a, int begin, int end);//非递归实现快速排序（栈实现）