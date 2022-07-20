#include<Stdio.h>
//打印100-200的素数
//int main()
//{
//	int i= 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 100; i < 200; i++)
//	{
//		for (j = 2; j < i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//			}
//			if (flag == 1)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int is_p(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//		
//			return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf_s("%d", &i);
//	for (n = 1; n < i; n++)//遍历n之前的数
//	{
//		if (is_p(n))
//		{
//			printf("%d ", n);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int i;
//	int j;
//	int flag = 1;
//	for (i = 2; i <= 100; i++)
//	{
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d\n", i);
//		}
//		flag = 1;
//	}
//	return 0;
//}
//int main()//设置一个函数-是素数返回1（打印）；不是就返回0
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 100; i < 200; i++)//遍历100-200的数
//	{
//		for (j = 2; j < i / 2; j++)//判断是不是素数
//		{
//			if (i % j == 0)//一旦整除-不是素数-直接退出
//			{
//				flag = 0;
//				break;
//			}
//		}
//			if (flag == 1)
//			{
//				printf("%d ",i);
//			}
//			flag = 1;//继续用1
//		}
//	
//	return 0;
//}
//打印-100之间所有的3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)//遍历-1-100的数
//	{
//		if (i % 3 == 0)//判断是不是3的倍数
//		{
//			printf("%d ", i);
//		}
//	}
//}
//打印1000-2000之间的闰年
//int main()
//{
//	int n = 0;
//	for (n = 1000; n <=2000; n++)//遍历1000-2000
//	{
//		if(n%4==0 && n%100!=0 )//判断是不是润年
//		{
//			printf("%d ", n);
//		}
//		
//		if (n % 400 == 0)//判断是不是润年
//		{
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)//(a,b)a->1
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//
//
//	}
//
//	if (a < c)//(a,c)a->1
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//
//	if (b<c)//(b,c)b->1
//	{
//		tmp = b;
//		b=c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()//转义字符->/"
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;");
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//求最大公约数和最小公倍数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d%d", &n, &m);


	//第一种方法（暴力）
	// 	//int min = n < m ? n : m;//求最小-最大公约数
	//int max = n > m ? n : m;//求最大-最小公倍数
	//int i = min;
	//int j = max;
	//while (1)
	//{
	//	if (n % i == 0 && m % i == 0)//两个数能把最大公约数除尽时
	//	{
	//		break;//求出最大公约数跳出while循环
	//	}
	//	i--;//i最大公约数
	//}
	//while (1)
	//{
	//	if (j % n == 0 && j % m == 0)//最小公倍数能被两个数整除时
	//	{
	//		break;//求出最小公倍数跳出while循环
	//	}
	//	j++;//j最小公倍数
	//}
	//printf("%d%d", i, j);//打印最大公约数和最小公倍数
		//第二种方法-辗转相除法-求最大公约数
	/*int i = n;
	int j = m;
	int r = 0;
	while (r = i % j)
	{
		i = j;
		j = r;
	}*/
	//int min = j;//到这时j为最大公约数
	//int max = n * m / j;//最小公倍数为两数相乘除以最大公约数
	//printf("%d %d", min, max);//打印最大公约数和最小公倍数
//	return 0;
//}
//打印空心正方形
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) == 1)//如果输入的是一个整数则进循环
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)//在第一/最后（行\列）打印
//				{
//					printf("* ");
//				}
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
// }
//int main()
//{
//	int a = 0;
//	int b = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum;
//	for (a = 1; a < 100;a+= 2)//先算奇数集和
//	{
//		sum1=sum1+1.0/ a;//1.0(后不加.0会损失精度-导致算术错误）
//}
//	for (b = 2; b < 101;b+=2)//再算偶数集和
//	{
//		sum2 = sum2 + 1.0 / b;
//	}
//	 sum = sum1 - sum2;//算总数集和
//	printf("%f", sum);
//	return 0;
//}
//int main()//十个数里面找最大值
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//
//}
//int main()//有序数列查找某数（暴力查找）
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 11;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == a)
//		{
//		
//			return	printf("找到了，下标为%d\n", i);;
//		}
//
//}
//	printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;//最左边下标
//	int right = k-1;//最右边下标
//	int n = 4;//要找的数
//	while (left <=right)
//	{
//		int mid = left + right / 2;//中间元素下标
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n < arr[mid])
//		{
//			right = mid-1 ;
//		}
//
//		else
//		{
//			return printf("找到了,下标为%d", mid);//n不在左边也不在右边即找到了
//		}
//	}
//	printf("没找到\n");
//
//	return 0;
//}
//int main()//1-100有多少个9
//{
//	int n = 0;
//	int i = 0;
//	for (n = 1; n < 100; n++)
//	{
//		if (n % 10 == 9 ||n%90==9)
//		{
//			i++;
//		}
//
//	}
//	printf("%d", i);
//	return 0;
//}
int main()//打印9*9乘法口诀表
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%2d*%2d=%2d ",i,j ,i * j);
			
		}
		printf("\n");
	}
	return 0;
}