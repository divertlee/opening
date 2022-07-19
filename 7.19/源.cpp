#include<stdio.h>
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
int main()
{
	int a = 0;
	int b = 0;
	int tmp;
	int x;
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	x = a % b;
	printf("%d", x);
	return 0;
}