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
//	//隐式类型的转换
//	//Date d1(2022);
//
//
//	//Date d2 = 2022;
// //const	Date& d3 = 2022;
// //Date d4(d1);
// //Date d5 = d1;
//}

//局部变量-局部作用域-栈
//全局变量-全局域
// 类变量-类域
//
//全局static-作用域：局部
//局部static-作用域：全局
// 类static-作用域：类    ||static成员变量：属于类，且类的每个对象共享
// 这三类的生命周期-全局
//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		++N;
//	}
////静态成员函数：没有this指针,只能访问静态成员
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
//	//生命周期是全局的，但作用域是类域
//	static int N;//声明
//};
////定义
//int A::N = 0;
//void F1(A aa)//传值传参-拷贝构造//////引用返回-不构造
//{
//}
//
//A F2()
//{
//	A aa;//调用A的构造函数-构造aa
//	return aa;//返回A类型-拷贝构造一份临时变量返回
//}
//int main()
//{
//A aa1(1);//构造-1
//	//A aa2 = 2;//构造-1
//	//	A aa3 = aa1;//拷贝构造-1
//	
//	//F1(aa1);//拷贝构造-1
//
//	//F2();//构造+拷贝构造-2
//	//cout << A::N << endl;//N为类中公有对象可以这样访问
//	
//	//cout << aa1.N << endl;//N为类中公有对象可以这样访问
//	 
//	// A*ptr=&aa1（nullptr);
//	// cout<<ptr->N<<endl;//N为类中公有对象可以这样访问
//	
//	cout << aa1.GetN() << endl;
////cout << A::GetN() << endl;//类里面GetN()用static修饰成为静态成员函数后不受类域显示（没有this指针）-可以访问类内静态成员
//}


//class floort
//{
//	friend class door;//声明door类函数是floort类函数的友元函数，door类函数可以访问floort类函数的私有成员
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
//		_t._floor = floor;//直接访问floort类的私有成员变量（floor）
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
//	//B天生是A的友元
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
//	cout << sizeof(A) << endl;//4个字节-只有_a的大小 ,B类中_b的大小不沾边
//	A aa;
//		//	B bb;//不可以
//		A::B bb;//可以-访问B必须要通过A
//	return 0;
//}


//class A {
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "调用构造函数 A(int a)" << endl;
//	}
//
//	~A()
//	{
//		cout << "调用析构函数~A()" << endl;
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
//	return A(10);//匿名对象-上面两行合并成这一行
//}
//int main()
//{//有名对象-生命周期局部域-main函数的域-析构函数在main函数末尾时调用
//	//A aa1(1);
//	//A aa2=aa1;
//
//	//匿名对象-生命周期只在这一行-析构函数在这一行结束时调用
////	A();
//
////	A aa3;aa3 = 3;
////	A(3);//匿名对象-上面这行合并成这行
//	return 0;
//}


class A {
public:
	A(int a = 0)//构造函数
		:_a(a)
	{
		cout << "调用构造函数A(int a)" << endl;
	}
	A(const A& aa)
		:_a(aa._a)
	{
		cout << "调用拷贝构造函数A(const A& aa)" << endl;
	}
		A& operator=(const A& aa)
	{
		cout << "调用运算符重载函数A& operator=(const A& aa)" << endl;
		if (this != &aa)
		{
			_a = aa._a;
		}
		return *this;
	}
	~A()
	{
		cout << "调用析构函数~A()" << endl;
	}
private:
	int _a;
};
void f1(A aa)
{}
A f2()//传值返回
{
	A aa;//构造
	return aa;//拷贝构造
}

A  f3()
{
	return A(10);
}
int main()
{
	//A aa1 = 1;//A tmp(1) +A aa1(1)->优化为A aa1(1) ---构造+拷贝构造->构造
	//A aa1;
	//f1(aa1);//这两行是构造+拷贝构造
	//f1(A(1));//构造+拷贝构造->优化：构造

	//f2();//构造+拷贝构造
	A tmp = f2();//构造+拷贝构造+拷贝构造->优化：构造+拷贝构造


	//A tmp1 = f3();//构造+拷贝构造+拷贝构造->优化：构造
	return 0;
}