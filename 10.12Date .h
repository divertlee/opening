//#pragma once
//
//#include<iostream>
//using namespace std;
//class Date
//{
////	//友员声明（任意位置）
////	//流插入
////	friend ostream& operator<<(ostream& cout, const Date& d);
//////流提取
////	friend  istream& operator>>(istream& in,  Date& d);
//		
//	
//public:
//	Date(int year, int month, int day)
//	
//		: _year(year)
//		, _month(month)
//	{
//		_day = day;
//	}
//	//ostream& operator<<(ostream& out, const Date& d)
//	//{
//	//	cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	//}
//
//	int GetTureDay(int year, int month)
//	{
//		static	int monthArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (month == 2 && ((year % 4 == 0 && year & 100 != 0) || (year % 400 == 0)))
//		{
//			return 29;
//		}
//		else
//		{
//			return monthArray[month];
//		}
//	}
//
//	//Date(int year = 1, int month = 1, int day = 1)//构造函数-自动调用
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	~Date()//析构函数
//	{
//		_year = 0;
//		_month = 0;
//		_day = 0;
//	}
//
//	bool operator==(const Date& d)const ;//判断等于
//
//	bool operator>(const Date& d)const ;//判断大于
//	
//	bool operator>=(const Date& d)const //判断大于等于
//	{
//		return *this > d || *this == d;
//	}
//
//	bool operator<(const Date& d)const //判断小于
//	{
//		return !(*this>= d);
//	}
//	bool operator<=(const Date& d)const //判断小于等于
//	{
//		return !(*this > d);
//	}
//		void Print() const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//		Date& operator+=(int day);
//
//		Date operator+(int day)const ;
//	//d1=d2
//	Date& operator=(const Date& d)
////赋值重载-引用返回自定义类型 -可以连续赋值
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		else
//		{
//			return *this;//自己赋值自己
//		}
//	}
//	//天数-=
//	Date& operator-=(int day);
//	//天数-
//	Date operator-(int day) const;
//	//前置++
//	Date& operator++();
//	//后置++
//	Date operator++(int);
//	//前置--
//	Date& operator--();
//	//后置--
//	Date operator--(int);
//	//日期-日期
//	int operator-(const Date& d) const;
//
//	//类里面实现日期的输出
//	//void operator<<(ostream& cout)
////第一个操作参数是this指针（默认的）第二个参数才是插入流cout
//	//{
//	//	cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	//}
//
//	//内联不能使用私有函数-解决办法-一种是用getday()函数；另一种是用友员函数（友员声明）
//
//	//取地址重载-一般情况下不用写 编译器默认生成的就够用-除非是不想让别人取到地址
//
//	Date* operator&()
//	{
//		return nullptr;
//}
//const	Date* operator&() const
//	{
//		return nullptr;
//	}
//
//	//void  operator<<(const ostream& out)	
//	//{
//	//	cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	//}
//	friend ostream& operator<<(ostream& out, const Date& d);//在任意位置都可以
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////ostream& operator<<(ostream& out, const Date& d);
//
//inline ostream& operator<<(ostream& out, const Date& d)
//{
//	cout << d._year << "年" << d._month << "月" << d._day << "日" << endl;
//	return out;
//}
//
////static 修饰全局变量和全局函数是会导致只在当前文件出现（改变链接属性-不进符号表-不链接）
////static void  operator<<(ostream& cout,const Date&d)
//////在.h实现在编译期间会同时在Date.cpp 和Test.cpp展开，在形成Test.O 和Date.o进入符号表重复出现，那么就是重定义拉！
//////第一个操作参数是this指针（默认的）第二个参数才是插入流cout
////{
////	cout << d._year << "年" << d._month << "月" << d._day << "日" << endl;
////}
// //或者像下面那种声明和定义分离
// //ostream&  operator<<(ostream& cout, const Date& d);
////又或者用内联函数，只在.h文件展开，不进符号表
//
//
//
////inline ostream& operator<<(ostream& out, const Date& d)//
////	//第一个操作参数是this指针（默认的）第二个参数才是插入流cout
////{
////
////	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;
////	return out;
////}
////
//////cin>>d1
////inline istream& operator>>(istream& in, Date& d)//
////	//第一个操作参数是this指针（默认的）第二个参数才是插入流cout
////{
////
////	in >> d._year >> d._month >> d._day;
////	return in;
////}
//
//
//
///// <summary>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// </summary>
////class Stack
////{
////public:
////	Stack(int capacity = 4)
////	{
////		cout << "Stack(int capacity = )" <<capacity<<endl;
////
////		_a = (int*)malloc(sizeof(int)*capacity);
////		if (_a == nullptr)
////		{
////			perror("malloc fail");
////			exit(-1);
////		}
////
////		_top = 0;
////		_capacity = capacity;
////	}
////	
////	// st2(st1)
////	Stack(const Stack& st)
////	{
////		cout << "Stack(const Stack& st)" << endl;
////
////		_a = (int*)malloc(sizeof(int)*st._capacity);
////		if (_a == nullptr)
////		{
////			perror("malloc fail");
////			exit(-1);
////		}
////		memcpy(_a, st._a, sizeof(int)*st._top);
////		_top = st._top;
////		_capacity = st._capacity;
////	}
////
////	 //st1 = st2;
////	 //st1 = st1;
////	Stack& operator=(const Stack& st)//赋值重载
////	{
////		//cout << "	Stack& operator=(const Stack& st)" << endl;
////		if (this != &st)
////		{
////			free(_a);
////			_a = (int*)malloc(sizeof(int)*st._capacity);
////			if (_a == nullptr)
////			{
////				perror("malloc fail");
////				exit(-1);
////			}
////			memcpy(_a, st._a, sizeof(int)*st._top);
////			_top = st._top;
////			_capacity = st._capacity;
////			}
////
////		return *this;
////	}
////
////	~Stack()
////	{
////		cout << "~Stack()" << endl;
////
////		free(_a);
////		_a = nullptr;
////		_top = _capacity = 0;
////	}
////
////	void Push(int x)
////	{
////		// ....
////		// 扩容
////		_a[_top++] = x;
////	}
////
////private:
////	int* _a;
////	int _top;
////	int _capacity;
////};
////
////class MyQueue {
////public:
////	void push(int x)
////	{
////		_pushST.Push(x);
////	}
////private:
////	Stack _pushST;
////	Stack _popST;
////	size_t _size = 0;
////};
////int main()
////{
////	MyQueue q;
////	q.push(1);
////	
////
////	/*s.Destroy();*/
////	return 0;
////}