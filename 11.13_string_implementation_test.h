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
		iterator begin()//迭代器
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		//这里要实现带参的构造，无参的构造
		//"\0"-这里是字符串-两个斜杠0；'\0'-这里是字符串，会变为ASCII码值-0；""-这里是斜杠0

		string(const char* str = "")//给缺省值
			//这里不用初始化列表，用的话都要用strlen一个个初始化，比较麻烦
		{
			_size = strlen(str);
			_capacity = _size;//这里的容量为字符串有效字符的长度
			_str = new char[_capacity + 1];//——strnew一块空间，+1给/0
			strcpy(_str, str);
		}
		//s2(s1)
		string (const string& s)//深拷贝
		{
			_str = new char[s._capacity+1];
			_capacity = s._capacity;
			_size = s._size;
			strcpy(_str, s._str);
		}
		//s2=s3
		string& operator = (const string& s)//赋值
		{
			if (this != &s)
			{
				char* tmp = new char[s._capacity + 1];
				strcpy(tmp, s._str);
				delete[]_str;//释放的是s2的旧空间
				_str = tmp;
			}
			return *this;
		}
		~string()
		{
			delete[]_str;
			_str = nullptr;
			_size = _capacity = 0;
		}
		const char* c_str()const //通过c_str打印c格式字符串
		{
			return _str;
		}
		size_t size() const//size个数
		{
			return _size;
		}

		size_t capacity()const
		{
			return _capacity;
		}

		char& operator[](int pos)const
		{
			return _str[pos];
		}

		void reserve(int n)//扩容
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];//+1留给/0
				strcpy(tmp, _str);//把旧空间的字符串拷贝到新空间
				delete[]_str;//释放旧空间
				_str = tmp;//指向新空间
				_capacity = n;
			}

		}

		void resize(size_t n, char ch = '\0')
		{
			if (n > _size)
			{
				reserve(n);
				for (size_t i = _size; i < n; i++)
				{
					_str[i] = ch;
				}
				_size = n;
				_str[_size] = '\0';
			}
			else
			{
				_str[n] = '\0';
				_size = n;
			}
		}
		void push_back(char ch)//追加字符
		{
			if (_size == _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
				reserve(newcapacity * 2);
			}
			_str[_size] = ch;
			//_size虽然是有效字符个数，但在字符串中的起始位置是0，所以_size的位置是最后一个有效字符的的下一个位置（\0)
			_size++;
			_str[_size] = '\0';

		}

		void append(const char* str)//追加字符串
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			// strcat(_str, str);
			strcpy(_str + _size, str);//通过strcpy把str拷贝到_str的末尾，携带str的斜杠0，所以不用考虑斜杠0
			_size += len;

		}
		string& insert(size_t pos, char ch)//插入字符
		{
			assert(pos <= _size);
			//扩容
			if (_size == _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
				reserve(newcapacity * 2);
			}
			//挪动数据
			size_t end = _size + 1;
			//无符号版本
			while (end > pos)
			{
				_str[end] = _str[end - 1];
				--end;
			}
			//while ((int)end >=(int) pos)//无符号相比或相减，没有负数，永远大于0-会进入死循环;size_t和int类型同时在操作符两边，会造成整形提升-小的往大的提升（int->size_t）
			//{
			   // _str[end+1] = _str[end];
			   // --end;
			//}
			//插入数据
			_str[pos] = ch;
			_size++;

			//返回
			return *this;

		}

		string& insert(size_t pos, const char* str)//插入字符串
		{
			size_t len = strlen(str);
			//扩容

			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}

			//挪动数据
			// 有符号版
			/*int end = _size;
			while (end >=(int) pos)
			{
				_str[end + len] = _str[end];
				--end;
			}*/
			//无符号版
			size_t end = _size + 1;
			while (end > pos)
			{
				_str[end + len - 1] = _str[end - 1];
				--end;
			}
			//插入字符串
			strncpy(_str + pos, str, len);
			_size += len;
			return *this;
		}

		string& erase(size_t pos, size_t len = npos)//删除
		{
			assert(pos < _size);
			if (len == npos || pos + len >= _size - pos)
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
		size_t find(char ch, size_t pos = 0)const
		{
			assert(pos < _size);
			while (pos < _size)
			{
				if (_str[pos] == ch)
				{
					return pos;
				}
				++pos;
			}
			return npos;
		}
		//字符串算法kmp
		size_t find(const char* str, size_t pos)const
		{
			assert(pos < _size);
			const char* ptr = strstr(_str, str);
			if (ptr == nullptr)
			{
				return npos;//没找到
			}
			else
			{
				return ptr - _str;//指针相减得之间个数-pos的位置
			}
		}


		void clear()
		{
			_size = 0;
			_str[0] = '\n';
		}
		string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}

		string& operator+=(const char* str)
		{
			append(str);
			return *this;
		}

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		const static size_t npos = -1;//c++允许const static整数可以定义在类里

	};

	ostream& operator<<(ostream& out, const string& s)
	{
	
		for (size_t i = 0; i <s.size(); i++)
		{
			out << s[i];
		}
		return out;
	}

	//istream& operator>>(istream& in,string& s)
	//{
	//	char ch = in.get();
	//	while (ch != ' ' && ch != '\0')
	//	{
	//		s += ch;
	//		ch = in.get();
	//	}
	//	return in;
	//}

	istream& operator>>(istream& in, string& s)
	{
		s.clear();
		
		char buff[128] = {'\0'};
		size_t i = 0;
		char ch = in.get();
		while (ch != ' ' && ch != '\n')
		{
			if (i == 127)
			{//满了
				s += buff;
				i = 0;
			}
			buff[i++] = ch;
			ch = in.get();

		}
		if (i > 0)
		{
			buff[i] = '\0';
			s += buff;
		}
		return in;
	}

	void test_str5()
	{
	/*	string s1="hello world";
		cin >> s1;
		cout << s1 << endl;*/
		string s1 = ("hello world");
		
		string s2 = s1;
		cout << s1 << s2 << endl;
	}
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

	//void test_str1()
	//{
	//	string st1("hello world");
	//	cout <<st1.c_str() << endl;

	//	st1.push_back('K');
	//	cout << st1.c_str() << endl;
	//	st1 += '!';
	//	cout << st1.c_str() << endl;
