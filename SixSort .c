#include "sort.h"
#include"Stack.h"
//
 void PrintfArry(int* a, int n)//打印
{
	 for (int i = 0; i < n; ++i)
	 {
		 printf("%d ", a[i]);
}
	 printf("\n");
}
//
//
// //直接插入排序
//// 最坏时间复杂度O(N^2)-逆序
void InsertSort(int* a, int n)
{
	// [0,end] 插入 end+1 [0, end+1]有序
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
//// 堆排序
 void swap(HPDatatype* x, HPDatatype* y)//交换
 {
	 HPDatatype tmp = *x;
	 *x = *y;
	 *y = tmp;
 }

// void Adjustup(HPDatatype* a, int child)//向上调整
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
 void Adjustdown(HPDatatype* a, int n, int parent)//向下调整-O(logN)
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
// //最后一层排好的调整次数N/2*logN 总：O(N*logN)
 void HeapSort(int* a, int n)//空间复杂度O(N）
 {
	 //升序-大堆
	 //降序-小堆
	 //1.先找到最后一个节点，然后找到他的父亲a，在a在的堆（无序），通过向下调整把该堆调整为有序（大堆或小堆）
	 //2. 通过 i-- 找到父亲a的前一个节点b（也是另外一个堆的父亲-b），然后在父亲b所在的堆（无序）向下调整为有序
	  //3.迭代往根方向往上走-最后整个堆都有序（大堆或小堆）
	 for (int i = (n - 1-1) / 2; i >= 0; --i)//n-1为最后一个节点的下标，最后一个节点的父亲下标：（最后一个节点的下标-1）/2
	 {
		 Adjustdown(a, n, i);
	 }
	 int i = 1;
	 while (i < n)
	 {
		 swap(&a[0], &a[n - i]);//把最大的放最后，然后重新排，迭代把最大的头插到后面，排（n-1）次最后排成升序
		 Adjustdown(a, n - i, 0);
		 ++i;
	 }
 }
//
//
// //希尔排序-
////1.预排序-接近有序-间隔为gap的数据分为一组，插入排序
////2.直接插入排序
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
// //gap越大，直接插入排序就越快，反而不那么有序
// //gap越小，直接插入排序就越慢，反而更有序
//
//
//
 void SelectSort(int* a, int n)//选择排序-O（N*2)
 {
	 int begin = 0;
	 int end = n - 1;
	 //选出最小的放begin位置
	//选出最大的放end位置
	
	 while (begin < end)
	 {
		 int minii = begin;
		 int maxi = begin;
		 for (int i = begin + 1; i <= end; ++i)//1.选出最大的数和最小的数
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
		 swap(&a[begin], &a[minii]);//最小的数放在begin位置
		 if (maxi == begin)//如果一开始最大的数就在begin位置则这样判断更改bug
		 {
			 maxi = minii;
		 }
		 swap(&a[end], &a[maxi]);//最大的数放在2end位置
		 ++begin;
		 --end;
	 }
 }
// 冒泡排序
// //时间复杂度-最坏（O（N^2)) 最好（O(N))
// //升序-把最大的放最后
// //降序-把最小的放最后
// //1.第一轮
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
 
 //快速排序
 //要么剩下一个要么不存在则停止排序
 //时间复杂度：
 //无序O(N*logN)
 //有序O(N*N)

 int Getmidindex(int* a, int left, int right)//三数取中
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

 void QuickSortNonR(int* a, int begin, int end)//栈实现快速排序
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
 int PartSort3(int* a, int left, int right)//前后指针法
 {

	 int mid = Getmidindex(a, left, right);
	 swap(&a[mid], &a[left]);
	 int keyi =left;
	 int prev = left;
	 int cur = left+1;
	 while (cur<=right)
	 {//cur找比key大的值之后的小
		 if (a[cur] < a[keyi] && ++prev != cur)
			 swap(&a[cur], &a[prev]);
		 ++cur;
	 }
	 swap(&a[keyi], &a[prev]);
	 return prev;
 }

 int PartSort2(int* a, int left, int right)//挖坑法
 {

	 int mid = Getmidindex(a, left, right);
	 swap(&a[mid], &a[left]);
	 int key = a[left];
	 int hole = left;
	 while (left < right)
	 {//一开始left为hole
		 //R找小,找到小后就把值填到hole所在的坑，填完就为hole
		 while (left < right && a[right] >= key)
		 {
			 --right;
		 }
		
		 a[hole] = a[right];
		 hole = right;

		 //L找大，找到大后就把值填到hole所在的坑，填完就为hole
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
 int PartSort(int* a, int left, int right)//霍尔排序
 {
	 int mid = Getmidindex(a, left, right);
	 swap(&a[mid], &a[left]);
	 int keyi = left;
	 while (left < right)
	 {
		 //R找小
		 while (left < right && a[right] >= a[keyi])
		 {
			--right;
		 }
			 //L找大
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
 void QuickSort(int* a, int begin, int end)//单趟-三个区间-2^3=8（最多八个数排序好）
 {

	 if (begin >= end)
	 {
		 return;
	 }
	 if (end - begin <= 8)//小区间优化-最后一趟（层）用递归消耗大-直接换插入排序
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





