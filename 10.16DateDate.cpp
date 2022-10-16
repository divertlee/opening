
#include"Date.h"

bool Date:: operator==(const Date& d) const//����
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date:: operator>(const Date& d) const//����
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

Date Date:: operator+(int day) const//������
{
	if (day < 0)
	{
		*this -= -day;
	}
	this->_day = day;


}

//Date& Date:: operator+=(int day)  //����ǰ��++
//{
//	if (day < 0)
//	{
//		return *this -= -day;
//	}
//	_day += day;
//}
ostream& operator<<(ostream& out, Date& d)//������
{
	cout << d._year << "��" << d._month << "��" << d._day << "��" << endl;
	return cout;
}

istream& operator>>(istream& in, Date& d)//�������Ԫ����
{
	in>> d._year;
	in >> d._month;
	in >> d._day;
	return in;
	
 }