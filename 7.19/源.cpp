//#include<stdio.h>
//#include<math.h>
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
//32λϵͳ���κ�����ָ��ĳ��ȶ���4���ֽ�
//a*b+c-d=(double) e;
//int a;char b;float c;double d
//���ӣ�


//쳲��������У�Fibonacci sequence�����ֳƻƽ�ָ����У�ָ��������һ�����У�0��1��1��2��3��5��8��13��21��34����... 
// дһ������������ n ����쳲�������Fibonacci�����еĵ� n ��� F(N)����쳲��������еĶ������£�
//F(0) = 0, F(1) = 1
//F(N) = F(N - 1) + F(N - 2), ���� N > 1.
//쳲����������� 0 �� 1 ��ʼ��֮���쳲�������������֮ǰ��������Ӷ��ó���
//����Ҫȡģ 1e9 + 7��1000000007����������ʼ���Ϊ��1000000008���뷵�� 1��
