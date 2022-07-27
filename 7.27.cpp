#pragma once
#include<stdio.h>
//int main()//交换两个数
//{
//	int a = 1;
//	int b = 4;
//	printf("a=%d b=%d\n", a, b);
//
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}
//int main()//乘法口诀表
//{
//	int j = 0;
//	int i = 0;
//	int n = 0;
//	printf("请输入数字:\n");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%2d", j, j, j * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<math.h>
//int main()//100-200-素数
//{
//	int n = 100;
//	int c = 0;
//	for (n = 101; n <= 200; n += 2)
//	{
//		int i = 0;
//		for (i = 2; i <= sqrt(n); i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d ", n);
//				c++;
//
//				break;
//			}
//
//		}
//		if (c == 5)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()//判断润年
//{
//	while (1)
//	{
//		int n = 0;
//		printf("请输入year判断是不是闰年？\nyear:");
//		scanf_s("%d", &n);
//		if (n % 4 == 0 && n % 10 != 0 || n % 100 == 0)
//		{
//			printf("year是润年\n");
//		}
//		else
//		{
//			printf("year不是闰年！\n");
//		}
//	}
//	return 0;
//}