#include"Date.h"


//void TestDate2()
//{
//	const Date d2(2022, 10, 11);
//	d2.Print();
//	cout << &d2 << endl;
//}





void TestDate1()
{
 Date d1(2022,10,10);
 const Date d2(2021, 8, 26);
 cout << &d1 << endl;
 cout << &d2 << endl;
	//cout << d1;//������
	//d1 << cout;//	d1.operator<<(cout);//����
	//cout << d1 <<d2;
	
	//ʵ���������ӡ���ò�������
	//d1.operator<<(cout);
	//��Ϊ��������thisָ��Ĭ�ϵ�һ��������������������Բ��������������д�͹ֵֹ�-������ʹ��ϰ�ߺͿɶ���
	//���������뺯����д�����棨����ȡ����Ҳ�ǣ�
	//d1 << cout;
	//cout << d1 ;

	//����������Ҫ�÷���ֵ,��endl-��������
	
	/*cout << d1 - d2 << endl;
	cout << d2 - d1 << endl;*/

	//cin >> d1 >> d2;

	//cout << d1 << d2 << endl;
	//cout << d1 - d2 << endl;
	//cin <<d1; //����ȡ
	//cout<<d1; //������
	//cout-cin-�Զ�ʶ��ʵ���������ͣ���֧�֣������Զ�������Ҫ�Լ�ʵ��
	//d1 -= -1000;
	//d1.Print();
	

 //Date d2(2020,11,29);//��������

// d2.Print();
// Date d3(d2);//�������� һ����ʼ����һ������Ҫ�����Ķ���
// Date d4 = d2;//������Ҳ��ͨ������������
//d1 = d2;//��ֵ���أ����ƿ����� �Ѿ����ڵ���������֮�俽��

	//Date d3=d1 - 7251;
	//d3.Print();
	//(d1 - 7251).Print();
}




//void TestStack()
//{
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//
//	Stack st2;
//	st2.Push(10);
//	st2.Push(20);
//	st2.Push(30);
//	st2.Push(40);
//
//	//st1 = st1;//ԭ�ȵĸ�ֵ����
//	MyQueue q1;
//	MyQueue q2;
//	q1.push(1);
//	q1.push(2);
//	q1.push(3);
//	q2.push(10);
//	q2.push(20);
//	q2.push(30);
//	q2 = q1;
//
//}
//int main()
//{
//	//TestDate2();
//	TestDate1();
//	// 
//	//TestStack();
//	return 0;
//}

class Stack
{
public:
	//Stack(int capacity = 4)

	//{
	//	_a = (int*)malloc(sizeof(int)*capacity);
	//	if (_a == nullptr)
	//	{
	//		perror("malloc fail");
	//		exit(-1);
	//	}

	//	_top = 0;
	//	_capacity = capacity;
	//}
	
	// st2(st1)
	Stack(const Stack& st)
	{
		cout << "Stack(const Stack& st)" << endl;

		_a = (int*)malloc(sizeof(int)*st._capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
		memcpy(_a, st._a, sizeof(int)*st._top);
		_top = st._top;
		_capacity = st._capacity;
	}

	 //st1 = st2;
	 //st1 = st1;
	Stack& operator=(const Stack& st)//��ֵ����
	{
		//cout << "	Stack& operator=(const Stack& st)" << endl;
		if (this != &st)
		{
			free(_a);
			_a = (int*)malloc(sizeof(int)*st._capacity);
			if (_a == nullptr)
			{
				perror("malloc fail");
				exit(-1);
			}
			memcpy(_a, st._a, sizeof(int)*st._top);
			_top = st._top;
			_capacity = st._capacity;
			}

		return *this;
	}

	~Stack()
	{
		cout << "~Stack()" << endl;

		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

	void Push(int x)
	{
		// ....
		// ����
		_a[_top++] = x;
	}

private:
	int* _a;
	int _top;
	int _capacity;
};
class MyQueue {
public:
	MyQueue(int capacity)
		:_pushST(capacity)
		, _popST(capacity)
	{}
	void push(int x)
	{
		_pushST.Push(x);
	}
private:
	Stack _pushST;
	Stack _popST;
	size_t _size = 0;
};
int main()
{
	MyQueue q;
	

	/*s.Destroy();*/
	return 0;
}

//class B {
//public:
//	
//	B()
//		: _n(10)
//
//	{}
//private:
//	const int _n; 
//	
//};
//
//
//int main()
//{
//	B b;
//	
//	return 0;
//}

//����ÿ����Ա����ʱ�����ʼ����--��ʼ���б�
	//ÿ����Ա��Ҫ�߳�ʼ���б������ڳ�ʼ���б���д��Ҳ���� -�����б������������ֵ��ʼ������ȱʡֵ
	//1.�����������ͣ���ȱʡֵ����ȱʡֵ��û�о����ֵ��ʼ��
	//2.��Ӧ�Զ������ͣ