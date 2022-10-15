#pragma
#include<iostream>
using namespace std;


//int main()
//{
//	int* ptr1 = new int;//动态申请一块int类型的空间--没有初始化
//	delete ptr1;
//	int* ptr2 = new int(1);//动态申请一块int类型的空间--初始化为1
//	delete ptr2;
//	int* ptr3 = new int[10];//动态深10块int类型空间--没有初始化
//	delete ptr3;
//	int* ptr4 = new int[10]{ 1,2,3,4,5 };
//	////动态深10块int类型空间--初始化为1，2，3，4，5其余自动初始化为0
//	delete ptr4;
//	return 0;
//}


class A {
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "调用构造函数A():" << endl;
	}
	~A()
	{
		cout << "调用析构函数~A():"<< endl;
	}
private:
	int _a;
};

int main()
{
	A* p3 = new A;
	delete [10]p3;


//	A* p1 = new A;
//	//delete p1;
////	delete[] p1;
//	free(p1);



	//A* p2 = (A*)malloc(sizeof(A));
	//free(p2);
	return 0;
}