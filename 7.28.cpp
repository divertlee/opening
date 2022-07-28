#include<stdio.h>
//void reverse(int n)//把数按个数打印出来
//{
//	if (n > 9)
//	
//		reverse(n / 10);
//		printf("%d  ", n % 10);
//		
//	
//	
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	reverse(n);
//	return 0;
//}
//int digit(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else {
//		return n * digit(n - 1);
//	}
//}
//
//int main()//递归实现求n的阶乘
//{
//
//	while (1)
//	{
//		printf("请输入要递归阶乘的数：");
//		int n = 0;
//		scanf_s("%d", &n);
//		int ret = digit(n);
//	
//		printf("阶乘为：%d\n", ret);
//	}
//		return 0;
//	

//int main()//非递归实现n的阶乘
//{
//	int n = 0;
//	while (1)
//	{
//		printf("请输入要阶乘的数：");
//		scanf_s("%d", &n);
//		int i = 1;
//		while (n >= 1)
//		{
//			i = i * n;
//			--n;
//		}
//		printf("数的阶乘为%d\n", i);
//	}
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//int main()//非递归实现strlen
//{
//	int a=0;
//	char arr[20] = {"abcdef"};
//	printf("字符串为：");
//	while (arr[a] != '\0')
//	{
//		printf("%c", arr[a]);
//		++a;
//	}
//	printf("\n");
//int ret=	my_strlen(arr);
//printf("字符串长度为%d", ret);
//	return 0;
//}
//int  my_strlen(char* arr)
//{
//	
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	return 0;
//}
//int main()//递归实现strlen
//{
//	int a=0;
//	char arr[20] = {"abcdef"};
//	printf("字符串为：");
//	while (arr[a] != '\0')
//	{
//		printf("%c", arr[a]);
//		++a;
//	}
//	printf("\n");
//
//int ret=	my_strlen(arr);
//printf("字符串长度为%d", ret);
//	return 0;
//}
//int main()
//{
//	char arr[] = {"abcdef"};
//	printf(" 逆序前的字符串：%s\n", arr);
//	int end = (sizeof(arr) / sizeof(arr[0]))-2;
//	int op = 0;
//	char tmp = 0;
//	while (op <= end)
//	{
//		char tmp = arr[op];
//		arr[op] = arr[end];
//		arr[end] = tmp;
//		++op;
//		--end;
//	}
//	printf("逆序后的字符串：%s", arr);
//	return 0;
//
//}
//int digitsum(int n)//输入的数分成一位位数后相加
//{
//	if (n / 10 != 0)
//
//	{
//		return n % 10 + digitsum(n / 10);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = digitsum(n);
//	printf("%d", ret);
//	return 0;
//}
//int digitmax(int n, int k)
//{
//	if (k >= 1)
//	{
//		return n * digitmax(n, k - 1);
//}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("输入数：");
//	scanf_s("%d", &n);
//	int k = 0;
//	printf("输入次方为：");
//	scanf_s("%d", &k);
//	int ret = digitmax(n, k);
//	printf("%d", ret);
//	return 0;
//}
#include<assert.h>



//int main()//非递归实现斐波那契数列
//{
//	while (1)
//	{
//		int n = 0;
//		printf("请输入要输出的第几个斐波那契数列数：");
//		scanf_s("%d", &n);
//		assert(n != 0);
//		int i = 0;
//		int a1 = 0;
//		int a2 = 1;
//		int arr[10] = {0};
//		int a3 = 0;
//		if (n == 1)
//		{
//			printf("数字为：1\n");
//		}
//		else {
//			for (i = 1; i < n; i++)
//			{
//				a3 = a1 + a2;
//				a1 = a2;
//				a2 = a3;
//			}
//
//			printf("数字为:%d\n", a3);
//		}
//	}
//
//	return 0;
//}
//int digit_f(int n)
//{
//	assert(n != 0);
//	if (n == 1)
//	{
//		return 1;
//}
//	else if (n == 2)
//	{
//		return 1;
//	}
//	else	{
//
//    return digit_f(n - 1) + digit_f(n - 2);
//	}
//}
//int main()//递归实现斐波那契数列
//{
//	while (1)
//	{
//		int n = 0;
//		printf("请输入要输出第几个斐波那契数列的数：");
//		scanf_s("%d", &n);
//		int ret = digit_f(n);
//		printf("数字为：%d\n", ret);
//	}
//		return 0;
//}

//int main()//交换数组
//{
//	char arr1[10] = { "abcdefg" };
//	char arr2[10] = { "hijklmn" };
//	printf("arr1=%s arr2=%s\n", arr1, arr2);
//	int n1 = 0;
//	int n2 = 0;
//	while (arr1[n1]!=0 &&arr2[n2]!=0 )
//	{
//		char tmp=arr1[n1];
//		arr1[n1] = arr2[n2];
//		arr2[n2] = tmp;
//		++n1;
//		++n2;
//	}
//	printf("交换后 arr1=%s arr2=%s", arr1, arr2);
//
//	return 0;
//}
void Init(char* arr,int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		arr[i] = 0;
	}
}
int main()//实现数组的逆置
{
	char arr[10] = {0};
	printf("初始化前数组为%s\n", arr);
	int length =( sizeof(arr) / sizeof(arr[0]))-1;
	Init(arr,length);//初始化
	printf("初始化后数组为：%s\n", arr);
	return 0;
}