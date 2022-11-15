#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<assert.h>
using namespace std;


namespace tmp
{



	class string
	{
	public:

		typedef char* iterator;
		iterator begin()
		{
			return _str;//返回第一个指针位置
		}
		iterator end()
		{
			return _str + _size;//返回最后一个有效字符的下一个位置
		}
		//构造函数
		string(const char* str = "")//给缺省值
	
		{
			_size = strlen(str);//_size为有效字符的长度
			_capacity = _size;//capacity初始化都为有效字符的长度
			_str = new char[_capacity + 1];//留一个字符给'\0'
			strcpy(_str, str);//拷贝过去
		}
		//析构函数
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}
		//size
		size_t size()const
		{
			return _size;
		}
		// capacity
		size_t capacity()const
		{
			return _capacity;
		}
		//拷贝构造
		string(const string& s)
		{
			_str = new char[s._capacity + 1];//留一个字符给斜杠0
			strcpy(_str, s._str);//_str拷贝
			_size = s._capacity;
			_capacity = s._capacity;
		}
		//赋值重载
		string& operator=(const string& s)//传引用
		{
			if (this != &s)
			{
				char* tmp = new char[s._capacity + 1];//开新空间
				strcpy(tmp, s._str);//拷贝
				delete[]_str;//删除_str的就空间
				_str = tmp;//指向新空间
				_size = s._size;
				_capacity = s._capacity;
			}
			return *this;
		}
		//返回一个指向正规C字符串的指针常量, 内容与本string串相同
		const char* c_str()const
		{
		return 	_str;
		}
		char &operator[](int pos)const//方括号重载
		{
			return _str[pos];
		}
		void clear()//清除所以有效字符
		{
			_str[_size] = '\0';
			_size = 0;
		}
		//reserve扩容
		void reserve(int n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];//留一个字符给斜杠0
				strcpy(tmp, _str);
				delete[] _str;//释放旧空间
				_str = tmp;//指向新空间
				_capacity = n;
			}
		}
		void resize(int n,char ch='\0')//给ch缺省值
		{
			if (n > _size)//n>_size则不修改内容，或扩容或填充
			{
				reserve(n);//如果n>_capacity的话会扩容
				for (size_t i = _size; i < n; ++i)//用ch填充除了有效字符以外的空间
				{
					_str[i] = ch;
				}
				_size = n;
				_str[_size] = '\0';
			}
			else
			{
				_str[n] = '\0';//n小于_size 要修改内容
				_size = n;//_size为n
			}
		}
		void push_back(char ch)//尾插字符
		{
			if (_size == _capacity)//扩容
			{
				size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
				reserve(newcapacity);
			}
			_str[_size] = ch;//在末尾追加字符fh
			_size++;
			_str[_size] = '\0';//加上\0
	}
		//后面追加追加字符串
		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)//直接扩容
			{
				reserve(_size + len);
		}
			strcpy(_str + _size, str);//strcpy把str连同\0一起拷贝过来了，所以不需要考虑\0
			_size += len;	
		}

		string& operator+=(char ch)//追加字符重载
		{
			push_back(ch);
			return *this;
		}
		string& operator+=(const char* str)//追加字符串重载
		{
			append(str);
			return *this;
		}
	private:
		 char* _str;
		 size_t _size;
		 size_t _capacity;
	};

	ostream& operator<<(ostream& out, const string&s )//流插入
	{
		for (size_t i = 0; i < s.size(); ++i)
		{
			out << s[i];
			
		}
		return out;
	}
	istream& operator>>(istream& in, string& s)//流提取
	{
		s.clear();//如果流提取之前s里面有字符，则要清除
		char buff[128] = { '\0' };//开一块空间做中转站
		size_t i = 0;
		char ch= in.get();//用ch一个个接收s的字符
		while (ch != ' ' && ch != '\n')//当ch接收到换行或者空格则停止
		{
			if (i == 127)
			{
				//满了-buff尾接给s
				s += buff;
				i = 0;
			}
			//没满ch继续接收
			buff[i++] = ch;
			ch = in.get();
		}
		if (i>0)//如果没满则buff没有尾插到s后面；又或者buff满过的部分尾接给了s，但剩下的部分没有尾接给s
		{
			buff[i] = '\0';//要携带\0 !
			s += buff;
}
		return in;
	}
	
	void test_str2()
	{
		
	/*	string s1="hello world";
		cout << s1 << endl;
		s1.push_back('x');
		cout << s1 << endl;
		s1 += "t";
		cout << s1 << endl;
		s1.append("love and peace");
		cout << s1 << endl;
		s1 += "hahaha";
		cout << s1 << endl;*/
		/*string s2;
		string s3;
		cin >> s2>>s3;
		cout<<s2<<s3<<endl;*/
	/*	string s2;
		cin >> s2;*
		/*cout << s2 << endl;
		string s3;
		cin >> s3;
		cout << s3 << endl;//有空格的话，那么空格后面那部分还在缓冲区内，需要再流提取一次
		//s1.resize(7,'x');
		//	cout << s1.c_str() << endl;
	//	s1.push_back('c');
	//cout << s1.c_str() << endl;
	//s1.append("hhhhhhhhhh");
	//cout << s1.c_str() << endl;
		/*for (size_t i = 0; i < s1.size(); ++i)
		{
			cout << s1[i] << " ";
		}
		cout << endl;*/
	
		/*for (auto &ch : s1)
		{
			cout<<ch++<<" ";
		}
		cout << endl;*/


	/*	string s1 = "hi,im dandy";
		string::iterator it1 = s1.begin();
		while (it1 !=s1.end())
		{
			cout << *(it1) << " ";
			it1++;
		}
		cout << endl;*/
	}
	//void test_str1()
	//{
	//	string s1="hello world!";
	//	cout << s1.c_str() << endl;
	///*	string s2 = s1;
	//	cout << s2.c_str() << endl;
	//string 	s3=s2=s1;
	//cout << s3.c_str() << endl;*/
	//}
}