#include"Heap.h"
#include<time.h>
//int main()
//{
//	/*int a[] = { 55,66,77,34,21,89,45,3,8 };*/
//	HP hp;
//	HeapInit(&hp);
//	HeapPush(&hp, 14);
//	HeapPush(&hp, 5);
//	HeapPush(&hp, 7);
//	HeapPush(&hp, 10);
//	HeapPush(&hp,56);
//	HeapPush(&hp,76);
//	HeapPush(&hp,23);
//	HeapPop(&hp);
//	HeapPrint(&hp);
//	HeapPop(&hp);
//	HeapPrint(&hp);
//	HeapDestory(&hp);
//	/*for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//	while (!HeapEmpty(&hp))
//	{
//		printf("%d ", HeapTop(&hp));
//		HeapPop(&hp);
//	}*/
//	return 0;
//}

void Heapsort(int* a, int n)
{
	//升序-大堆
	//降序-小堆
	for (int i= (n - 2) / 2; i>=0; --i)//建大堆-为最后一个非叶子节点（最后一个节点的父亲）-迭代往根方向向下调整
	{
		Adjustdown(a, n,i);
	}
	int i = 1;
	while (i < n)
	{
		swap(&a[0], &a[n-i]);//把最大的放最后，然后重新排，迭代把最大的头插到后面，排（n-1）次最后排成升序
		Adjustdown(a, n - i, 0);
		++i;
	}
}
//void PrintTopk(const char*filename,)
//{
//	//1.建堆
//	//建大堆-总数小-【1G可以存放10亿个整数】
//	//建小堆-总数大-先建一个k大的小堆（小根），然后比堆根大的数就跟堆根交换，再重新建堆（小根），遍历剩下的N-k个数
//	//既拿剩下的大数依次跟堆里面的小数交换最后得到堆里面是最大的十个数
//	assert(filename);
//	FILE* fout = fopen(filename, "r");
//	if (fout == NULL)
//	{
//		perror("fopen fail");
//		return;
//	}
//	
//}
//int main()
//{
//	//int a[] = { 15, 18, 19, 25, 28, 34, 65, 49, 27, 37 };
//	//Heapsort(a, sizeof(a)/sizeof(int));
//	//for (int i = 0; i < sizeof(a) / sizeof(int); i++)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//	const char* filename = "Data.txt";
//	int N = 10000;
//	int k = 10;
//	PrintTopk(filename,k);//10000个数里面选最大的10个
//	return 0;
//}

void PrintTopk(const char* filename, int k)
{
	assert(filename);
	FILE* fout = fopen(filename, "r");//读
	if (fout == NULL)
	{
		perror("fopen fail");
		return;
	}
	int* minheap = (int*)malloc(sizeof(int)*k);//为建小堆创建空间
	if (minheap == NULL)
	{
		perror("malloc failed");
		return;
	}
	for (int i = 0; i < k; i++)//读取k个数据
	{
		fscanf(fout, "%d ", &minheap[i]);
	}
	for (int i = (k - 2) / 2; i >= 0; --i)//建小堆
	{
		Adjustdown(minheap, k, i);//向下调整
	}
	//继续读取剩下N-k个数
	int val = 0;
	while (fscanf(fout, "%d", &val) != EOF)
	{
		if (val > minheap[0])
		{
			minheap[0] = val;
			Adjustdown(minheap, k, 0);
		}

	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", minheap[i]);
	}
	fclose(fout);
}
void CreateDataFile(const char* filename, int N)
{
	FILE* fin = fopen(filename, "w");
	if (fin == NULL)
	{
		perror("fopen fail");
		return;
	}
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		fprintf(fin, "%d ", rand()%10000);
	}
	fclose(fin);
}
int main()
{
	const char* filename = "Data.txt";
	int N = 10000;
	int k = 10;
	CreateDataFile(filename, N);
	PrintTopk(filename, k);
	return 0;

}
