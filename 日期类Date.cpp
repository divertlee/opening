
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

Date Date:: operator-(int day) const//减天数-不影响本身-不用引用-用拷贝函数
{
	Date tmp(*this);
	tmp-= day;
	return tmp;
}
Date Date:: operator+(int day) const//加天数-不影响本身-不用引用-用拷贝函数
{
	Date tmp(*this);
	tmp+= day;
	return tmp;
}

Date& Date:: operator-=(int day) //减等天数- 影响本身-用引用-不加const
{
	if (day < 0)
	{
		return *this += abs(day);
	}
	_day -= day;
	while (_day<=0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += GetTrueDay(_year, _month);
	}
	return *this;
	
}

Date& Date:: operator+=(int day) //加天数- 影响本身-用引用-不加const
{
	if (day < 0)
	{
		return *this -= abs(day);
	}
	_day += day;
	while (_day > GetTrueDay(_year, _month))
	{
		_day -= GetTrueDay(_year,_month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}

Date& Date::operator++()//前置++-改变自身-用引用
{
	return *this += 1;
}

Date Date::operator++(int)//后置++-不改变自身-用拷贝函数-括号里＋int
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}
Date& Date::operator--()//前置-- --需要改变自身-用引用
{
	return *this -= 1;
}
Date Date::operator--(int)//后置--，不需要改变自身-用构造函数-括号里＋int
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
 }

int Date:: operator-(const Date& d) const//日期减日期-算差距天数-都不改变自身+const
{
	Date max = *this;
	Date min=d;
	int flag = 1;
	if (*this<d)
	{
		max = d;
		min = *this;
		flag = -1;//如果*this比d小则减出来是负数，所以要预备flag=-1
	}

	int n = 0;
	while (min < max)
	{
		n++;
		min++;
	}
	return flag * n;//*this比d小，得出来是负数-乘-1，比大，乘1
}

ostream& operator<<(ostream& out, Date& d)//流插入
{
	cout << d._year << "年" << d._month << "月" << d._day << "日" << endl;
	return cout;
}

istream& operator>>(istream& in, Date& d)//流提取
{
	in>> d._year;
	in >> d._month;
	in >> d._day;
	return in;
	
 }