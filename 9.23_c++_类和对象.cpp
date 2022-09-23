#include<iostream>
using namespace std;
#include<stdlib.h>
//Stack的析构函数，需要自己写，my_queue的析构函数不需要自己写
//编译器生成的可以用就不需要自己写
//套用自定义函数（包含析构函数）的函数不需要写析构函数（编译器会调用自定义函数的析构函数）
//size_t=unsigned int-无符号整数

//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		year = _year;
//		month = _month;
//		day = _day;
//	}
//private:
//	int _year=0;
//	int _month=0;
//	int _day=0;
//};
//不传参数的构造函数就是默认构造
// 内置类型：
//需要写析构函数的类，需要写深拷贝的拷贝构造
//不需要写析构函数的类，需要写浅拷贝的拷贝构造
//自定义类型：调用自定义类型的拷贝构造
//int main()
//{
//	Date d1;
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////


//运算和重载

//class Date
//{
//public:
//	Date(int year =1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	bool operator==( const Date& d)
//	{
//		return _year == d._year;
//	}
//	private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//
//int main()
//{
//	Date d1(2002, 11, 28);
//	Date d2(2022, 11, 28);
//	cout << d1.operator==(d2) << endl;
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//class house
//{
//	int find()
//	{
//		return computer;
//	}
//
//	int desk;
//	int TV;
//	int computer;
//};


//class person
//{
//public:
//	int hight;
//	int weight;
//private:
//	int power;
//	long long knowledge;
//	int wealthy;
//};

//类的作用域-类定义了一个新的作用域，类的所有成员都在类的作用域中。在类体外定义成员时，需要使用 :: 

//class people
//{public:
//	int findperson();
//private:
//	int son;
//	int dad;
//	int mother;
//};
////作用域操作符指明成员属于哪个类域。
//int people::findperson()//这里的的findperson（）属于people这个类域
//{
//	return people::mother;
//}


//class home
//{
//public:
//	void findhappy();
//
//private:
//	int desk;
//	char books;
//};
//int main()
//{
//	home youth;
//	int ret = sizeof(youth);
//	cout << "有成员变量:"<<ret << endl;
//	return 0;
//}


//class kong
//{
//public:
//	void find();
//};
//
//class kongk
//{
//
//};
//int main()
//{
//	kong k;
//	kongk kk;
//	int ret = sizeof(k);
//	int rett = sizeof(kk);
//	cout << "单纯一个成员函数：" << ret << endl;
//	cout << "空类：" << rett << endl;
//	return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//	d1.Init(1988, 11, 29);
//	d1.Print();
//	d2.Init(1997, 10, 8);
//	d2.Print();
//	return 0;
//}
//class Date
//{
//public:
//	Date(int year=1, int month=1, int day=1)//构造函数-自动调用
//	{
//		cout << "调用构造函数" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
	//Date()
	//{
	//	cout << "调用重载的构造函数" << endl;
	//	_year = 1;
	//	_month = 1;
	//	_day = 1;
	//}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	
//	Date d3;
//	d3.Print();
//	Date d1(1998, 7, 6);
//	d1.Print();
//	return 0;
//}


//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2;
//	d1.Init(2022, 9, 23);
//	d2.Init(2022, 1, 11);
//	d1.Print();
//	d2.Print();
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Date
{
public:
	Date(int year=1, int month=1, int day=1)//构造函数-自动调用
	{
		cout << "调用构造函数" << endl;
		_year = year;
		_month = month;
		_day = day;
	}
	~Date()
	{
		cout << "自动调用析构函数" << endl;
		_year = 0;
		_month = 0;
		_day = 0;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{	
	Date d3;
	d3.Print();
	Date d1(1998, 7, 6);
	d1.Print();
	return 0;
}