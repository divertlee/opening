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
		iterator begin()//������
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		//����Ҫʵ�ִ��εĹ��죬�޲εĹ���
		//"\0"-�������ַ���-����б��0��'\0'-�������ַ��������ΪASCII��ֵ-0��""-������б��0

		string(const char* str = "")//��ȱʡֵ
			//���ﲻ�ó�ʼ���б��õĻ���Ҫ��strlenһ������ʼ�����Ƚ��鷳
		{
			_size = strlen(str);
			_capacity = _size;//���������Ϊ�ַ�����Ч�ַ��ĳ���
			_str = new char[_capacity + 1];//����strnewһ��ռ䣬+1��/0
			strcpy(_str, str);
		}
		//s2(s1)
		string (const string& s)//���
		{
			_str = new char[s._capacity+1];
			_capacity = s._capacity;
			_size = s._size;
			strcpy(_str, s._str);
		}
		//s2=s3
		string& operator = (const string& s)//��ֵ
		{
			if (this != &s)
			{
				char* tmp = new char[s._capacity + 1];
				strcpy(tmp, s._str);
				delete[]_str;//�ͷŵ���s2�ľɿռ�
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
		const char* c_str()const //ͨ��c_str��ӡc��ʽ�ַ���
		{
			return _str;
		}
		size_t size() const//size����
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

		void reserve(int n)//����
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];//+1����/0
				strcpy(tmp, _str);//�Ѿɿռ���ַ����������¿ռ�
				delete[]_str;//�ͷžɿռ�
				_str = tmp;//ָ���¿ռ�
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
		void push_back(char ch)//׷���ַ�
		{
			if (_size == _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
				reserve(newcapacity * 2);
			}
			_str[_size] = ch;
			//_size��Ȼ����Ч�ַ������������ַ����е���ʼλ����0������_size��λ�������һ����Ч�ַ��ĵ���һ��λ�ã�\0)
			_size++;
			_str[_size] = '\0';

		}

		void append(const char* str)//׷���ַ���
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			// strcat(_str, str);
			strcpy(_str + _size, str);//ͨ��strcpy��str������_str��ĩβ��Я��str��б��0�����Բ��ÿ���б��0
			_size += len;

		}
		string& insert(size_t pos, char ch)//�����ַ�
		{
			assert(pos <= _size);
			//����
			if (_size == _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
				reserve(newcapacity * 2);
			}
			//Ų������
			size_t end = _size + 1;
			//�޷��Ű汾
			while (end > pos)
			{
				_str[end] = _str[end - 1];
				--end;
			}
			//while ((int)end >=(int) pos)//�޷�����Ȼ������û�и�������Զ����0-�������ѭ��;size_t��int����ͬʱ�ڲ��������ߣ��������������-С�������������int->size_t��
			//{
			   // _str[end+1] = _str[end];
			   // --end;
			//}
			//��������
			_str[pos] = ch;
			_size++;

			//����
			return *this;

		}

		string& insert(size_t pos, const char* str)//�����ַ���
		{
			size_t len = strlen(str);
			//����

			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}

			//Ų������
			// �з��Ű�
			/*int end = _size;
			while (end >=(int) pos)
			{
				_str[end + len] = _str[end];
				--end;
			}*/
			//�޷��Ű�
			size_t end = _size + 1;
			while (end > pos)
			{
				_str[end + len - 1] = _str[end - 1];
				--end;
			}
			//�����ַ���
			strncpy(_str + pos, str, len);
			_size += len;
			return *this;
		}

		string& erase(size_t pos, size_t len = npos)//ɾ��
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
		//�ַ����㷨kmp
		size_t find(const char* str, size_t pos)const
		{
			assert(pos < _size);
			const char* ptr = strstr(_str, str);
			if (ptr == nullptr)
			{
				return npos;//û�ҵ�
			}
			else
			{
				return ptr - _str;//ָ�������֮�����-pos��λ��
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
		const static size_t npos = -1;//c++����const static�������Զ���������

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
			{//����
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
	////����ԭ�򣺿�����û���루size_t pos, char c)ƥ��Ľӿڣ����Ի�Ĭ��Ϊ����(size_t pos,const char*s)�Ľӿ�-
	//	//'\0'Ϊchar����������Ϊint(0)�����ܱ�ָ��ʶ�� Ȼ��int�����ֲ���תΪconst���Ա���-���s1.insert(3, '\0');
	//	string s1 = "haoma";
	//	cout << s1.size() << endl;//5
	//	cout << s1.capacity() << endl;//5
	//	cout << s1 << endl;
	//	cout << s1.c_str() << endl;//"haoma"
 //       s1.insert(3, '\0');
	//	cout << s1.size() << endl;//6�����size�Ǹ����Լ�ʵ�ֵ��ַ��������б��
	//	cout << s1.capacity() << endl;//20-������

	//	cout << s1 << endl;//"haoma"
	//	cout << s1.c_str() << endl;//"hao"-�ڿ���'/0'�ڵ��ĸ�λ����Ϊ�ַ���ĩβֹͣ��
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
////�������涨��Χfor�ײ�����iterator��û�е������Ͳ����ܣ������ǻ���Begin()��������
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