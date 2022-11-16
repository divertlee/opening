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
		////拷贝构造-传统写法（老实人）
		//string(const string& s)
		//{
		//	_str = new char[s._capacity + 1];//留一个字符给斜杠0
		//	strcpy(_str, s._str);//_str拷贝
		//	_size = s._capacity;
		//	_capacity = s._capacity;
		//}
		void swap(string& s)//交换函数
		{
		    std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}
		//拷贝构造-现代写法
		//s2(s1)
		string(const string& s)
			:_str(nullptr)//要初始化给个空指针，不然是野指针，tmp析构的时候会越界空间析构报错
			,_size(0)
			,_capacity(0)
		{
			string tmp(s._str);//用s构造tmp
			//this->swap(tmp);
			swap(tmp);
		}
		//赋值重载-传统写法
		//string& operator=(const string& s)//传引用
		//{
		//	if (this != &s)
		//	{
		//		char* tmp = new char[s._capacity + 1];//开新空间
		//		strcpy(tmp, s._str);//拷贝
		//		delete[]_str;//删除_str的就空间
		//		_str = tmp;//指向新空间
		//		_size = s._size;
		//		_capacity = s._capacity;
		//	}
		//	return *this;
		//}
		//赋值重载-现代写法
		//string& operator=( const string& s)//传引用
		//{
		//	if (this != &s)
		//	{
		//		string tmp(s);//s构造tmp
		//		swap(tmp);//交换this和tmp指针
		//	}
		//	return *this;
		//}
		string& operator=(string& s)//传引用
		{
			if (this != &s)
			{
				swap(s);
			
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

		string& insert(size_t pos, char ch)//插入字符-
		{
			assert(pos <=_size);

			if (_size == _capacity)//扩容
			{
				size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
				reserve(newcapacity);
			}
			//挪动数据
			//size_t end = _size+1;//无符号版
			//while (end>pos)//size_t和int类型同时在操作符两边，会造成整形提升-小的往大的提升（int->size_t）；没有负数，永远大于0-会进入死循环;
			//{
			//	_str[end] = _str[end-1];
			//	end--;
			//}
			//有符号版
			int end = _size-1;
			while (end >=(int) pos)
			{
				_str[end + 1] = _str[end];
				end--;
			}
			//插入字符
			_str[pos] = ch;
			_size++;
			_str[_size] = '\0';
			return *this;
		}
		string& insert(size_t pos, const char* str)//插入字符串
		{
			//扩容
			size_t len = strlen(str);//记录要插入字符串的长度
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			
			//挪动数据
			//(size_t)无符号版
			//size_t end = _size+1;//+1把\0也挪到_str[_szie+len-1]的位置上
			//while (end > pos)
			//{
			//	_str[end + len-1] = _str[end-1];
			//	end--;
			//}
			//有(int)符号版
			int end = _size;//把\0也挪到_str[_size+len]位置上
			while (end >= (int)pos)
			{
				_str[end + len] = _str[end];
				--end;
			}
			//插入字符串
			strncpy(_str + pos, str, len);
			_size += len;
			return *this;
		}
		//string& erase(size_t pos, size_t len = npos)//给缺省值
		//{
		//	assert(pos <_size);
		//	if (len == npos || len >=_size - pos)
		//		//没有输入要删除的字符串长度则pos之后的内容全删完 要删除的字符串长度len大于pos之后的有效字符串长度则也全删完
		//	{
		//		_str[pos] = '\0';
		//		_size = pos;
		//	}
		//	else
		//	{
		//		strcpy(_str + pos, _str + pos + len);
		//		_size -= len;
		//	}
		//	return *this;

		//}
		string& erase(size_t pos, size_t len = npos)
		{
			assert(pos < _size);

			if (len == npos || len >= _size - pos)
			{
				_str[pos] = '\0';
				_size = pos;
			}
			else
			{
				strcpy(_str + pos, _str + pos + len);
				_size -= len;
			}

			return *this;
		}
		size_t find(char ch, size_t pos=0)//寻找字符
		{
			assert(pos < _size);
			while (pos<_size)
			{
				if (_str[pos] == ch)
				{
					return pos;//，返回下标
				}
					++pos;
			}
			return npos;//没找到返回npos
		}
		size_t find(const char* s, size_t pos = 0)//寻找字符串
		{
			assert(pos < _size);
			const char* ptr = strstr(_str, s);
			if (ptr == nullptr)
			{
				return npos;//没找到
			}
			else
			{
				return ptr - _str;//指针相减得指针之间字符串数量-即为pos的位置
			}
		}
	private:
		 char* _str;
		 size_t _size;
		 size_t _capacity;
		 const static size_t npos = -1;
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

	void test_str4()
	{
		string s1 = "hello world";
		cout << s1 << endl;
		string s2 = "xxxxxxxxxxxxxxxx";
		s1 = s2;
		cout << s1 << endl;
		/*string s2(s1);
		cout << s2 << endl;*/
	}
	//void test_str3()
	//{
	//	string s1 = "helloworld";
	//	cout << s1 << endl;
	//size_t pos=	s1.find("world", 3);
	//	cout << "wrold的位置在：" << pos << endl;


	//	//string s1 = "world";
	//	//s1.insert(0,"hello");
	//	//cout << s1 << endl;
	//	/*string s2 = "hello";
	//	cout << s2 << endl;
	//	s2.insert(0, 'j');
	//	cout << s2 << endl;*/
	//}



	//void test_str4()
//{
////std::string s1 = "haoma";
////报错原因：库里面没有与（size_t pos, char c)匹配的接口，所以会默认为是与(size_t pos,const char*s)的接口-
//	//'\0'为char，整形提升为int(0)，就能被指针识别 然后int类型又不能转为const所以报错-针对s1.insert(3, '\0');
//	string s1 = "haoma";
//	cout << s1.size() << endl;//5
//	cout << s1.capacity() << endl;//5
//	cout << s1 << endl;
//	cout << s1.c_str() << endl;//"haoma"
//       s1.insert(3, '\0');
   //	cout << s1.size() << endl;//6这里的size是根据自己实现的字符串长度判别的
   //	cout << s1.capacity() << endl;//20-扩容了

   //	cout << s1 << endl;//"haoma"
   //	cout << s1.c_str() << endl;//"hao"-在库里'/0'在第四个位置作为字符串末尾停止了
   //}

	/*void test_str2()
	{*/
		
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
		cin >> s2;
		cout << s2 << endl;
		string s3;
		cin >> s3;
		cout << s3 << endl;*///有空格的话，那么空格后面那部分还在缓冲区内，需要再流提取一次
						   
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
//	}
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