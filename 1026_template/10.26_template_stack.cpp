//#include"test.h"
//
//template<class T>
//Stack<T>::Stack(int capacity )
//{
//	cout << "Stack(int capacity = )" << capacity << endl;
//
//	_a = (T*)malloc(sizeof(T)*capacity);
//	if (_a == nullptr)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//
//	_top = 0;
//	_capacity = capacity;
//}
//
//template<class T>
//Stack<T>::~Stack()
//{
//	cout << "~Stack()" << endl;
//
//	free(_a);
//	_a = nullptr;
//	_top = _capacity = 0;
//}
//
//template<class T>
//void Stack<T>::Push(const T& x)
//{
//	// ....
//	// 
//	_a[_top++] = x;
//}
//
////ÏÔÊ¾ÊµÀý»¯
//template 
//class Stack<int>;