#pragma once
#include<iostream>
using namespace std;
class Date
{
public:

	Date(const Date& d)//拷贝构造函数
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		
	}

	~Date()//析构函数
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}

	void Print()//打印函数
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	int GetTrueDay(int year, int month)//得到正确月份天数
	{
		static int monthday[] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			return 29;
		}
		else
		{
			return monthday[month];
		}
	}
	Date(int year = 1, int month = 1, int day = 1)//构造函数
		: _year(year)
		, _month(month)
		, _day(day)
	{

	}

	bool operator==(const Date& d) const;//等于
	bool operator>(const Date& d) const;//大于
	bool operator>=(const Date& d) const//大于等于
	{
		return *this > d || *this == d;
	}
		bool operator<(const Date& d)const //判断小于
	{
		return !(*this >= d);
	}
		bool operator<=(const Date& d)const//小于等于
		{
			return !(*this > d);
		}

		Date& operator=(const Date& d)//赋值重载
		{
			if (this!=&d)
			{
				_year = d._year;
				_month = d._month;
				_day = d._day;
			}
			else
			{
				return*this;
			}
		}
		Date operator-(int day) const;//减天数
		Date operator+(int day) const;//加天数
		Date& operator-=(int day) ;//减等天数
		Date& operator+=(int day);//加天数
		Date& operator++(); //天数前置++
		Date operator++(int);//后置++
		Date& operator--();//前置--
		Date operator--(int);//后置--
		int operator-(const Date& d)const;//日期减日期-算差距天数
		friend ostream& operator<<(ostream& out, Date& d);//流插入友元声明
		friend istream& operator>>(istream& in, Date& d);//流提取友元声明
private:
	int _year;
	int _month;
	int _day;
}; 