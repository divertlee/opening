#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�ַ�ָ��
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
//	/*char arr[] = "abcdef";*///"abcdef":Ϊ�����ַ���
//	const char* p = "abcdef";
//	//*p = 'e';
//	printf("%s\n", p);
///*	printf("%c", *p);*///%c�����ַ����,*p:ȡarr[]��Ԫ�ص�ַ
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (arr1 == arr2)//�ʵ���arr1arr2��Ԫ�ص�ַ�Ƿ����
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	const char* p1 = "abcdef";
// const	char* p2 = "abcdef";
// if (p1==p2)//p1��p2��ָ�ĵ�ַ���
// {
//	 printf("hehe\n");
// }
// else
// {
//	 printf("haha\n");
// }
//
//	return 0;
//}//ţ��������ָoffer
//ָ������
//int main()
//{
//	int i = 0;
//	int* paar[5] = {0};//�������ָ�������
//	char* paar1[6] = { 0 };//����ַ���ָ�������-ָ������
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
//����ָ��-ָ��
//int main()
//{
//	int *p = NULL;
//	char *pc = NULL;
//
//
//	return 0;
//}
//int* p1[10];//ָ������-����p1��[10]�γ����飬����ָ������int*-���ָ�������
//int(*p1)[10];// ����ָ��-����p1��*����γ�ָ�룬������������-�������ĵ�ַ
//int main()
//{
//	char* arr2[5];
//	char*(*pa)[5]=&arr2;
//	int arr3[5] = { 0 };
//	int (*pb)[5]=&arr3;
//	return 0;
//}
// �������������ʽ
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
//������ָ�����ʽ
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
//int arr[5];-arr��һ�����Ԫ�ص�����
//int* arr[5];-arr��һ�����飬�����������Ԫ�أ�ÿ��Ԫ������Ϊint*����ָ������
//int(*arr)[5];arr��һ��ָ�룬��ָ��ָ����һ�����飬���������Ԫ�أ�ÿ��Ԫ����int��������ָ��
//int(*arr[5])[6];arr��һ�����飬�����������Ԫ�أ�ÿ��Ԫ����ָ�����飬ÿ��������6��Ԫ�أ�ÿ��Ԫ��������int
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
//	int* arr[] = { 0 };//ָ������
//	test3(arr);
//
//
//}
//����ָ��-ָ������ָ��-&�����������������Ǻ����ĵ�ַ-��ź�����ַ��ָ��
//����ָ��-ָ�������ָ��

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
//signal-����������-2������-int ,����ָ�룺�ú���ָ��Ĳ�����int������������void
//signalҲ��һ������ָ��-ָ��Ĳ�����int,����������void
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
//����ָ������
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
//	printf("choose 0-�ӷ���1-������2-�˷� 3-����\n");
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
//������
//void menu()
//{
//		printf("******************************************\n");
//		printf("***choose1-�ӷ���2-������3-�˷���4-����***\n");
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
//void calos(int (*ff)(int, int))//�ص�����
//{
//	
//	int a = 0;
//	int b = 0;
//
//	printf("��������������\n");
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
//		printf("��ѡ��\n");
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
//			printf("ѡ�����\n");
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
//	printf("***choose1-�ӷ���2-������3-�˷���4-����***\n");
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
//	int(*paar[])(int, int) = {0,sum,sub,mul,div};//ת�Ʊ�
//
//
//
//	do {
//		printf("��ѡ�����㣺\n");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("��ѡ���������\n");
//			scanf_s("%d %d", &a, &b);
//			int ret = paar[input](a, b);
//			printf("%d\n", ret);
//			
//		}
//		else if(input==0)
//		{
//			printf("�˳�\n");
//
//		}
//		else 
//		{
//			printf("�������,����������룺 \n");
//		}
//	} while (input);
//		return 0;
//}
// �ص�����
////ָ����ָ�������ָ��
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*parr[4])(int, int);
//	int (*(*pparr)[4])(int ,int)=&parr;//pparr��һ��ָ����ָ�������ָ��
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
//	////ָ������
//	//int*arr[10];
//	////����ָ�� 
//	//int (*pp)[10];
//	////����ָ��
//	//int (*parr)(int, int) = add;
//	///*int sum = (*parr)(3,6);*/
//	///*int sum = parr(3, 6);*/
//	//int sum =add(3, 6);
//	//printf("sum=%d", sum);
//	//����ָ�������
//	int(*parr[10])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*pparr)[10])(int, int)=&parr;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)//��������
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1]) //��Ҫ��������
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
//	for (i = 0; i < sz; i++)//��ӡ����
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//	return 0;
//}
//void*���͵�ָ��-���Խ����������͵ĵ�ַ
//void*���͵�ָ�벻�ܽ��н����õĲ���
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
// printf("%f��%f�η���%f\n", x, y, result);
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
	//��һ������������������ĵ���Ԫ�ص�ַ
	//�ڶ�������-�����������Ԫ�ظ���
	//����������-����������Ԫ�صĴ�С-��λ���ֽ�
	//���ĸ�����-�Ǻ���ָ�룬�Ƚ�Ԫ�����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��


