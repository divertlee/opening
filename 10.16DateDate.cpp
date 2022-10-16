
#include"Date.h"

bool Date:: operator==(const Date& d) const//等于
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date:: operator>(const Date& d) const//大于
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_month > d._month)
	{
		return true;
	}
	else if (_day == d._day)
	{
		return true;
	}
	else
	{
		return false;
	}

}

Date Date:: operator+(int day) const//加天数
{
	if (day < 0)
	{
		*this -= -day;
	}
	this->_day = day;


}

//Date& Date:: operator+=(int day)  //天数前置++
//{
//	if (day < 0)
//	{
//		return *this -= -day;
//	}
//	_day += day;
//}
ostream& operator<<(ostream& out, Date& d)//流插入
{
	cout << d._year << "年" << d._month << "月" << d._day << "日" << endl;
	return cout;
}

istream& operator>>(istream& in, Date& d)//流输出友元函数
{
	in>> d._year;
	in >> d._month;
	in >> d._day;
	return in;
	
 }