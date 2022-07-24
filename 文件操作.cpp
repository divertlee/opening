#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//柔性数组-结构体最后一个元素允许是未知大小的数组，这个叫做柔性数组成员
// struct s
//{
//	int i;
//	int arr[];//柔性数组成员
//};
// struct stu1
//{
//	int i;
//	int arr[0];//柔性数组成员
//};
////柔性数组特点
////1.柔性数组成员前必须至少有一个成员
////2.sizeof计算的内存大小不包括该柔性数组大小
////3. 包含柔性数组成员的结构用malloc（）函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小
//int main()
//{
//	 struct s s1;
//	printf("%d", sizeof(s1));
//	struct S* ps = (struct S*)malloc(sizeof(struct s) + 40);
//	if (ps == NULL)
//	{
//		printf("%d", strerror(errno));
//		return 1;
//	}
//	
//	free(ps);
//
//	return 0;
//}
//struct S
//{
//	int n;
//	int arr[];
//};
//int main()//方法1
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		printf("%d", strerror(errno));
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	struct S* pr = (struct S*)realloc(ps, sizeof(struct S) + 80);//扩容
//	free(ps);
//	ps == NULL;
//	return 0;
//}
////struct A
////{
////	int n;
////	int* arr;
////};
//int main()//方法2
//{
//	struct A*ps = (struct A*)malloc(sizeof(struct A));
//	if (ps == NULL)
//	{
//		printf("%d", strerror(errno));
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if (ps->arr == NULL)
//	{
//		printf("%d", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	int* ptr = (int*)realloc(ps->arr, 80);//扩容
//	free(ps->arr);//释放
//		free(ps);
//		ps = NULL;
//	return 0;
//}
//第一个方法更优：方便内存释放；有利于访问速度，减少内存碎片
//为什么使用文件
//什么是文件
//文件的打开和关闭
//文件的顺序读写
//文件的随机读写
//文本文件和二进制文件
//文件读取结束的判定
//文件缓冲区
//源文件程序后缀.c目标文件（windows环境后缀为.obj),可执行程序（windows环境后缀为.exe)
//文件名：文件路径+文件名主干+文件后缀
//文件指针：FLIE*pf;
// 
//
//#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	FILE* pf1 = fopen("C:\\Users\\86176\\Desktop\\无标题.png", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	if (pf1 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	fclose(pf1);
//	pf1 = NULL;
//	
//	return 0;
//}