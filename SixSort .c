#include "sort.h"
#include"Stack.h"
//
 void PrintfArry(int* a, int n)//��ӡ
{
	 for (int i = 0; i < n; ++i)
	 {
		 printf("%d ", a[i]);
}
	 printf("\n");
}
//
//
// //ֱ�Ӳ�������
//// �ʱ�临�Ӷ�O(N^2)-����
void InsertSort(int* a, int n)
{
	// [0,end] ���� end+1 [0, end+1]����
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}

		a[end + 1] = tmp;
	}
}
//
//// ������
 void swap(HPDatatype* x, HPDatatype* y)//����
 {
	 HPDatatype tmp = *x;
	 *x = *y;
	 *y = tmp;
 }

// void Adjustup(HPDatatype* a, int child)//���ϵ���
// {
//	 int parent = (child - 1) / 2;
//	 while (child > 0)
//	 {
//		 if (a[child] > a[parent])
//		 {
//			 swap(&a[child], &a[parent]);
//			 child = parent;
//			 int parent = (child - 1) / 2;
//		 }
//		 else
//		 {
//			 break;
//		 }
//	 }
//
// }
//
 void Adjustdown(HPDatatype* a, int n, int parent)//���µ���-O(logN)
 {
	 int minchild = 2 * parent + 1;
	 while (minchild < n)
	 {
		 if (minchild + 1 < n && a[minchild + 1] > a[minchild])
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
//
//
//
// //���һ���źõĵ�������N/2*logN �ܣ�O(N*logN)
 void HeapSort(int* a, int n)//�ռ临�Ӷ�O(N��
 {
	 //����-���
	 //����-С��
	 //1.���ҵ����һ���ڵ㣬Ȼ���ҵ����ĸ���a����a�ڵĶѣ����򣩣�ͨ�����µ����Ѹöѵ���Ϊ���򣨴�ѻ�С�ѣ�
	 //2. ͨ�� i-- �ҵ�����a��ǰһ���ڵ�b��Ҳ������һ���ѵĸ���-b����Ȼ���ڸ���b���ڵĶѣ��������µ���Ϊ����
	  //3.������������������-��������Ѷ����򣨴�ѻ�С�ѣ�
	 for (int i = (n - 1-1) / 2; i >= 0; --i)//n-1Ϊ���һ���ڵ���±꣬���һ���ڵ�ĸ����±꣺�����һ���ڵ���±�-1��/2
	 {
		 Adjustdown(a, n, i);
	 }
	 int i = 1;
	 while (i < n)
	 {
		 swap(&a[0], &a[n - i]);//�����ķ����Ȼ�������ţ�����������ͷ�嵽���棬�ţ�n-1��������ų�����
		 Adjustdown(a, n - i, 0);
		 ++i;
	 }
 }
//
//
// //ϣ������-
////1.Ԥ����-�ӽ�����-���Ϊgap�����ݷ�Ϊһ�飬��������
////2.ֱ�Ӳ�������
// //O(N^1.3)
 void ShellSort(int* a, int n)
 {
	 int gap = n;
	 while (gap > 1)
	 {
		 gap = gap / 3 + 1;

		 for (int i = 0; i < n - gap; i++)
		 {
			 int end = i;
			 int tmp = a[end + gap];
			 while (end >= 0)
			 {
				 if (a[end] > tmp)
				 {
					 a[end + gap] = a[end];
					 end -= gap;
				 }

				 else
				 {
					 break;
				 }
			 }
			 a[end + gap] = tmp;
		 }
	 }
 }
//
// //gapԽ��ֱ�Ӳ��������Խ�죬��������ô����
// //gapԽС��ֱ�Ӳ��������Խ��������������
//
//
//
 void SelectSort(int* a, int n)//ѡ������-O��N*2)
 {
	 int begin = 0;
	 int end = n - 1;
	 //ѡ����С�ķ�beginλ��
	//ѡ�����ķ�endλ��
	
	 while (begin < end)
	 {
		 int minii = begin;
		 int maxi = begin;
		 for (int i = begin + 1; i <= end; ++i)//1.ѡ������������С����
		 {
			 if (a[i] > a[maxi])
			 {
				 maxi = i;
			 }
			 if (a[i] < a[minii])
			 {
				 minii = i;
			 }
		 }
		 swap(&a[begin], &a[minii]);//��С��������beginλ��
		 if (maxi == begin)//���һ��ʼ����������beginλ���������жϸ���bug
		 {
			 maxi = minii;
		 }
		 swap(&a[end], &a[maxi]);//����������2endλ��
		 ++begin;
		 --end;
	 }
 }
// ð������
// //ʱ�临�Ӷ�-���O��N^2)) ��ã�O(N))
// //����-�����ķ����
// //����-����С�ķ����
// //1.��һ��
 void BubbleSort(int* a, int n)
 {
	 for (int j = 0; j < n; j++)
	 {
		 int exchange = 0;
		 for (int i = 1; i < n-j; i++)
		 {
			 if (a[i - 1] > a[i])
			 {
				 swap(&a[i - 1], &a[i]);
				 exchange = 1;
			 }
		 }
		 if (exchange == 0)
		 {
			 break;
		 }
	 }
 }
 
 //��������
 //Ҫôʣ��һ��Ҫô��������ֹͣ����
 //ʱ�临�Ӷȣ�
 //����O(N*logN)
 //����O(N*N)

 int Getmidindex(int* a, int left, int right)//����ȡ��
 {
	 int mid = left + (right - left) / 2;
	 if (a[left] < a[mid])
	 {
		 if (a[mid] < a[right])
		 {
			 return mid;
		 }
		 else if (a[left] > a[right])
		 {
			 return left;
		 }
		 else
		 {
			 return right;
		 }
	 }
	 else // a[left] >= a[mid]
	 {
		 if (a[mid] > a[right])
		 {
			 return mid;
		 }
		 else if (a[left] < a[right])
		 {
			 return left;
		 }
		 else
		 {
			 return right;
		 }
	 }
 }

 void QuickSortNonR(int* a, int begin, int end)//ջʵ�ֿ�������
 {
	 ST st;
	 StackInit(&st);
	 StackPush(&st, begin);
	 StackPush(&st, end);
	 while (!StackEmpty(&st))
	 {
		 int right = StackTop(&st);
		 StackPop(&st);
		 int left = StackTop(&st);
		 StackPop(&st);
		 int keyi = PartSort3(a, left, right);
		 //[left,keyi-1]  keyi [keyi+1,right]
		 if (keyi + 1 < right)
		 {
			 StackPush(&st,keyi+1);
			 StackPush(&st, right);
		 }

		 if (left < keyi - 1)
		 {
			 StackPush(&st, left);
			 StackPush(&st, keyi - 1);
		 }

	 }
	 StackDestory(&st);
 }
 int PartSort3(int* a, int left, int right)//ǰ��ָ�뷨
 {

	 int mid = Getmidindex(a, left, right);
	 swap(&a[mid], &a[left]);
	 int keyi =left;
	 int prev = left;
	 int cur = left+1;
	 while (cur<=right)
	 {//cur�ұ�key���ֵ֮���С
		 if (a[cur] < a[keyi] && ++prev != cur)
			 swap(&a[cur], &a[prev]);
		 ++cur;
	 }
	 swap(&a[keyi], &a[prev]);
	 return prev;
 }

 int PartSort2(int* a, int left, int right)//�ڿӷ�
 {

	 int mid = Getmidindex(a, left, right);
	 swap(&a[mid], &a[left]);
	 int key = a[left];
	 int hole = left;
	 while (left < right)
	 {//һ��ʼleftΪhole
		 //R��С,�ҵ�С��Ͱ�ֵ�hole���ڵĿӣ������Ϊhole
		 while (left < right && a[right] >= key)
		 {
			 --right;
		 }
		
		 a[hole] = a[right];
		 hole = right;

		 //L�Ҵ��ҵ����Ͱ�ֵ�hole���ڵĿӣ������Ϊhole
		 while (left < right && a[left] <= key)
		 {
			 ++left;
		 }
         a[hole] = a[left];
		 hole = left;
	 }
	
	 a[hole] = key;
	 return hole;
 }
 int PartSort(int* a, int left, int right)//��������
 {
	 int mid = Getmidindex(a, left, right);
	 swap(&a[mid], &a[left]);
	 int keyi = left;
	 while (left < right)
	 {
		 //R��С
		 while (left < right && a[right] >= a[keyi])
		 {
			--right;
		 }
			 //L�Ҵ�
		 while(left < right && a[left] <= a[keyi])
		 {
			++left;
		 }

		 if (left < right)
			 swap(&a[left], &a[right]);
	 }
	 int meeti = left;
	 swap(&a[keyi], &a[meeti]);
	 return meeti;
 }
 //[begin,end]
 void QuickSort(int* a, int begin, int end)//����-��������-2^3=8�����˸�������ã�
 {

	 if (begin >= end)
	 {
		 return;
	 }
	 if (end - begin <= 8)//С�����Ż�-���һ�ˣ��㣩�õݹ����Ĵ�-ֱ�ӻ���������
	 {
		
		 InsertSort(a + begin, end - begin + 1);
	 }
	 else {
		 //[begin,keyi-1],keyi,[keyi+1,end]
		// int keyi = PartSort(a, begin, end);
	// int keyi = PartSort2(a, begin, end);
	 int keyi = PartSort3(a, begin, end);
		 //[begin,keyi-1]
		// PartSort(a, begin, keyi - 1);
	//	PartSort2(a, begin, keyi - 1);
		PartSort3(a, begin, keyi - 1);
		 //[keyi+1,end]
		 //PartSort(a, keyi + 1, end);
		// PartSort2(a, keyi + 1, end);
		 PartSort3(a, keyi + 1, end);
	 }
 }





