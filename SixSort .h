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
	HPDatatype* a;//���͵�ָ��-ָ�빹������
	int size;//����
	int capacity;//����
}HP;
void PrintfArry(int* a, int n);//��ӡ����

void InsertSort(int* a, int n);//��������
//
void HeapSort(int* a, int n);//������

void ShellSort(int* a, int n);//ϣ������

void SelectSort(int* a, int n);// ѡ������

void BubbleSort(int* a, int n);//ð������

void QuickSort(int* a, int begin,int end);//��������

void QuickSortNonR(int* a, int begin, int end);//�ǵݹ�ʵ�ֿ�������ջʵ�֣