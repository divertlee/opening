#include<stdio.h>
//#include<stdio.h>
//int main()
//{
//    float r;
//    double v;//float(С���������λ�������ĸ��ֽڣ���v��7λ������Ҫ��double��С������泬��15λ����
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
//    bmi = t / (((float)s / 100) * ((float)s / 100));//��ǿ��ת�����㷨
//    printf("%.2f", bmi);
//    return 0;
//}
//swich��n�����
////n������int char long (not to float)
//{//case���ö�����ͻ�����������
//default���Է����⴦����÷����
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