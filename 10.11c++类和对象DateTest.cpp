#include"Date.h"

void TestDate1()
{
	Date d1(2022,10,10);
	Date d2(d1);
	d1.Print();
	//d1 -= -1000;
	//d1.Print();
	
	(d1++).Print();
	(++d2).Print();
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
int main()
{
	TestDate1();
	//TestStack();
	return 0;
}