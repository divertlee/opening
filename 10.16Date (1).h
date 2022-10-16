#pragma once
#include<iostream>
using namespace std;


class Date
{
public:

	int GetTrueDay(int year,int month)//�õ���ȷ�·�����
	{
		static int monthday[] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31};
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			return 29;
		}
		else
		{
			return monthday[month];
		}
	}
	Date(int year = 1, int month = 1, int day = 1)//���캯��
		: _year(year)
		, _month(month)
		, _day(day)
	{
		
	}

	
	Date(const Date& d)//�������캯��
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		
	}

	~Date()//��������
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}

	void Print()//��ӡ����
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	bool operator==(const Date& d) const;//����
	bool operator>(const Date& d) const;//����
	bool operator>=(const Date& d) const//���ڵ���
	{
		return *this > d || *this == d;
	}
		bool operator<(const Date& d)const //�ж�С��
	{
		return !(*this >= d);
	}
		bool operator<=(const Date& d)const//С�ڵ���
		{
			return !(*this > d);
		}

		Date& operator=(const Date& d)//��ֵ����
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
		Date operator+(int day) const;//������
		Date& operator++(); //����ǰ��++
	
		friend ostream& operator<<(ostream& out, Date& d);//��������Ԫ����
		friend istream& operator>>(istream& in, Date& d);//�������Ԫ����
private:
	int _year;
	int _month;
	int _day;
};