#include"stack.h"
#include<iostream>
using namespace std;
//#define Add(x,y) ((x)+(y))//宏
//
//inline int Add(int x,int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int ret = Add(1, 2);
//	cout << ret << endl;
//
//	return 0;
//}


//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//	cout << typeid(a).name() << endl;//打印改类型的字符串
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//
//	int arry[]={1, 2, 3, 4, 5};
//
//	for (auto& e : arry)
//	{
//		e *= 2;
//	}
//	cout << e <<" ";
//	cout << endl;
//
//	return 0;
//}


//c语言-面向过程
//c++-面向对象

//类的定义-class-类的关键字 classname-类的名字 {类的主体}
//class classname
//{
//
//};
//c++变量和函数在类中 顺序不定-因为都在一个类中（是一个整体）
//c语言的变量和函数是单独的个体，所以要变量在前，函数在后
//class stack
//{public:
//	void Init(int N = 4);
//private:
//	int* a;
//	int top;
//	int capacity;
//};
//访问限定符-公有（pubilc)-类外面可以访问  保护（protected) 私有（private)-两者在类外面都不能访问 三者在类里面都能访问
//权限限定域到下一个限定符或者类的结尾
//struct 默认是 （public-公有） class 默认是（private-默认是私有）
//声明-变量没有开辟空间
//定义-给变量开辟空间

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//
//	int _year;
//	int _month;
//	int _day;
//
//};
//
//int main()
//{
//	Date ::Init(2022, 11, 28);
//	return 0;
//}

//#define Add(x , y) ((x)+(y))
//
//int main()
//{//不能加分号-1
//	if (Add(1, 2))
//		//2.不加（）易出现符号优先级问题
//		Add(1, 2) * 3;//外括号
//	int a = 1; int b = 3;
//	Add(a | b, a & b);
//
//
//}


//inline int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	ADD(3, 5);
//	return 0;
//}


//inline int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//int ret=	ADD(3, 5);
//cout << ret << endl;
//	return 0;
//}

//int main()
//{
//	int x = 25;
//	auto a = x;
//	auto* b = &x;
//	auto c = &x;
//	cout <<"a的类型： " << typeid(a).name() << endl;
//	cout <<"b的类型： " << typeid(b).name() << endl;
//	cout <<"c的类型： " << typeid(c).name() << endl;
//	return 0;
//}

//int main()
//{
//	int arry[] = { 1,2,3,4,5 };
//	for (auto& e : arry)
//	{
//		e *= 2;
//	}
//	for (auto e : arry)
//		cout << e << " ";
//		cout<< endl;
//
//	return 0;
////}
//typedef int STDatatype;
//struct stack
//{//成员函数/方法
//	void Init(size_t capacity)
//	{
//		_arry = (STDatatype*)malloc(sizeof(STDatatype));
//		if (_arry == NULL)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//	
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void push(const STDatatype& data)
//	{
//		//扩容
//		_arry[_size] = data;
//		++_size;
//		
//	}
//
//	STDatatype top()
//	{
//		return _arry[_size - 1];
//	}
//	void Destroy()
//	{
//		free(_arry);
//	_arry = nullptr;
//	_capacity = 0;
//	_size = 0;
//	}
//
//	//成员变量
//	STDatatype* _arry;
//	size_t _capacity;
//	size_t _size;
//
//};
//
//int main()
//{
//	stack st;//类名-对象
//	st.Init(4);
//	st.push(34);
//	cout << st.top() << endl;
//	return 0;
//}


class classname
{
	//成员函数...

	//成员变量...

};
