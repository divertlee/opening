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
	//����-���
	//����-С��
	for (int i= (n - 2) / 2; i>=0; --i)//�����-Ϊ���һ����Ҷ�ӽڵ㣨���һ���ڵ�ĸ��ף�-���������������µ���
	{
		Adjustdown(a, n,i);
	}
	int i = 1;
	while (i < n)
	{
		swap(&a[0], &a[n-i]);//�����ķ����Ȼ�������ţ�����������ͷ�嵽���棬�ţ�n-1��������ų�����
		Adjustdown(a, n - i, 0);
		++i;
	}
}
//void PrintTopk(const char*filename,)
//{
//	//1.����
//	//�����-����С-��1G���Դ��10�ڸ�������
//	//��С��-������-�Ƚ�һ��k���С�ѣ�С������Ȼ��ȶѸ�������͸��Ѹ������������½��ѣ�С����������ʣ�µ�N-k����
//	//����ʣ�µĴ������θ��������С���������õ�������������ʮ����
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
//	PrintTopk(filename,k);//10000��������ѡ����10��
//	return 0;
//}

void PrintTopk(const char* filename, int k)
{
	assert(filename);
	FILE* fout = fopen(filename, "r");//��
	if (fout == NULL)
	{
		perror("fopen fail");
		return;
	}
	int* minheap = (int*)malloc(sizeof(int)*k);//Ϊ��С�Ѵ����ռ�
	if (minheap == NULL)
	{
		perror("malloc failed");
		return;
	}
	for (int i = 0; i < k; i++)//��ȡk������
	{
		fscanf(fout, "%d ", &minheap[i]);
	}
	for (int i = (k - 2) / 2; i >= 0; --i)//��С��
	{
		Adjustdown(minheap, k, i);//���µ���
	}
	//������ȡʣ��N-k����
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
