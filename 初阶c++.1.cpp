#include<stdio.h>
#include<stdlib.h>
#include"Stack.h"
#include"Queue.h"
//һ�㣺�ֲ�����ԭ��-
//int a = 10;
//int main()
//{
//	int a = 20;
//	printf("%d\n", a);//20
//	//::�������޶���
//	printf("%d\n", ::a);//10	
//	return 0;
//}

//�ֲ������ں�����-��������Ҫ����ջ֡-�������Ҫ����ջ֡-�ֲ������Ҳ���

//�������ռ��򣩣����������������ռ���Ϊ�ո�ʱ-Ϊȫ����
//namespace baby
//{
//	char name[]="xiaoxinxin";
//	int age = 18;
//}
//namespace baby
//{
//	int a = 20;
//	namespace babe
//	{
//		int c = 50;
//	}
//}
//
//int main()
//{
//	printf("baby:: a is %d\n", baby::a);
//	printf("baby::babe::c is %d\n", baby::babe::c);
//	return 0;
//}

//��Ӱ������������ڣ�ֻ���޶��򣬱�����ҹ���
//Ĭ�ϲ��ҹ������ھֲ��ң���ȫ����
//�ֲ�����-ջ֡�ϣ�ȫ�ֱ���-��̬���ϣ�malloc-�ڶ���
//namespace bit
//{
//	int rand = 90;
//	int k = 19;
//
//}
//
//int main()
//{
//	printf("%d\n", rand);
//	printf("%d\n", bit::rand);
//	return 0;
//}


//namespace bit {
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}

//int main()
//{
//	printf("%d\n", bit::Add(2, 3));
//	struct bit::Node cur;
//	return 0;
//}
//�����ռ����Ƕ�ף�ͬ����ͬһ������������ݿ��Ա��ϲ�����ͬ������ͬ�����򲻻ᱻ�ϲ�
//namespace N1 {
//	int a = 10;
//	namespace N1 {
//		int b = 90;
//	}
//}
//int main()
//{
//	printf("%d\n", N1::a);
//	printf("%d\n",N1:: N1::b);
//	return 0;
//}

//namespace N1 {
//	int a = 10;
//}
//namespace N1 {
//	int b = 110;
//}
//
//int main()
//{
//	printf("%d %d", N1::a, N1::b);
//	return 0;
//}

//#include<iostream>
////using namespace std;//������ǽ���ˣ�������������,���ǻ�������ͻ-�ճ���ϰʹ�ã���Ŀ������
////ָ��չ��-����չ��-�Լ������ʱ��������������
//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "hello" << endl;
//
//	//std::cout << "hello world" << std::endl;
//}

//int main()
//{
//	int a;
//	cout << "����a�ǣ�" << endl;
//	cin >> a;//����
//	cout << "���a��" << a << endl;
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
////cout-����̨
////endl-end line
//int main()
//{//�����Զ�ʶ�����ͣ��Ա�c��printf��scanf
//	//<<-�����������
//	cout << "hello world" << endl;
//	cout << "hello world" << '\n';
//	int a;
//	double b;
//	char c;
//	//>>����ȡ�����
//	cin >> a;
//	cin >> b >> c;
//	cout << a << endl;
//	cout << b << " " <<(int) c << endl;
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//void fun(int a = 10, int b = 20, int c = 90)
//{
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
//
//}
//int main()
//{
//	fun(1);
//	fun(1, 2);
//	return 0;
//}
//ȱʡ���������ں��������Ͷ���ͬʱ����
//ȫȱʡ
//void fun(int a = 10, int b = 20, int c = 80)//ȱʡֵ����ʼ��ֵ0-���򲻴�ֵ��Ϊ��ǰ��ʼ��
//{
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
//}
//
//
//int main()
//{
//	fun();
//	fun(1);
//	fun(1, 2 , 3);
//	//fun(1, , 2);���밴��������˳�򴫣�������
//	return 0;
//}

//��ȱʡ-ֻ�ܴ�����������ȱʡ
//void fun(int a , int b=20 , int c=90)//ȱʡֵ����ʼ��ֵ-���򲻴�ֵ��Ϊ��ǰ��ʼ��
//{
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
//}
//
//
//int main()
//{
//	fun(1,2);
//
//	return 0;
//}


//int main()
//{//ȱʡ���÷�
//	//��֪��Ҫ�����������
//	bit::ST st1;
//	bit::StackInit(&st1);
////֪��Ҫ����100=������
//	bit::ST st2;
//	bit::StackInit(&st2, 100);
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int add(int x, int y)
//{
//	return x + y;
//}
//int add(double x, double y)
//{
//	return x + y;
//}
//int main()
//{
//	cout << "int ���ͣ�" << endl;
//	cout << add(1, 2) << endl;
//	cout << "double ����" << endl;
//	cout << add(1.8, 2.7) << endl;
//	
//}
//�������أ��������������-��ͬһ�������������������������Ƶ�ͬ����������Щͬ���������β��б������������������ͣ�����˳�򣩲�ͬ��
//���������ʵ�ֲ�ͬ�Ĺ�������
//��������
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int add(double x, double y)
//{
//	return x + y;
//}
//
//int main()
//{//�Զ�ʶ������
//	cout << add(1, 2) << endl;
//	cout << add(1.93, 2.22) << endl;
//
//	return 0;
//}
#include<iostream>
//using namespace std;
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int add(double x, double y)
//{
//	return x-y;
//}
//int main()
//{
//	cout << add(5, 3) << endl;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& ra = a;
//	//&ra-a�ı���-����a
//	return 0;
//}
#include<stdio.h>
using namespace std;

int main()
{
	int a = 10;
	cout << "a=" << endl;
	cout << a << endl;
	int& ra = a;
	cout << "ra=" << endl;
	cout << ra << endl;
	printf("a�ĵ�ַ��%p ra�ĵ�ַ��%p",a,ra);
	return 0;
}


