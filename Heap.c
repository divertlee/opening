#include"Heap.h"


void HeapInit(HP* php)//��ʼ��
{
	assert(php);
	php->size = php->capacity = 0;
	php->a = NULL;
}
void HeapDestory(HP* php)//����
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->capacity = php->size = 0; 
}
void HeapPrint(HP* php)//��ӡ
{
	for (int i = 0; i < php->size; ++i)
	{
		printf("%d ", php->a[i]);
		printf("\n");
	}
}
void swap(HPDatatype* x, HPDatatype* y)//����
{
	HPDatatype tmp = *x;
	*x = *y;
	*y = tmp;
}
void Adjustup(HPDatatype* a, int child)//���ϵ���
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			swap(&a[child], &a[parent]);
			child = parent;
			int parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}

}
void HeapPush(HP* php, HPDatatype x)//����
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDatatype* tmp = (HPDatatype*)realloc(php->a,sizeof(HPDatatype) * newcapacity);
		if (tmp==NULL)
		{
			perror("realloc failed");
			exit(-1);
		}
		php->capacity = newcapacity;
		php->a = tmp;
	}
	php->a[php->size] = x;
	php->size++;
	Adjustup(php->a, php->size-1);

}
void Adjustdown(HPDatatype* a, int n,int parent)//���µ���
{
	int minchild = 2 * parent + 1;
	while (minchild < n)
	{
		if (minchild+1<n &&a[minchild + 1] > a[minchild])
		{
			minchild++;
		}
		if (a[minchild] > a[parent])
		{
			swap(&a[minchild], &a[parent]);
			parent = minchild;
			int minchild = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapPop(HP* php)//ɾ��
{
	assert(php);
	assert(!HeapEmpty(php));
	swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	//���µ���
	Adjustdown(php->a, php->size,0);

}
int HeapTop(HP* php)//ȡͷ
{
	assert(php);
	assert(!HeapEmpty(php));
		return php->a[0];
	
}
bool HeapEmpty(HP* php)
{
	return php->size==0;
}
int HeapSize(HP* php)//����
{
	return  php->size;
}