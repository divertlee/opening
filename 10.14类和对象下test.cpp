#pragma once
#include<iostream>
using namespace std;
// class Date
//{
//public:
//	Date(int year,int month,int day)
//		:_year(year)
//	{}
//Date& operator=(const Date& d)
//{
//	if (this != &d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	return *this;
//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Test()
//{
//	Date d1 = { 2002,11,28 };
//
//	const Date& d2 = { 2022,10,11 };
//
//	//int i = 1;
//	//double a = i;
//	//const char& b = i;
//
//	//��ʽ���͵�ת��
//	//Date d1(2022);
//
//
//	//Date d2 = 2022;
// //const	Date& d3 = 2022;
// //Date d4(d1);
// //Date d5 = d1;
//}

//�ֲ�����-�ֲ�������-ջ
//ȫ�ֱ���-ȫ����
// �����-����
//
//ȫ��static-�����򣺾ֲ�
//�ֲ�static-������ȫ��
// ��static-��������    ||static��Ա�����������࣬�����ÿ��������
// ���������������-ȫ��
//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		++N;
//	}
////��̬��Ա������û��thisָ��,ֻ�ܷ��ʾ�̬��Ա
//static	int GetN()
//	{
//		return N;
//	}
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		++N;
//	}
//
//private:
//	int _a;
//	//����������ȫ�ֵģ���������������
//	static int N;//����
//};
////����
//int A::N = 0;
//void F1(A aa)//��ֵ����-��������//////���÷���-������
//{
//}
//
//A F2()
//{
//	A aa;//����A�Ĺ��캯��-����aa
//	return aa;//����A����-��������һ����ʱ��������
//}
//int main()
//{
//A aa1(1);//����-1
//	//A aa2 = 2;//����-1
//	//	A aa3 = aa1;//��������-1
//	
//	//F1(aa1);//��������-1
//
//	//F2();//����+��������-2
//	//cout << A::N << endl;//NΪ���й��ж��������������
//	
//	//cout << aa1.N << endl;//NΪ���й��ж��������������
//	 
//	// A*ptr=&aa1��nullptr);
//	// cout<<ptr->N<<endl;//NΪ���й��ж��������������
//	
//	cout << aa1.GetN() << endl;
////cout << A::GetN() << endl;//������GetN()��static���γ�Ϊ��̬��Ա��������������ʾ��û��thisָ�룩-���Է������ھ�̬��Ա
//}


//class floort
//{
//	friend class door;//����door�ຯ����floort�ຯ������Ԫ������door�ຯ�����Է���floort�ຯ����˽�г�Ա
//public:
//	floort (int floor = 1)
//		:_floor(floor)
//	{}
//private:
//	int _floor;
//};
//class door
//{
//public:
//	door(int door = 1)
//		:_door(door)
//	{}
//	void findfloor(int door,int floor)
//	{
//		_t._floor = floor;//ֱ�ӷ���floort���˽�г�Ա������floor��
//		_door = door;
//	}
//private:
//	int _door;
//	floort _t;
//};
//
//
//int main()
//{
//	return 0;
//}


//class A
//{
//public:
//	//B������A����Ԫ
//	class B
//	{
//		int _b;
//	};
//private:
//	int _a;
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;//4���ֽ�-ֻ��_a�Ĵ�С ,B����_b�Ĵ�С��մ��
//	A aa;
//		//	B bb;//������
//		A::B bb;//����-����B����Ҫͨ��A
//	return 0;
//}


//class A {
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "���ù��캯�� A(int a)" << endl;
//	}
//
//	~A()
//	{
//		cout << "������������~A()" << endl;
//	}
//private:
//	int _a;
//};
//class Solution {
//public:
//	int Sum_Solution(int n) {
//		//...
//		return n;
//	}
//};
//
//A F()
//{
//	//A tmp(10);
////	return tmp;
//	return A(10);//��������-�������кϲ�����һ��
//}
//int main()
//{//��������-�������ھֲ���-main��������-����������main����ĩβʱ����
//	//A aa1(1);
//	//A aa2=aa1;
//
//	//��������-��������ֻ����һ��-������������һ�н���ʱ����
////	A();
//
////	A aa3;aa3 = 3;
////	A(3);//��������-�������кϲ�������
//	return 0;
//}


class A {
public:
	A(int a = 0)//���캯��
		:_a(a)
	{
		cout << "���ù��캯��A(int a)" << endl;
	}
	A(const A& aa)
		:_a(aa._a)
	{
		cout << "���ÿ������캯��A(const A& aa)" << endl;
	}
		A& operator=(const A& aa)
	{
		cout << "������������غ���A& operator=(const A& aa)" << endl;
		if (this != &aa)
		{
			_a = aa._a;
		}
		return *this;
	}
	~A()
	{
		cout << "������������~A()" << endl;
	}
private:
	int _a;
};
void f1(A aa)
{}
A f2()//��ֵ����
{
	A aa;//����
	return aa;//��������
}

A  f3()
{
	return A(10);
}
int main()
{
	//A aa1 = 1;//A tmp(1) +A aa1(1)->�Ż�ΪA aa1(1) ---����+��������->����
	//A aa1;
	//f1(aa1);//�������ǹ���+��������
	//f1(A(1));//����+��������->�Ż�������

	//f2();//����+��������
	A tmp = f2();//����+��������+��������->�Ż�������+��������


	//A tmp1 = f3();//����+��������+��������->�Ż�������
	return 0;
}