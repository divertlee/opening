
#include<stdio.h>
//����

//���ñ����ʼ��-����˵������˭�ı���
//һ��������һ��ʵ�壬�Ͳ�������������ʵ��
//һ�����������ж������
//#include<iostream>
//using namespace std;

//int main()
//{
//	int a = 520;
//	int b = 1314;
//	int& ra = a;//��a�������ã�������ʼ��Ϊra
//	int& rb = a;//��a��һ�����ã�������ʼ��Ϊrb
//	return 0;
//}

//int count1()
//{
//	int n = 10;
//	cout << &n << endl;
//	n++;
//	return n;//����count1ջ֡��n�Ŀռ䲻���ˣ����Դ�ֵ������-��Ҫ�ռ䣩���Ĵ���
//}
//
//int& count2()
//{
//	static int n = 10;
//	cout << &n << endl;
//	n++;
//	return n;//����count2��ջ֡��n�Ŀռ仹�ڣ����Կ����������ҵ����ռ�
//	
//}
//����������
//���ٿ�������ʡ�ռ��ʱ�䣬���Ч��
//�޸ķ���ֵ-����Ͳ������������޸��βΣ�Ҳ�޸�ʵ��

//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a=" << a << " b=" << b << endl;
//	swap(a, b);
//		cout << "������" << endl;
//	cout << "a=" << a << " b=" << b << endl;
//	return 0;
//}
//int main()
//{
//	int ret1 = count1();
//	cout << ret1 << endl;
//	int ret2 = count2();
//	cout << ret2 << endl;
//	return 0;
//}

//const ����



//void fun(const int& x);//const���ÿ��Լ��ٿ��������Ч�ʣ����ı������-���Խ���const�Ͳ�const�Ĳ����������ܸı�Ĳ�������const��
//#include<iostream>
//using namespace std;
//void fun(const int& x);//cosnt������
//int main()
//{
//	
//	int a = 520;//�ɶ��ɸ�
//	int& ra = a;//Ȩ��ƽ�ƣ��ɶ��ɸģ�-����
//	const int& rra = a;//Ȩ����С���ɶ����ɸģ�-����
//	const int b = 150;//���ɶ����ɸģ�
//	//int& rb = b;//Ȩ�޷Ŵ󣨿ɶ��ɸģ�-������
//	const int& rrb = b;//Ȩ��ƽ�ƣ��ɶ����ɸģ�-����
//	fun(a);
//	fun(ra);
//	fun(b);
//	fun(rrb);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//Ȩ�޲���
//	int& ra = a;
//	//ָ������ø�ֵ�У�Ȩ�޿�����С���ǲ��ܷŴ�
//	const int b = 20;
//	//Ȩ�޷Ŵ�-����
//	//int& rb = b;
//	
//	//Ȩ����С-����-rra�����޸�-a�����޸�
//	const int& rra = a;
//	
//	//Ȩ��ƽ��-����
//	const int& rrb = b;
//	fun(a);
//	fun(ra);
//	fun(b);
//	fun(rrb);
//	return 0;
//}


//void fun(const int&(long) x);
//int fun(const int& x)
//{
//	return (double)x;
//}
//
//int main()
//{
//	int a = 10;
//	const int& ra = a;
//	int ret=fun(a);
//	//fun(ra);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int& a = 10;
//	return 0;
//}
//��ʱ�������г���-�����޸�
//#include<iostream>
//using namespace std;
//int add(const int& a = 10)//���ÿ���ȱʡ
//{
//	return a;
//}
//
//int main()
//{
//	cout << "add= " << add() << endl;
//	return 0;
//}
//void fun();



//int main()
//{
//	int a = 13;
//	cout << "a= " << a << endl;
//	double b = 13.14;
//	cout << "b= " << b << endl;
//	int i = (int)b;// ǿת������ת����
//	cout << "i=" << i << endl;
//	//int& t = b;//������
//	const int& k = b;
//	//���ԣ�������156��һ����k���õ������double����b����������int���͵���ʱ����
//	cout << "k= " << k << endl;
//	return 0;
//}



//int main()
//{
//	
//	//cout << add(2) << endl;
//	//int& b = 10;
//	const int& b = 10;//�������ó���
//
//	double d = 13.14;
//
//	int i = (int)d;//����ת��-ϵͳ���double���͵�b������һ��int���͵���ʱ������Ȼ�󸳸�i
//
//	//int& i = d;//������
//	const int& i = d;//���ԣ�������95��һ����k���õ������double����d����������int���͵���ʱ����
//
//	return 0;
//}
//�﷨�ϣ�ra��a�ı����������ռ�
//�ײ�ʵ�֣�������ʹ��ָ��ʵ�ֵ�


//int main()
//{
//	int a = 10;
//	cout << "a=" << a << endl;
//	int& ra = a;
//	cout << "ra=" << ra << endl;
//	int* pa = &a;
//	cout << "pa=" << *pa << endl;
//	return 0;
//}
// 
//int main()
//{
//	int a = 10;
//	int& ra = a;
//	ra = 20;
//	int* pa = &a;
//	*pa = 30;
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	cout << "a=" << a << endl;
	double c = 18.75;
	cout << "c=" << c << endl;
	auto b = a;
	cout << "b=" << b << endl;
	auto d = c;
	cout << "d=" << d << endl;
	return 0;
}
//C++11 С�﷨-�﷨��
//int main()
//{
//	int a = 20;
//	auto b = a;
//	//auto-����a�������ƶ�b������
//	printf("%d %d", a, b);
//	return 0;
//}