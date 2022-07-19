#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//字符指针
//int main()
//{
//	char a[] = "zlx520";
//	char* Do = a;
//	printf("%s\n", a);
//	printf("%s", Do);
//
//	return 0;
//}
//int main()
//{
//	/*char arr[] = "abcdef";*///"abcdef":为常量字符串
//	const char* p = "abcdef";
//	//*p = 'e';
//	printf("%s\n", p);
///*	printf("%c", *p);*///%c：按字符输出,*p:取arr[]首元素地址
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (arr1 == arr2)//问的是arr1arr2首元素地址是否相等
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	const char* p1 = "abcdef";
// const	char* p2 = "abcdef";
// if (p1==p2)//p1与p2所指的地址相等
// {
//	 printf("hehe\n");
// }
// else
// {
//	 printf("haha\n");
// }
//
//	return 0;
//}//牛客网。剑指offer
//指针数组
//int main()
//{
//	int i = 0;
//	int* paar[5] = {0};//存放整形指针的数组
//	char* paar1[6] = { 0 };//存放字符串指针的数组-指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* prr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", *(prr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//数组指针-指针
//int main()
//{
//	int *p = NULL;
//	char *pc = NULL;
//
//
//	return 0;
//}
//int* p1[10];//指针数组-先是p1于[10]形成数组，再是指针类型int*-存放指针的数组
//int(*p1)[10];// 数组指针-先是p1与*结合形成指针，再是数组类型-存放数组的地址
//int main()
//{
//	char* arr2[5];
//	char*(*pa)[5]=&arr2;
//	int arr3[5] = { 0 };
//	int (*pb)[5]=&arr3;
//	return 0;
//}
// 参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//	}
//参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			/*printf("%d ", *(*(p + i) + j));*/
//			printf("%d", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7,} };
//	/*print1(arr,3,5);*/
//	print2(arr, 3, 5);
//
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", arr[i]);
//		printf("%d ", *(p+i));
//		printf("%d ", *(arr+i));
//
//	}
//}
//int arr[5];-arr是一个五个元素的数组
//int* arr[5];-arr是一个数组，该数组有五个元素，每个元素类型为int*，是指针数组
//int(*arr)[5];arr是一个指针，该指针指向了一个数组，数组有五个元素，每个元素是int，是数组指针
//int(*arr[5])[6];arr是一个数组，该数组有五个元素，每个元素是指针数组，每个数组有6个元素，每个元素类型是int
//#include<math.h>
//void main()
//{
//
//	double a, b, c, disc, x1, x2, p, q;
//	scanf_s("a=%f,b=%f,c=%f", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	p = -b / (2 * a);
//	q = sqrt(disc) / (2 * a);
//	x1 = p + q;
//	x2 = p - q;
//	printf("\nx1=%f\nx2=%f\n", x1, x2);
//
//
//}
//int main()
//{
//	int a, b, max;
//	
//	scanf_s("%d %d", &a, &b);
//	 max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	
//	printf("max=%d", max);
//	return 0;
//}
//void test(int arr[]){}
//void test(int* arr) {}
//void test(int arr[10]){}
//void test2(int *arr2){}
//void test2(int* *arr2){}
//int main()
//{
//	int arr[10];
//	test(arr);
//	int* arr2[20];
//	test2(arr2);
//
//	return 0;
//}
//void test(int(*arr)[5]) {}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//void test(int **pat){}
//void test1(int **pat){}
//void test3(int **pat){}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test(&p);
//	int** pp = &p;
//	test1(pp);
//	int* arr[] = { 0 };//指针数组
//	test3(arr);
//
//
//}
//函数指针-指向函数的指针-&函数名、函数名都是函数的地址-存放函数地址的指针
//数组指针-指向数组的指针

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	/*int a = 10;
//	int b = 20;*/
//	/*printf("%p", add);
//	printf("%p", &add);*/
//	int(*pa)(int ,int) = add;
//	printf("%d", (*pa)(2, 3));
//	
//}
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hahaha");
//	return 0;
//}
//signal-函数的声明-2个参数-int ,函数指针：该函数指向的参数是int，返回类型是void
//signal也是一个函数指针-指向的参数是int,返回类型是void
//void (*signal(int, void(*)(int)))(int);
//typedef void(*PFG)(int);
//PFG signal(int, PFG);
//int main()
//{
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int score=0;
//    scanf_s("%d", &score);
//    if (score < 60 && score>0)
//    {
//        printf("E\n");
//    }
//    else if (score>=60 && score<70)
//    {
//        printf("D\n");
//    }
//    else if (score>=70 && score<80)
//    {
//        printf("C\n");
//    }
//    else if (score>=80 && score<90)
//    {
//        printf("B\n");
//    }
//    else if (score>=90)
//    {
//        printf("A\n");
//    }
//    return 0;
//}
//函数指针数组
//int sum(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	printf("choose 0-加法，1-减法，2-乘法 3-除法\n");
//	int (*parr[4])(int, int) = { sum,sub,mul,div };
//	
//	
//	int i = 0;
//	
//	for (i = 0; i < 1; i++)
//	{
//		int o = 0;
//		scanf_s("%d", &o);
//		int a = 0;
//		int b = 0;
//		scanf_s("%d%d", &a,&b);
//		if (o == 0)
//		{
//			printf("%d ", parr[o](a,b));
//
//		}
//		if (o == 1)
//		{
//			printf("%d ", parr[o](a,b));
//

