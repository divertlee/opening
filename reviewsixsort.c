#include"sort.h"


void PrintArry(int* a, int n)
{
	
		for (int i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	
}

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}



void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
			}
			else
			{
				break;
			}
			end--;
		}
		a[end + 1] = tmp;

	}
}

void adjustdown(int* a, int n, int parent)
{
	int midchild = parent * 2 + 1;
	
	while (midchild <n)
	{
		if (midchild+1<n && a[midchild + 1] > a[midchild])
		{
			midchild++;
		}
		if (a[midchild] > a[parent])
		{
			swap(&a[midchild], &a[parent]);
			parent = midchild;
			midchild = parent * 2 + 1;
		}
		else
		{
			break;
		}

	}
}

void HeapSort(int* a, int n)//������
{
	//��ͨ�����µ�������
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		adjustdown(a, n,i);
	}
	//Ȼ����һ�����µ��������򡪡����ΰ����ķŶѶ���Ȼ������һ��Ԫ�ػ������½���ѡ���δ�ģ��ٴΡ�������������
	int i = 1;
	while (i < n)
	{
		swap(&a[0], &a[n - i]);
		adjustdown(a, n-i, 0);
		i++;
	}
}


void ShellSort(int* a, int n)//ϣ������
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 2;
		//Ԥ����
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
	
	if(gap==1)
	{
	InsertSort(a, n);
 }
}