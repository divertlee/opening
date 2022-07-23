//#include<stdio.h>
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//    float r;
//    double v;//float(小数点后面六位数）是四个字节，但v有7位数所以要用double（小数点后面超过15位数）
//    scanf_s("%f", &r);
//    v =(4 * 3.1415926 * r * r * r)/3;
//  
//    printf("%.3f", v);
//    return 0;
//}
//int main()
//{
//    int t = 0;
//    int s = 0;
//    float  bmi = 0;
//    scanf_s("%d %d", &t, &s);
//    bmi = t / (((float)s / 100) * ((float)s / 100));//先强制转换再算法
//    printf("%.2f", bmi);
//    return 0;
//}
//swich（n）语句
////n必须是int char long (not to float)
//{//case后接枚举类型或者整形类型
//default可以放任意处（最好放最后）
//}
//{
//	int a = 0;
//	int b = 0;
//	int tmp;
//	int x;
//	scanf_s("%d %d", &a, &b);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	x = a % b;
//	printf("%d", x);
//	return 0;
//}
//32位系统下任何类型指针的长度都是4个字节
//a*b+c-d=(double) e;
//int a;char b;float c;double d
//链接：


//斐波那契数列（Fibonacci sequence），又称黄金分割数列，指的是这样一个数列：0、1、1、2、3、5、8、13、21、34、…... 
// 写一个函数，输入 n ，求斐波那契（Fibonacci）数列的第 n 项（即 F(N)）。斐波那契数列的定义如下：
//F(0) = 0, F(1) = 1
//F(N) = F(N - 1) + F(N - 2), 其中 N > 1.
//斐波那契数列由 0 和 1 开始，之后的斐波那契数就是由之前的两数相加而得出。
//答案需要取模 1e9 + 7（1000000007），如计算初始结果为：1000000008，请返回 1。
