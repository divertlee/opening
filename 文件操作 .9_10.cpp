#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//开辟动态内存空间出现的问题
// 1.不能直接解引用（不能跳过对指针p的NULL检验）
// 2.对动态开辟空间的越界访问
// //3.对非动态开辟空间的用free释放
//4.使用free释放一部分动态开辟空间-只能空间开头开始释放
// 5.对同一快动态内存连续释放
// 6.动态开辟内存忘记释放（内存泄露）
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;//1.不能直接解引用（不能跳过对指针p的NULL检验）
//	free(p);
//	p = NULL;
//	return 0;
//}
//2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%d", strerror(errno));
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}
//3.对非动态开辟空间的用free释放
//4.使用free释放一部分动态开辟空间-只能空间开头开始释放
//int main()
//{
//	printf("hello world\n");
//
//	return 0;
//}




//柔性数组
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//int main()
//{
//	int sz = sizeof(struct S);//柔性数组并无分配到内存-只有n的内存-4个字节
//	printf("%d ", sz);
//	//柔性数组的使用
//
//
//	return 0;
//}




//文件操作
// 什么是文件-硬盘上的文件
//程序文件：后缀为:源文件.c、 目标文件（windows环境后缀.obj）、可执行文件（windows环境下后缀为.exe）
//数据文件：程序运行需要从中读取数据的文件或者输出内容的文件
//文件名（文件标识）：文件路径+文件名主干+文件后缀
//文件指针FILE
//打开文件时-会在内存创建一个文件信息区-FILE类型-记录文件名，当前状态
#include<errno.h>
//int main()
//{
//	//打开文件
//	FILE*pf= fopen("test.c", "r");//以读的形式打开
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");//'w'写文件-写字符
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打开文件
//
//	//写文件
//	fputc('a', pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//'r'读文件-读字符
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打开文件
//
//	//读文件
//	char ch = getc(pf);
//	printf("%c", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");//'w'写文件-写一行数据
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打开文件
//
//	//写一行数据-当文件原本内有内容-则清除
//	fputs("hello i\n", pf);
//	fputs("hello i", pf);
//	
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//'r'读文件-读一行数据
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	//打开文件
//
//	//读一行数据
//	char arr[20];
//	fgets(arr, 20, pf);//在末尾会放'\0'-遇到\n或者\0会停止
//	printf("%s\n", arr);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	int score;
//};
//int main()
//{
//	struct S s = { "zhangshan",18,200 };
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");//'w'写文件
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	//打开文件
//
//	//写文件
//
//	fprintf(stdout,"%s %d %d", s.name, s.age, s.score);//fprint-所有输出流-stdout-屏幕-直接输出到屏幕-打印到屏幕
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = {0};
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//'r'读文件
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	//打开文件
//
//	//读文件
//
//	fscanf(pf,"%s %d %d ",s.name,&(s.age),&(s.score));
//	printf("%s %d %d", s.name, s.age, s.score);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//任何一个c程序，运行起来默认打开三个流
//stdin(输入流）-键盘
//stdout（输出流）-屏幕
//stderr（错误流）-屏幕

//struct S
//{
//	char name[20];
//	int age;
//	int score;
//};

//int main()
//{
//	struct S s = { "zhangsan",20,180 };
//	//打开文件//以二进制形式写到文件
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//以二进制形式写
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { "zhangsan",20,180 };
//	//打开文件//以二进制形式读到文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//以二进制形式读
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %d", s.name, s.age, s.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//
//sprintf:
//sscanf
//struct S
//{
//	char name[20];
//	int age;
//	int score;
//};
//
//int main()
//{
//struct S s{"zhangsan",18,200 };
//struct S tmp = { 0 };
//char buf[100] = { 0 };
////把s中的格式化数据转化成字符串放到buf中
//sprintf(buf, "%s %d %d", s.name, s.age, s.score);
//
// printf("%s\n", buf);//以字符串格式打印
// //把buf中字符串格式的内容转化为格式化内容放到tmp中
// sscanf(buf, "%s %d %d", tmp.name, &(tmp.age), &(tmp.score));
// printf("%s %d %d", tmp.name, tmp.age, tmp.score);
//	 return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");//读文件
	if (pf == NULL)
	{
		perror("fopen fail");
		return 1;
	}
	
	//读文件
	//定位文件指针
	fseek(pf, 2, SEEK_SET);//SEEK_SET-从开头读-读完文件指针指向下一个
	char ch = fgetc(pf);
	printf("%c\n", ch);//c
	printf("%d\n", ftell(pf));//字符偏移量-abcdefg-3-文件指针从a开始-一开始偏移量为1
	fseek(pf, 2, SEEK_CUR);//SEEK_CUR-从现在的地方读-读完文件指针指向下一个
	char cu = fgetc(pf);
	printf("%c\n", cu);//f
	printf("%d\n", ftell(pf));//字符偏移量-abcdefg-6-文件指针从a开始-一开始偏移量为1
	fseek(pf, -3, SEEK_END);//SEEK_END-从末尾读-读完文件文件指针停下-不会指向往前一个
	char ca = fgetc(pf);
	printf("%c\n", ca);//e
	printf("%d\n", ftell(pf));//字符偏移量-abcdefg-5-文件指针从\0开始
	rewind(pf);//文件指针回到开头
	char cc = fgetc(pf);
	printf("%c\n", cc);//a


	//关闭文件
	fclose(pf);
	free(pf);
	pf = NULL;
	return 0;
}