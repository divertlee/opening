#include<iostream>
using namespace std;

//����
//��-ͼֽ����Ҫ�ٴ�������

//class Person
//{
//
//};
//
//int main()
//{
//	return 0;
//}
//
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << a << endl;
//	}
////private:
//	char a;
//	int b;
//};
//
//class B
//{
//	void bb()
//	{
//		
//	}
//};
//
//class C {
//
//};
//int main()
//{
//	A st;
//	
//	cout << sizeof(st) << endl;
//	//���洢��Ч���ݣ���һ���ֽ�ռλ����ʶ�������
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;
//
//	return 0;
//}


//������ָ��this-�ؼ���
//thisָ��Ķ���ʹ��ݶ��Ǳ������Ļ���ǲ���ȥ�����������ǿ���ȥ��
//const date* p1-����*p1ָ��Ķ���
//date const * p1-����*p1ָ��Ķ���
// date* const p1-����*p1ָ�뱾��

//thisָ������ģ�-�β�-һ�����ջ֡��-���Ż���vs������ͨ��ecx�Ĵ�������

//���캯��-��ɳ�ʼ��
//1.��������������ͬ
//2.�޷���ֵ
//3.����ʱ�Զ�����

//class Date
//{
//public:
//	 Date(int year=1,int month=1,int day=1)
//	{
//		_year = year;
//		_month = month;
//		_day=day;
//	}
	//Date()
	//{
	//	int year = 1;
	//	int month = 1;
	//	int day = 1;
	//}
//	void Print()
//	{
//		cout << _year <<" " << _month<<" " << _day <<" " << endl;
//	
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//
//int main()
//{
//	Date d1(2002,11,28);
//	d1.Print();
//	Date d2(1998, 29, 10);
//	d2.Print();
//	Date d3;
//	d3.Print();
//	return 0;
//}
//������
//class person
//{
//public:
//	//��ʾ������Ϣ
//	void showPiInf()
//	{
//		cout << _name << "-" << _age << "-" << endl;
//	}
//
//private:
//	char* _name;//����
//	int _age;//����
//	
//};

#include"person.h"

void showPiInf()
{
	cout << _name << "-" << _age << "-" << endl;
};