//		}
//		if (o == 2)
//		{
//			printf("%d ", parr[o](a,b));
//
//		}
//		if (o == 3)
//		{
//			printf("%d ", parr[o](a,b));
//
//		}
//}
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src);
//char* (*pf)(char*, const char*);
//char* (*pfarr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
//计算器
//void menu()
//{
//		printf("******************************************\n");
//		printf("***choose1-加法，2-减法，3-乘法，4-除法***\n");
//		printf("******************************************\n");
//}
//int sum(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void calos(int (*ff)(int, int))//回调函数
//{
//	
//	int a = 0;
//	int b = 0;
//
//	printf("请输入两个数：\n");
//	scanf_s("%d%d", &a, &b);
//	printf("%d\n", ff(a, b));
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf_s("%d", &input);
//
//		switch (input)
//		{
//			
//		case 1:
//			calos(sum);
//			break;
//		case 2:
//			calos(sub);
//			break;
//		case 3:
//			calos(mul);
//			break;
//		case 4:
//			calos(div);
//			break;
//		defult:
//			printf("选择错误\n");
//		}
//	} while (input);
//}
//int main()
//{
//	double a, b;
//	char c;
//	printf("input expression:a+(-,*,/)b\n");
//	scanf("%lf %c %lf", &a, &c, &b);
//	switch (c)
//	{
//	case'+':
//
//		printf("%lf\n", a + b);
//		break;
//
//	case'-':
//
//		printf("%lf\n", a - b);
//		break;
//
//	case'*':
//
//		printf("%lf\n", a * b);
//		break;
//
//	case'/':
//
//		printf("%lf\n", a / b);
//		break;
//
//	}
//	return 0;
//}
//void menu()
//{
//	printf("******************************************\n");
//	printf("***choose1-加法，2-减法，3-乘法，4-除法***\n");
//	printf("******************************************\n");
//}
//int sum(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	menu();
//	int a = 0;
//	int b = 0;
//	int input = 0;
//	int(*paar[])(int, int) = {0,sum,sub,mul,div};//转移表
//
//
//
//	do {
//		printf("请选择运算：\n");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请选择操作数：\n");
//			scanf_s("%d %d", &a, &b);
//			int ret = paar[input](a, b);
//			printf("%d\n", ret);
//			
//		}
//		else if(input==0)
//		{
//			printf("退出\n");
//
//		}
//		else 
//		{
//			printf("输入错误,，请从新输入： \n");
//		}
//	} while (input);
//		return 0;
//}
// 回调函数
////指向函数指针数组的指针
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*parr[4])(int, int);
//	int (*(*pparr)[4])(int ,int)=&parr;//pparr是一个指向函数指针数组的指针
//}
//void print(char* str)
//{
//	printf("fuck:%s",str);
//
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("hehe");
//}
//int main()
//{
//	test(print);
//
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	////指针数组
//	//int*arr[10];
//	////数组指针 
//	//int (*pp)[10];
//	////函数指针
//	//int (*parr)(int, int) = add;
//	///*int sum = (*parr)(3,6);*/
//	///*int sum = parr(3, 6);*/
//	//int sum =add(3, 6);
//	//printf("sum=%d", sum);
//	//函数指针的数组
//	int(*parr[10])(int, int);
//	//指向函数指针数组的指针
//	int(*(*pparr)[10])(int, int)=&parr;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)//交换次数
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1]) //需要交换次数
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)//打印次数
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//	return 0;
//}
//void*类型的指针-可以接收任意类型的地址
//void*类型的指针不能进行解引用的操作
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int a = 0;
//	for (a = 0;; a < sz, a++)
//	{
//		printf("%d ", arr[a]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//	return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//void test2()
//{
//	float f[] = {9.0,8.0,7.0,6.0};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]),cmp_float );
//	int  j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f", f[j]);
//	}
//}
//int cmp_stu_age(cosnt void* e1, const void* e2)
//{
//	((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test3()
//{
//	struct stu s[3] = { {"zs",20},{"ls",23},{"ww",24}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, s[0], cmp_stu_age);
//}
//int main()
//{
////	test1();
//	//test2();
//	test3();
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
// double power(double, double);
// double x = 3.0, y = 3.0;
// double result;
// result = power(x, y);
// printf("%f的%f次方是%f\n", x, y, result);
// return 0;
//}
//double power(double a, double b)
//{
// int i;
// double z=1;
// for (i = 0; i < b; i++)
// {
//  z *= a;
// }
// return z;
//}


	/*qsort(s, sz, sizeof([0]), cmp_by_name);*/
	//第一个参数—待排序数组的的首元素地址
	//第二个参数-待排序数组的元素个数
	//第三个参数-待排序数组元素的大小-单位是字节
	//第四个参数-是函数指针，比较元素所用函数的地址-这个函数使用者自己实现


