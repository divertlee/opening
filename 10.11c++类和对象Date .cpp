#include"Date.h"
bool Date ::operator==(const Date& d) //判断
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
bool Date::operator>(const Date& d)//判断大于
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year && _month > d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day > d._day)
	{
		return true;
	}
	return false;
}


Date& Date:: operator+=(int day)//加等天数
{
	if (day < 0)
	{
		return *this -= -day;
}
	_day += day;
	while (_day > GetTureDay(_year, _month))
	{
		_day -= GetTureDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator+(int day)
{
	Date ret(*this);
	ret += day;
	return ret;
}

Date& Date:: operator-=(int day)
{
	if (day < 0)
	{
		return *this +=abs(day);
}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += Date::GetTureDay(_year, _month);
	}
	return *this;
}
 Date Date:: operator-(int day)
 {
	 Date ret(*this);//拷贝构造
	 ret -= day;
	 return ret;
}

 Date& Date::operator++()//前置
 {
	 *this += 1;
	 return *this;
 }

 Date Date::operator++(int)//后置++
 {
	 Date tmp(*this);
	 *this += 1;
	 return tmp;
 }