#pragma
#include<iostream>
using namespace std;


//int main()
//{
//	int* ptr1 = new int;//��̬����һ��int���͵Ŀռ�--û�г�ʼ��
//	delete ptr1;
//	int* ptr2 = new int(1);//��̬����һ��int���͵Ŀռ�--��ʼ��Ϊ1
//	delete ptr2;
//	int* ptr3 = new int[10];//��̬��10��int���Ϳռ�--û�г�ʼ��
//	delete ptr3;
//	int* ptr4 = new int[10]{ 1,2,3,4,5 };
//	////��̬��10��int���Ϳռ�--��ʼ��Ϊ1��2��3��4��5�����Զ���ʼ��Ϊ0
//	delete ptr4;
//	return 0;
//}


class A {
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "���ù��캯��A():" << endl;
	}
	~A()
	{
		cout << "������������~A():"<< endl;
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