//int main()
//{
//	//sizeof(数组名）-数组名表示整个数组
//	//&数组名-数组名-整个数组的地址
//	int a[] = {1,2,3,4};
//	printf("%d\n", sizeof(a));//16-数组总大小
//	printf("%d\n", sizeof(a+0));//4/8-数组名-首元素地址-a+0-还是首元素地址
//	printf("%d\n", sizeof(*a));//4-数组名-首元素地址-*a-首元素
//	printf("%d\n", sizeof(a+1));//4/8-数组名-首元素地址-a+1-第二个元素的地址
//	printf("%d\n", sizeof(a[1]));//4/8-第二个元素的大小
//	printf("%d\n", sizeof(&a));//取出的是数组的地址-地址大小-4/8
//	printf("%d\n", sizeof(*&a));//数组名-数组总大小-16
//	printf("%d\n", sizeof(&a+1));//取出的是数组的地址-&a+1-跳过一个数组地址的地址-还是地址-4/8
//	printf("%d\n", sizeof(&a[0]));//4 /8&a[0]-第一个元素地址
//	printf("%d\n", sizeof(&a[0]+1));//4/8-第二个元素的地址
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n", sizeof(arr));//6-数组的大小
//	printf("%d\n", sizeof(arr+0)); //4/8-arr-首元素地址-arr+0-首元素地址
//	printf("%d\n", sizeof(*arr));//1-arr-首元素地址-*arr-第一个元素大小
//	printf("%d\n", sizeof(arr[1]));//1-第二个元素大小
//	printf("%d\n", sizeof(&arr));//取数组地址-4/8
//	printf("%d\n", sizeof(&arr+1));//取地址-跳过数组地址的地址-4/8
//	printf("%d\n", sizeof(&arr[0]+1));//第二个元素地址-4/8
//
//}
//int main()
//{//strlen-求字符串长度-遇到\0则停止
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n", strlen(arr));//随机值，从第一个元素开始
//	printf("%d\n", strlen(arr+0));//随机值-从第一个元素开始
//	printf("%d\n", strlen(*arr));//传过去一个'a'-'97'非法访问空间0error
//	printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr+1));//随机值-6-从数组组最后一个元素开始
//	printf("%d\n", strlen(&arr[0]+1));//随机值-1- 从第二个元素开始
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";//-abcdef\0
//	printf("%d\n", sizeof(arr));//7-数组的大小
//	printf("%d\n", sizeof(arr+0));//4/8-首元素地址
//	printf("%d\n", sizeof(*arr));//1-首元素地址解引用-首元素的大小
//	printf("%d\n", sizeof(arr[1]));//1-第二个元素的大小
//	printf("%d\n", sizeof(&arr));//4/8-取出字符串的地址-4/8
//	printf("%d\n", sizeof(&arr+1));//4/8-取出字符串地址后一个的地址
//	printf("%d\n", sizeof(&arr[0]+1));//取出第二个元素的地址-4/8
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr+0));//6
//	printf("%d\n", strlen(*arr));//errror
//	printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//4/8//数组的地址
//	printf("%d\n", strlen(&arr+1));//4/8-跳过一个数组的地址
//	printf("%d\n", strlen(&arr[0]+1));//4/8-第二个元素的地址
//
//	return 0;
//}
//int main()
//{
//
//const	char* p = "abcdef";
//printf("%d\n", sizeof(p));//4/8指针指向一个地址-指针
//printf("%d\n", sizeof(p+1));//4/8-指针指向b的地址
//printf("%d\n", sizeof(p[0]));//1字符a
//printf("%d\n", sizeof(&p));//4/8地址
//printf("%d\n", sizeof(&p+1));//4/8地址
//printf("%d\n", sizeof(&p[0]+1));//4/8b的地址
//
//	return 0;
//}
//int main()
//{
//
//	const	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6指针指向a地址
//	printf("%d\n", strlen(p + 1));//5-指向b的地址
////	printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48-全部元素的大小
//	printf("%d\n", sizeof(a[0])[0]);//4第一行第一列元素大小
//	printf("%d\n", sizeof(a[0]));//16第一行的大小
//	printf("%d\n", sizeof(a[0]+1));//4a[0]-首元素地址-a[0]+1第一行第二个元素地址
//	printf("%d\n", sizeof(*(a[0]+1)));//4第一行第二个元素大小
//	printf("%d\n", sizeof(a+1));//4a-首元素地址，二维数组中看为第一行地址-a+1即为第二行地址
//	printf("%d\n", sizeof(*(a+1)));//16第二行地址大小-字节
//	printf("%d\n", sizeof(&a[0] + 1));//4 第二行地址
//	printf("%d\n", sizeof(*(&a[0]+1)));//16第二行大小
//	printf("%d\n", sizeof(*a));//16第一行大小
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//&a取出整个数组的内存，（&a+1）-跳过一个数组
//	int* ptr2 = (int*)((int)a + 1);//（int)a-强制转换a为整形-（int)a+1-跳过一个字节（类似地址00 00 00 04转换成整形（int）a+1即为4+1=5-00 00 00 05-跳过一个字节   
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1]回跳一个整形-4个字节-04000000、*ptr2取出是00 00 00 02-小段存储-02 00 00 00-2000000
//
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p=a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	char* left = str;
//	
//	int len = strlen(str);
//	char* right = str + len - 1;
//
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	scanf_s("%s", arr);
//	printf("%s\n", arr);
//	reverse(arr);
//	printf("%s\n", arr);
//
//
//	return 0;
//}
