#include"stack.h"
#include<iostream>
using namespace std;
//#define Add(x,y) ((x)+(y))//��
//
//inline int Add(int x,int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int ret = Add(1, 2);
//	cout << ret << endl;
//
//	return 0;
//}


//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//	cout << typeid(a).name() << endl;//��ӡ�����͵��ַ���
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//
//	int arry[]={1, 2, 3, 4, 5};
//
//	for (auto& e : arry)
//	{
//		e *= 2;
//	}
//	cout << e <<" ";
//	cout << endl;
//
//	return 0;
//}


//c����-�������
//c++-�������

//��Ķ���-class-��Ĺؼ��� classname-������� {�������}
//class classname
//{
//
//};
//c++�����ͺ��������� ˳�򲻶�-��Ϊ����һ�����У���һ�����壩
//c���Եı����ͺ����ǵ����ĸ��壬����Ҫ������ǰ�������ں�
//class stack
//{public:
//	void Init(int N = 4);
//private:
//	int* a;
//	int top;
//	int capacity;
//};
//�����޶���-���У�pubilc)-��������Է���  ������protected) ˽�У�private)-�����������涼���ܷ��� �����������涼�ܷ���
//Ȩ���޶�����һ���޶���������Ľ�β
//struct Ĭ���� ��public-���У� class Ĭ���ǣ�private-Ĭ����˽�У�
//����-����û�п��ٿռ�
//����-���������ٿռ�

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//
//	int _year;
//	int _month;
//	int _day;
//
//};
//
//int main()
//{
//	Date ::Init(2022, 11, 28);
//	return 0;
//}

//#define Add(x , y) ((x)+(y))
//
//int main()
//{//���ܼӷֺ�-1
//	if (Add(1, 2))
//		//2.���ӣ����׳��ַ������ȼ�����
//		Add(1, 2) * 3;//������
//	int a = 1; int b = 3;
//	Add(a | b, a & b);
//
//
//}


//inline int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	ADD(3, 5);
//	return 0;
//}


//inline int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//int ret=	ADD(3, 5);
//cout << ret << endl;
//	return 0;
//}

//int main()
//{
//	int x = 25;
//	auto a = x;
//	auto* b = &x;
//	auto c = &x;
//	cout <<"a�����ͣ� " << typeid(a).name() << endl;
//	cout <<"b�����ͣ� " << typeid(b).name() << endl;
//	cout <<"c�����ͣ� " << typeid(c).name() << endl;
//	return 0;
//}

//int main()
//{
//	int arry[] = { 1,2,3,4,5 };
//	for (auto& e : arry)
//	{
//		e *= 2;
//	}
//	for (auto e : arry)
//		cout << e << " ";
//		cout<< endl;
//
//	return 0;
////}
//typedef int STDatatype;
//struct stack
//{//��Ա����/����
//	void Init(size_t capacity)
//	{
//		_arry = (STDatatype*)malloc(sizeof(STDatatype));
//		if (_arry == NULL)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//	
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void push(const STDatatype& data)
//	{
//		//����
//		_arry[_size] = data;
//		++_size;
//		
//	}
//
//	STDatatype top()
//	{
//		return _arry[_size - 1];
//	}
//	void Destroy()
//	{
//		free(_arry);
//	_arry = nullptr;
//	_capacity = 0;
//	_size = 0;
//	}
//
//	//��Ա����
//	STDatatype* _arry;
//	size_t _capacity;
//	size_t _size;
//
//};
//
//int main()
//{
//	stack st;//����-����
//	st.Init(4);
//	st.push(34);
//	cout << st.top() << endl;
//	return 0;
//}


class classname
{
	//��Ա����...

	//��Ա����...

};
