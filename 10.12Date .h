//#pragma once
//
//#include<iostream>
//using namespace std;
//class Date
//{
////	//��Ա����������λ�ã�
////	//������
////	friend ostream& operator<<(ostream& cout, const Date& d);
//////����ȡ
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
//	//	cout << _year << "��" << _month << "��" << _day << "��" << endl;
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
//	//Date(int year = 1, int month = 1, int day = 1)//���캯��-�Զ�����
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	~Date()//��������
//	{
//		_year = 0;
//		_month = 0;
//		_day = 0;
//	}
//
//	bool operator==(const Date& d)const ;//�жϵ���
//
//	bool operator>(const Date& d)const ;//�жϴ���
//	
//	bool operator>=(const Date& d)const //�жϴ��ڵ���
//	{
//		return *this > d || *this == d;
//	}
//
//	bool operator<(const Date& d)const //�ж�С��
//	{
//		return !(*this>= d);
//	}
//	bool operator<=(const Date& d)const //�ж�С�ڵ���
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
////��ֵ����-���÷����Զ������� -����������ֵ
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		else
//		{
//			return *this;//�Լ���ֵ�Լ�
//		}
//	}
//	//����-=
//	Date& operator-=(int day);
//	//����-
//	Date operator-(int day) const;
//	//ǰ��++
//	Date& operator++();
//	//����++
//	Date operator++(int);
//	//ǰ��--
//	Date& operator--();
//	//����--
//	Date operator--(int);
//	//����-����
//	int operator-(const Date& d) const;
//
//	//������ʵ�����ڵ����
//	//void operator<<(ostream& cout)
////��һ������������thisָ�루Ĭ�ϵģ��ڶ����������ǲ�����cout
//	//{
//	//	cout << _year << "��" << _month << "��" << _day << "��" << endl;
//	//}
//
//	//��������ʹ��˽�к���-����취-һ������getday()��������һ��������Ա��������Ա������
//
//	//ȡ��ַ����-һ������²���д ������Ĭ�����ɵľ͹���-�����ǲ����ñ���ȡ����ַ
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
//	//	cout << _year << "��" << _month << "��" << _day << "��" << endl;
//	//}
//	friend ostream& operator<<(ostream& out, const Date& d);//������λ�ö�����
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
//	cout << d._year << "��" << d._month << "��" << d._day << "��" << endl;
//	return out;
//}
//
////static ����ȫ�ֱ�����ȫ�ֺ����ǻᵼ��ֻ�ڵ�ǰ�ļ����֣��ı���������-�������ű�-�����ӣ�
////static void  operator<<(ostream& cout,const Date&d)
//////��.hʵ���ڱ����ڼ��ͬʱ��Date.cpp ��Test.cppչ�������γ�Test.O ��Date.o������ű��ظ����֣���ô�����ض�������
//////��һ������������thisָ�루Ĭ�ϵģ��ڶ����������ǲ�����cout
////{
////	cout << d._year << "��" << d._month << "��" << d._day << "��" << endl;
////}
// //�������������������Ͷ������
// //ostream&  operator<<(ostream& cout, const Date& d);
////�ֻ���������������ֻ��.h�ļ�չ�����������ű�
//
//
//
////inline ostream& operator<<(ostream& out, const Date& d)//
////	//��һ������������thisָ�루Ĭ�ϵģ��ڶ����������ǲ�����cout
////{
////
////	out << d._year << "��" << d._month << "��" << d._day << "��" << endl;
////	return out;
////}
////
//////cin>>d1
////inline istream& operator>>(istream& in, Date& d)//
////	//��һ������������thisָ�루Ĭ�ϵģ��ڶ����������ǲ�����cout
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
////	Stack& operator=(const Stack& st)//��ֵ����
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
////		// ����
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