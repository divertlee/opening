#include<Stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int num = a ^ b;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (num & 1 == 1)
//		{
//			
//			count++;
//		}
//		num=num >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()//打印奇数位和偶数位的二进制
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int b = 1;
//	
//	for (int i = 1; i <= 32; i++)
//	{
//		int c = a & b;
//		if (i % 2 == 1)
//		{
//			printf("奇数位为：%d\n", c);
//		}
//		else
//		{
//			printf("偶数位为：%d\n", c);
//		}
//		a = a >> 1;
//	}
//	return 0;
//}

//int main()//不创建临时变量交换两个数
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a,b);
//	return 0;
//}

//int main()
//{
//    int y = 0;
//    int m = 0;
//    
//    scanf_s("%d %d", &y, &m);
//    if (m == 2)
//    {
//        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//        {
//           printf("29");
//        }
//        else {
//             printf("28");
//        }
//    }
//    else {
//        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//        {
//            return printf("31");
//        }
//        else
//        {
//            return printf("");
//        }
//    }
//    return 0;
//}