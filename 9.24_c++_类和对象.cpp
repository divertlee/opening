//#include<iostream>
//using namespace std;
//#include<stdlib.h>
//#include<assert.h>
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


//class Date
//{
//public:
//	Date(int year=1, int month=1, int day=1)//���캯��-�Զ�����
//	{
//		//cout << "���ù��캯��" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()
//	{
//		//cout << "�Զ�������������" << endl;
//		_year = 0;
//		_month = 0;
//		_day = 0;
//	}
//	/*Date(const Date& d)
//	{
//		cout<< "���ÿ�������" << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}*/
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{	
//	Date d1(1988, 3, 23);
//	Date d2(d1);
//	d2.Print();
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////////

//typedef int DataType;
//class Stack
//{
//public:

	//Stack()
	//{
	///*	cout << "Queue q�������Զ������� Stack�Ĺ��캯������ʼ��" << endl;*/
	//	_array = (DataType*)malloc(sizeof(DataType) * 3);
	//	if (NULL == _array)
	//	{
	//		perror("malloc����ռ�ʧ��!!!");
	//		return;
	//	}
	//	_capacity = 3;
	//	_size = 0;
	//}
	//~Stack()
	//{
	//	cout << "Queue q����Stack����������" << endl;
	//	free(_array);
	//	_array = NULL;
	//	_capacity = 0;
	//	_size = 0;
	//}
//	void Push(DataType data)
//	{
//		CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//	void Pop()
//	{
//		if (Empty())
//			return;
//		_size--;
//	}
//	DataType Top() { return _array[_size - 1]; }
//	int Empty() { return 0 == _size; }
//	int Size() { return _size; }
//	
//private:
//	void CheckCapacity()
//	{
//		if (_size == _capacity)
//		{
//			int newcapacity = _capacity * 2;
//			DataType* temp = (DataType*)realloc(_array, newcapacity *
//				sizeof(DataType));
//			if (temp == NULL)
//			{
//				perror("realloc����ռ�ʧ��!!!");
//				return;
//			}
//			_array = temp;
//			_capacity = newcapacity;
//		}
//	}
//private:
//	DataType* _array;
//	int _capacity=1;
//	int _size=1;
//};
//
//class MyQueue {
//public:
//	void push(int x)
//	{
//		cout << "����Ĭ��Stack���캯�����push" << endl;
//		_pushST.Push(x);
//	}
//
//	Stack _pushST;
//	Stack _popST;
//private:
//	int _a = 0;
//	int _b = 0;
//	//size_t _size;
//};
//int main()
//{
//	MyQueue q;
//	q.push(1);
//	
//
//	/*s.Destroy();*/
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//typedef int DataType;
//class Stack
//{
//public:
//
//	Stack()
//	{
//	/*	cout << "Queue q�������Զ������� Stack�Ĺ��캯������ʼ��" << endl;*/
//		_array = (DataType*)malloc(sizeof(DataType) * 3);
//		if (NULL == _array)
//		{
//			perror("malloc����ռ�ʧ��!!!");
//			return;
//		}
//		_capacity = 4;
//		_size = 0;
//	}
//	Stack(const Stack& st)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * st._capacity);
//		if (_array==NULL)
//		{
//			perror("malloc����ռ�ʧ��!!!");
//			exit(-1);
//		}
//		memcpy(_array, st._array, sizeof(DataType)*st._size);
//		
//	}
//	~Stack()
//	{
//		//cout << "Queue q����Stack����������" << endl;
//		free(_array);
//		_array = NULL;
//		_capacity = 0;
//		_size = 0;
//	}
//	void Push(DataType data)
//	{
//		CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//	void Pop()
//	{
//		if (Empty())
//			return;
//		_size--;
//	}
//	DataType Top() { return _array[_size - 1]; }
//	int Empty() { return 0 == _size; }
//	int Size() { return _size; }
//	
//private:
//	void CheckCapacity()
//	{
//		if (_size == _capacity)
//		{
//			int newcapacity = _capacity * 2;
//			DataType* temp = (DataType*)realloc(_array, newcapacity *
//				sizeof(DataType));
//			if (temp == NULL)
//			{
//				perror("realloc����ռ�ʧ��!!!");
//				return;
//			}
//			_array = temp;
//			_capacity = newcapacity;
//		}
//	}
//private:
//	DataType* _array;
//	int _capacity=1;
//	int _size=1;
//};
//
//int main()
//{
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//	Stack st2(st1);
//	st2.Push(3);
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//class Date
//{
//public:
//
//	int GetTureDay(int year, int month)
//	{
//	static	int monthArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
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
//	Date(int year=1, int month=1, int day=1)//���캯��-�Զ�����
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()
//	{
//		_year = 0;
//		_month = 0;
//		_day = 0;
//	}
//
//	bool operator==(const Date& d)
//	{
//		return _year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//	bool operator>(const Date& d)
//	{
//		if (_year > d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month > d._month)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month == d._month && _day > d._day)
//		{
//			return true;
//		}
//			return false;
//	}
//	bool operator>=(const Date& d)
//	{
//		return *this > d|| *this==d;
//	}
//	bool operator<(const Date& d)
//	{
//		return 1 ^ (*this > d);
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	Date& operator+=(int day)
//	{
//		_day += day;
//		while (_day > GetTureDay(_year, _month))
//		{
//			_day -= GetTureDay(_year, _month);
//			_month++;
//			if (_month == 13)
//			{
//				_year++;
//				_month = 1;
//			}
//		}
//		return *this;
//	}
//	Date operator+(int day)
//	{
//		Date ret(*this);
//		ret += day;
//		return ret;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{	
//	Date d1(2022, 9, 22);
//	Date d2;
//d2=	d1 +50;
//	return 0;
//}