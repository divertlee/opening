#include<iostream>
using namespace std;

//类域
//类-图纸，需要再创建对象

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
//	//不存储有效数据，给一个字节占位，标识对象存在
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;
//
//	return 0;
//}


//隐含的指针this-关键字
//this指针的定义和传递都是编译器的活，我们不能去抢，但是我们可以去用
//const date* p1-保护*p1指向的对象
//date const * p1-保护*p1指向的对象
// date* const p1-保护*p1指针本身

//this指针存在哪？-形参-一般存在栈帧中-（优化）vs编译器通过ecx寄存器传递

//构造函数-完成初始化
//1.函数名与类名相同
//2.无返回值
//3.构造时自动调用

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
//定义人
//class person
//{
//public:
//	//显示基本信息
//	void showPiInf()
//	{
//		cout << _name << "-" << _age << "-" << endl;
//	}
//
//private:
//	char* _name;//姓名
//	int _age;//年龄
//	
//};

#include"person.h"

void showPiInf()
{
	cout << _name << "-" << _age << "-" << endl;
};

