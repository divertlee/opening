#pragma once

#include<iostream>
using namespace std;
class Date
{
public:

	int GetTureDay(int year, int month)
	{
		static	int monthArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year & 100 != 0) || (year % 400 == 0)))
		{
			return 29;
		}
		else
		{
			return monthArray[month];
		}
	}

	Date(int year = 1, int month = 1, int day = 1)//构造函数-自动调用
	{
		_year = year;
		_month = month;
		_day = day;
	}
	~Date()//析构函数
	{
		_year = 0;
		_month = 0;
		_day = 0;
	}

	bool operator==(const Date& d);//判断等于

	bool operator>(const Date& d);//判断大于
	
	bool operator>=(const Date& d)//判断大于等于
	{
		return *this > d || *this == d;
	}

	bool operator<(const Date& d)//判断小于
	{
		return !(*this>= d);
	}
	bool operator<=(const Date& d) //判断小于等于
	{
		return !(*this > d);
	}
		void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
		Date& operator+=(int day);

		Date operator+(int day);
	//d1=d2
	Date& operator=(const Date& d)
//赋值重载-引用返回自定义类型 -可以连续赋值
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		else
		{
			return *this;//自己赋值自己
		}
	}
	//天数-=
	Date& operator-=(int day);
	//天数-
	Date operator-(int day);
	//前置++
	Date& operator++();
	//后置++
	Date operator++(int);
private:
	int _year;
	int _month;
	int _day;
};



class Stack
{
public:
	Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = )" <<capacity<<endl;

		_a = (int*)malloc(sizeof(int)*capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}

		_top = 0;
		_capacity = capacity;
	}
	
	// st2(st1)
	Stack(const Stack& st)
	{
		cout << "Stack(const Stack& st)" << endl;

		_a = (int*)malloc(sizeof(int)*st._capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
		memcpy(_a, st._a, sizeof(int)*st._top);
		_top = st._top;
		_capacity = st._capacity;
	}

	 //st1 = st2;
	 //st1 = st1;
	Stack& operator=(const Stack& st)//赋值重载
	{
		//cout << "	Stack& operator=(const Stack& st)" << endl;
		if (this != &st)
		{
			free(_a);
			_a = (int*)malloc(sizeof(int)*st._capacity);
			if (_a == nullptr)
			{
				perror("malloc fail");
				exit(-1);
			}
			memcpy(_a, st._a, sizeof(int)*st._top);
			_top = st._top;
			_capacity = st._capacity;
			}

		return *this;
	}

	~Stack()
	{
		cout << "~Stack()" << endl;

		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

	void Push(int x)
	{
		// ....
		// 扩容
		_a[_top++] = x;
	}

private:
	int* _a;
	int _top;
	int _capacity;
};

class MyQueue {
public:
	void push(int x)
	{
		_pushST.Push(x);
	}
private:
	Stack _pushST;
	Stack _popST;
	size_t _size = 0;
};
//int main()
//{
//	MyQueue q;
//	q.push(1);
//	
//
//	/*s.Destroy();*/
//	return 0;
//}