//int main()
//{
//	//sizeof(��������-��������ʾ��������
//	//&������-������-��������ĵ�ַ
//	int a[] = {1,2,3,4};
//	printf("%d\n", sizeof(a));//16-�����ܴ�С
//	printf("%d\n", sizeof(a+0));//4/8-������-��Ԫ�ص�ַ-a+0-������Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));//4-������-��Ԫ�ص�ַ-*a-��Ԫ��
//	printf("%d\n", sizeof(a+1));//4/8-������-��Ԫ�ص�ַ-a+1-�ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4/8-�ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));//ȡ����������ĵ�ַ-��ַ��С-4/8
//	printf("%d\n", sizeof(*&a));//������-�����ܴ�С-16
//	printf("%d\n", sizeof(&a+1));//ȡ����������ĵ�ַ-&a+1-����һ�������ַ�ĵ�ַ-���ǵ�ַ-4/8
//	printf("%d\n", sizeof(&a[0]));//4 /8&a[0]-��һ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(&a[0]+1));//4/8-�ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n", sizeof(arr));//6-����Ĵ�С
//	printf("%d\n", sizeof(arr+0)); //4/8-arr-��Ԫ�ص�ַ-arr+0-��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));//1-arr-��Ԫ�ص�ַ-*arr-��һ��Ԫ�ش�С
//	printf("%d\n", sizeof(arr[1]));//1-�ڶ���Ԫ�ش�С
//	printf("%d\n", sizeof(&arr));//ȡ�����ַ-4/8
//	printf("%d\n", sizeof(&arr+1));//ȡ��ַ-���������ַ�ĵ�ַ-4/8
//	printf("%d\n", sizeof(&arr[0]+1));//�ڶ���Ԫ�ص�ַ-4/8
//
//}
//int main()
//{//strlen-���ַ�������-����\0��ֹͣ
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n", strlen(arr));//���ֵ���ӵ�һ��Ԫ�ؿ�ʼ
//	printf("%d\n", strlen(arr+0));//���ֵ-�ӵ�һ��Ԫ�ؿ�ʼ
//	printf("%d\n", strlen(*arr));//����ȥһ��'a'-'97'�Ƿ����ʿռ�0error
//	printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr+1));//���ֵ-6-�����������һ��Ԫ�ؿ�ʼ
//	printf("%d\n", strlen(&arr[0]+1));//���ֵ-1- �ӵڶ���Ԫ�ؿ�ʼ
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";//-abcdef\0
//	printf("%d\n", sizeof(arr));//7-����Ĵ�С
//	printf("%d\n", sizeof(arr+0));//4/8-��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));//1-��Ԫ�ص�ַ������-��Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[1]));//1-�ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));//4/8-ȡ���ַ����ĵ�ַ-4/8
//	printf("%d\n", sizeof(&arr+1));//4/8-ȡ���ַ�����ַ��һ���ĵ�ַ
//	printf("%d\n", sizeof(&arr[0]+1));//ȡ���ڶ���Ԫ�صĵ�ַ-4/8
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr+0));//6
//	printf("%d\n", strlen(*arr));//errror
//	printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//4/8//����ĵ�ַ
//	printf("%d\n", strlen(&arr+1));//4/8-����һ������ĵ�ַ
//	printf("%d\n", strlen(&arr[0]+1));//4/8-�ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}
//int main()
//{
//
//const	char* p = "abcdef";
//printf("%d\n", sizeof(p));//4/8ָ��ָ��һ����ַ-ָ��
//printf("%d\n", sizeof(p+1));//4/8-ָ��ָ��b�ĵ�ַ
//printf("%d\n", sizeof(p[0]));//1�ַ�a
//printf("%d\n", sizeof(&p));//4/8��ַ
//printf("%d\n", sizeof(&p+1));//4/8��ַ
//printf("%d\n", sizeof(&p[0]+1));//4/8b�ĵ�ַ
//
//	return 0;
//}
//int main()
//{
//
//	const	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6ָ��ָ��a��ַ
//	printf("%d\n", strlen(p + 1));//5-ָ��b�ĵ�ַ
////	printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	//printf("%d\n", strlen(&p));//���ֵ
//	//printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48-ȫ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[0])[0]);//4��һ�е�һ��Ԫ�ش�С
//	printf("%d\n", sizeof(a[0]));//16��һ�еĴ�С
//	printf("%d\n", sizeof(a[0]+1));//4a[0]-��Ԫ�ص�ַ-a[0]+1��һ�еڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(*(a[0]+1)));//4��һ�еڶ���Ԫ�ش�С
//	printf("%d\n", sizeof(a+1));//4a-��Ԫ�ص�ַ����ά�����п�Ϊ��һ�е�ַ-a+1��Ϊ�ڶ��е�ַ
//	printf("%d\n", sizeof(*(a+1)));//16�ڶ��е�ַ��С-�ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));//4 �ڶ��е�ַ
//	printf("%d\n", sizeof(*(&a[0]+1)));//16�ڶ��д�С
//	printf("%d\n", sizeof(*a));//16��һ�д�С
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//&aȡ������������ڴ棬��&a+1��-����һ������
//	int* ptr2 = (int*)((int)a + 1);//��int)a-ǿ��ת��aΪ����-��int)a+1-����һ���ֽڣ����Ƶ�ַ00 00 00 04ת�������Σ�int��a+1��Ϊ4+1=5-00 00 00 05-����һ���ֽ�   
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1]����һ������-4���ֽ�-04000000��*ptr2ȡ����00 00 00 02-С�δ洢-02 00 00 00-2000000
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
