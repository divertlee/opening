#include<stdio.h>
//int main()
//{
//	int a = 4;
//	char* p = &a;
//	printf("%d", *p);
//		return 0;
//}

//指针解引用--指针意义1
//指针类型决定了指针类型解引用操作时能够访问空间的大小
//int *p 能够访问4个字节
//char*p能够访问1个字节
//double *p 能够访问8个字节
//指针+-整数
//指针类型决定了指针一步走多远--指针意义2
//int *p+1-->4跳过一个整形
// printf("%p",cp+1);
//char *p+1-->1跳过一个字符
//double *p+1-->8


//野指针
//1.指针未初始化
//指针越界访问
//指针指向的空间被释放
//int main()
//{
//	int i = 0;
//	//int a;//未初始化int a =0;
//	//int* p = &a;//局部指针变量会导致初始化地址随机值--野指针
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (i = 0; i < 11; i++)//超出arr内存范围，为野指针
//	{
//		p++;
//	}
//
//	return 0;
//}
//int* cp = NULL;//NULL用来给指针赋值；初始化
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//截断了发生错误；指针用完要初始化;
//	if (pa != NULL)
//	{
//
//	}
//
//
//
//	return 0;
//}
//指针运算：指针+-整数；指针+-指针：得到指针与指针之间中间的元素个数;指针关系运算
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* cp = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz/2; i++)
//	{
//		printf("%d ", *cp);
//		*cp+=2;
//
//	}
//	printf("%d", &arr[9] - &arr[0]);
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//
//
//
//	return 0;
//}
//标准规定：允许指向数组的指针与指向数组最后指针后面的内存指针比较，但不允许与指向数组第一个指针前面那个内存指针比较
//&数组名-数组名取出的是整个数组的地址；sizeof（数组名）-数组名取出的是整个数组的大小
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d ",  *(p + i));
//
//	}
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	int*** pppa = &ppa;//三级指针
//
//	return 0;
//}
//指针数组-数组-存放指针的数组
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	//数组指针-指针
	//整形指针
	//数组指针
	//字符指针
	/*int arr[] = "10";*/
	int* arr2[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", *(arr2[i]));
	}
	return 0;
}