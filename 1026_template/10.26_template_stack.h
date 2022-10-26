//#pragma once
//#include<iostream>
//
//
//using namespace std;
////模板不支持分离编译生成
////在预处理阶段会在stack.cpp 和test.cpp生成stack.i test.i
////在编译阶段会在stack.cpp和test.cpp生成stack.s和test.s
////在汇编阶段会在stack.cpp和test.cpp生成stack.o和test.o
////然后编译器会链接生成可执行程序
//
//template<typename T>
//class Stack
//{
//public:
//	Stack(int capacity = 4);
//	~Stack();
//	void Push(const T& x);
//
//private:
//	T* _a;
//	int _top;
//	int _capacity;
//};