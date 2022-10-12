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
	//cout << d1;//不可以
	//d1 << cout;//	d1.operator<<(cout);//可以
	//cout << d1 <<d2;
	
	//实现日期类打印（用插入流）
	//d1.operator<<(cout);
	//因为在类里面this指针默认第一个（左操作参数），所以插入流输出得这样写就怪怪的-不符合使用习惯和可读性
	//所以流插入函数就写类外面（流提取函数也是）
	//d1 << cout;
	//cout << d1 ;

	//连续流插入要用返回值,另endl-内置类型
	
	/*cout << d1 - d2 << endl;
	cout << d2 - d1 << endl;*/

	//cin >> d1 >> d2;

	//cout << d1 << d2 << endl;
	//cout << d1 - d2 << endl;
	//cin <<d1; //流提取
	//cout<<d1; //流插入
	//cout-cin-自动识别并实现内置类型（库支持），但自定义类型要自己实现
	//d1 -= -1000;
	//d1.Print();
	

 //Date d2(2020,11,29);//拷贝构造

// d2.Print();
// Date d3(d2);//拷贝构造 一个初始化另一个马上要创建的对象
// Date d4 = d2;//编译器也能通过：拷贝构造
//d1 = d2;//赋值重载（复制拷贝） 已经存在的两个对象之间拷贝

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
//	//st1 = st1;//原先的赋值重载
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
	Stack& operator=(const Stack& st)//赋值重载
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
		// 扩容
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

//对象每个成员声明时候定义初始化？--初始化列表
	//每个成员都要走初始化列表，若不在初始化列表里写，也会走 -不在列表里则先用随机值初始化或者缺省值
	//1.对于内置类型：有缺省值就用缺省值，没有就随机值初始化
	//2.对应自定义类型：