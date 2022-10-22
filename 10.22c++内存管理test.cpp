#include<iostream>
using namespace std;

class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "���ù���-A()" << endl;
	}

	~A()
	{
		cout << "������������-~A()" << endl;
	}
private:
	int _a;
};

int main()
{
	A* p2 = (A*)malloc(sizeof(A));
	if (p2 == nullptr)
	{
		perror("malloc fail");
		exit(-1);
	}
	new (p2)A;
	p2->~A();
	free(p2);
	return 0;
}

//int main()
//{
//	A* ptr1 = new A[10];
//	delete[10] ptr1;
//
//	return 0;
//}

