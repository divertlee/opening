

#pragma once
#include<iostream>


using namespace std;
//ģ�岻֧�ַ����������
//��Ԥ����׶λ���stack.cpp ��test.cpp����stack.i test.i
//�ڱ���׶λ���stack.cpp��test.cpp����stack.s��test.s
//�ڻ��׶λ���stack.cpp��test.cpp����stack.o��test.o
//Ȼ����������������ɿ�ִ�г���

template<typename T>
class Stack
{
public:
	Stack(int capacity = 4);
	~Stack();
	void Push(const T& x);

private:
	T* _a;
	int _top;
	int _capacity;
};

template<class T>
Stack<T>::Stack(int capacity)
{
	cout << "Stack(int capacity = )" << capacity << endl;

	_a = (T*)malloc(sizeof(T) * capacity);
	if (_a == nullptr)
	{
		perror("malloc fail");
		exit(-1);
	}

	_top = 0;
	_capacity = capacity;
}

template<class T>
Stack<T>::~Stack()
{
	cout << "~Stack()" << endl;

	free(_a);
	_a = nullptr;
	_top = _capacity = 0;
}

template<class T>
void Stack<T>::Push(const T& x)
{
	// ....
	// 
	_a[_top++] = x;
}