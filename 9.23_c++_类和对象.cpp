#include<iostream>
using namespace std;
#include<stdlib.h>
//Stack��������������Ҫ�Լ�д��my_queue��������������Ҫ�Լ�д
//���������ɵĿ����þͲ���Ҫ�Լ�д
//�����Զ��庯�������������������ĺ�������Ҫд����������������������Զ��庯��������������
//size_t=unsigned int-�޷�������

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
//���������Ĺ��캯������Ĭ�Ϲ���
// �������ͣ�
//��Ҫд�����������࣬��Ҫд����Ŀ�������
//����Ҫд�����������࣬��Ҫдǳ�����Ŀ�������
//�Զ������ͣ������Զ������͵Ŀ�������
//int main()
//{
//	Date d1;
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////


//���������

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

//���������-�ඨ����һ���µ�������������г�Ա��������������С��������ⶨ���Աʱ����Ҫʹ�� :: 

//class people
//{public:
//	int findperson();
//private:
//	int son;
//	int dad;
//	int mother;
//};
////�����������ָ����Ա�����ĸ�����
//int people::findperson()//����ĵ�findperson��������people�������
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
//	cout << "�г�Ա����:"<<ret << endl;
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
//	cout << "����һ����Ա������" << ret << endl;
//	cout << "���ࣺ" << rett << endl;
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
//	Date(int year=1, int month=1, int day=1)//���캯��-�Զ�����
//	{
//		cout << "���ù��캯��" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
	//Date()
	//{
	//	cout << "�������صĹ��캯��" << endl;
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
	Date(int year=1, int month=1, int day=1)//���캯��-�Զ�����
	{
		cout << "���ù��캯��" << endl;
		_year = year;
		_month = month;
		_day = day;
	}
	~Date()
	{
		cout << "�Զ�������������" << endl;
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