
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

Date Date:: operator-(int day) const//������-��Ӱ�챾��-��������-�ÿ�������
{
	Date tmp(*this);
	tmp-= day;
	return tmp;
}
Date Date:: operator+(int day) const//������-��Ӱ�챾��-��������-�ÿ�������
{
	Date tmp(*this);
	tmp+= day;
	return tmp;
}

Date& Date:: operator-=(int day) //��������- Ӱ�챾��-������-����const
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

Date& Date:: operator+=(int day) //������- Ӱ�챾��-������-����const
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

Date& Date::operator++()//ǰ��++-�ı�����-������
{
	return *this += 1;
}

Date Date::operator++(int)//����++-���ı�����-�ÿ�������-�����int
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}
Date& Date::operator--()//ǰ��-- --��Ҫ�ı�����-������
{
	return *this -= 1;
}
Date Date::operator--(int)//����--������Ҫ�ı�����-�ù��캯��-�����int
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
 }

int Date:: operator-(const Date& d) const//���ڼ�����-��������-�����ı�����+const
{
	Date max = *this;
	Date min=d;
	int flag = 1;
	if (*this<d)
	{
		max = d;
		min = *this;
		flag = -1;//���*this��dС��������Ǹ���������ҪԤ��flag=-1
	}

	int n = 0;
	while (min < max)
	{
		n++;
		min++;
	}
	return flag * n;//*this��dС���ó����Ǹ���-��-1���ȴ󣬳�1
}

ostream& operator<<(ostream& out, Date& d)//������
{
	cout << d._year << "��" << d._month << "��" << d._day << "��" << endl;
	return cout;
}

istream& operator>>(istream& in, Date& d)//����ȡ
{
	in>> d._year;
	in >> d._month;
	in >> d._day;
	return in;
	
 }