//		for (size_t i = 0; i<st1.size(); i++)
//		{
//			st1[i]++;
//			
//		}
//		cout << st1.c_str() << endl;
//		string::iterator it1 = st1.begin();
//		while (it1 != st1.end())
//		{
//			(*it1)--;
//			it1++;
//	}
//		cout << st1.c_str() << endl;
//	
//		for (auto ch : st1)
////编译器规定范围for底层依靠iterator，没有迭代器就不能跑；就算是换成Begin()都不能跑
//		{
//			cout << ch << ' ';
//		}
//		cout << endl;
//	}
//void test_str2()
//{
//	string st1("hello world");
//	cout << st1.c_str() << endl;
//	cout << st1.size() << endl;
//	cout << st1.capacity() << endl;
//	/*st1.push_back('K');
//	cout << st1.c_str() << endl;
//	cout << st1.size() << endl;
//	cout << st1.capacity() << endl;
//	st1 += '!';
//	cout << st1.c_str() << endl;*/
//	st1.append("hai");
//	cout << st1.c_str() << endl;
//	cout << st1.size() << endl;
//	cout << st1.capacity() << endl;
//	st1 += "haihaihai";
//	cout << st1.c_str() << endl;
//	cout << st1.size() << endl;
//	cout << st1.capacity() << endl;
//}

//void test_str3()
//{
	//string s1 = "";
	//s1 += "rrt";
	/*string s2="helloworld";
	s2.resize(3, 'x');
	cout << s2.c_str() << endl;*/
	//cout << s2.c_str() << endl;
	//s2 += "ppt";
	//cout << s2.c_str() << endl;
	//s2.insert(0, 'r');
	//cout << s2.c_str() << endl;
	//s2.insert(0, "SSR");
	//s2.erase(2, 3);
	//cout << s2.c_str() << endl;
	//cout << s2.find('d', 1) <<" " << s2.find("world", 2) << endl;
//}
//void  test_string7()
//{
//	string s1="helloworld";
//	cout << "s1:" << s1.c_str() << endl;
//	cout << "s1.size:" << s1.size() << endl;
//	cout << "s1.capacity:" << s1.capacity() << endl;
//	s1.resize(5);
//	cout << "s1:" << s1.c_str() << endl;
//	cout << "s1.size:" << s1.size() << endl;
//	cout << "s1.capacity:" << s1.capacity() << endl;
//	string s2 = "helloworld";
//	s2.resize(100,'x');
//	cout << "s2:" << s2.c_str() << endl;
//	cout << "s2.size:" << s2.size() << endl;
//	cout << "s2.capacity:" << s2.capacity() << endl;
//}
}