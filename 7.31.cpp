#include<stdio.h>
//
//int main()//��ӡ���
//{
//    int n = 0;
//    while ((scanf_s("%d", &n)) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == j || (i + j) == (n - 1))
//                {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//              
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//
//	int arr[] = { 1,2,3,4,5 };
//	int* pa = arr;
//	int length = sizeof(arr) / sizeof(arr[0]);
//	for (int a = 0; a < length; a++)
//	{
//		printf("%d", *(pa + a));
//
//	}
//	return 0;
//}

//int main()//����a��aaaaa
//{
//	int a = 0;
//	int sum = 0;
//	int b = 0;
//	scanf_s("%d", &a);
//	b += a * 10;
//	for (int i = 1; i <5; i++)
//	{
//	
//		sum = b + a;
//		b = sum * 10;
//	}
//	printf("%d", sum);
//	return 0;
//}
#include<math.h>
//int countnum(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num /=10;
//		count++;
//	}
//	return count;
//}
//int guessnum(int num)
//{
//	int num1 = num;	
//	int count = countnum(num);//����λ��
//	
//	int total = 0;
//	while (num1)
//	{
//		int d = num1 % 10;//�����λ
//		total += pow(d, count); //��ˮ�ɻ����Ļ�����֤
//			num1=num1 / 10;
//	}
//	return num == total;
//}
//int main()
//{
//	int num = 0;
//	printf("��ӡ0-100000֮���ˮ�ɻ���\n");
//	for (; num <= 100000; num++)
//	{
//		if (guessnum(num))
//		{
//			printf("%d ", num);
//		}
//
//}
//
//	return 0;
//}


//int main()//��ӡɵ����״
//{
//	int i = 0;
//	int n = 0;
//	int count = i;
//	printf("����Ҫ��ӡ�����У�һ�룩��");
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		int k = n-i;
//		while (k)
//		{
//			printf(" ");
//			--k;
//		}
//
//		for (int j = 1; j <= 2*i-1; j++)
//		{
//			printf("*");
//		}
//		count = i;
//		printf("\n");
//		
//	}
//	int c = n;
//	for (count; count>0; count--)
//	{
//	int 	cc = c - 1;
//		while (cc>0 && n-cc>0)
//		{
//
//			printf(" ");
//			cc++;
//		}
//		int j = count- 1;
//		int m = 2 *j - 1;
//		while (m>0)
//		{
//			printf("*");
//			m--;
//		}
//		printf("\n");
//		c--;
//	}
//	
//	
//	return 0;
//}
