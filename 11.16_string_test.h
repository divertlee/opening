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
			return _str;//���ص�һ��ָ��λ��
		}
		iterator end()
		{
			return _str + _size;//�������һ����Ч�ַ�����һ��λ��
		}
		//���캯��
		string(const char* str = "")//��ȱʡֵ
	
		{
			_size = strlen(str);//_sizeΪ��Ч�ַ��ĳ���
			_capacity = _size;//capacity��ʼ����Ϊ��Ч�ַ��ĳ���
			_str = new char[_capacity + 1];//��һ���ַ���'\0'
			strcpy(_str, str);//������ȥ
		}
		//��������
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
		////��������-��ͳд������ʵ�ˣ�
		//string(const string& s)
		//{
		//	_str = new char[s._capacity + 1];//��һ���ַ���б��0
		//	strcpy(_str, s._str);//_str����
		//	_size = s._capacity;
		//	_capacity = s._capacity;
		//}
		void swap(string& s)//��������
		{
		    std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}
		//��������-�ִ�д��
		//s2(s1)
		string(const string& s)
			:_str(nullptr)//Ҫ��ʼ��������ָ�룬��Ȼ��Ұָ�룬tmp������ʱ���Խ��ռ���������
			,_size(0)
			,_capacity(0)
		{
			string tmp(s._str);//��s����tmp
			//this->swap(tmp);
			swap(tmp);
		}
		//��ֵ����-��ͳд��
		//string& operator=(const string& s)//������
		//{
		//	if (this != &s)
		//	{
		//		char* tmp = new char[s._capacity + 1];//���¿ռ�
		//		strcpy(tmp, s._str);//����
		//		delete[]_str;//ɾ��_str�ľͿռ�
		//		_str = tmp;//ָ���¿ռ�
		//		_size = s._size;
		//		_capacity = s._capacity;
		//	}
		//	return *this;
		//}
		//��ֵ����-�ִ�д��
		//string& operator=( const string& s)//������
		//{
		//	if (this != &s)
		//	{
		//		string tmp(s);//s����tmp
		//		swap(tmp);//����this��tmpָ��
		//	}
		//	return *this;
		//}
		string& operator=(string& s)//������
		{
			if (this != &s)
			{
				swap(s);
			
			}
			return *this;
		}
		//����һ��ָ������C�ַ�����ָ�볣��, �����뱾string����ͬ
		const char* c_str()const
		{
		return 	_str;
		}
		char &operator[](int pos)const//����������
		{
			return _str[pos];
		}
		void clear()//���������Ч�ַ�
		{
			_str[_size] = '\0';
			_size = 0;
		}
		//reserve����
		void reserve(int n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];//��һ���ַ���б��0
				strcpy(tmp, _str);
				delete[] _str;//�ͷžɿռ�
				_str = tmp;//ָ���¿ռ�
				_capacity = n;
			}
		}
		void resize(int n,char ch='\0')//��chȱʡֵ
		{
			if (n > _size)//n>_size���޸����ݣ������ݻ����
			{
				reserve(n);//���n>_capacity�Ļ�������
				for (size_t i = _size; i < n; ++i)//��ch��������Ч�ַ�����Ŀռ�
				{
					_str[i] = ch;
				}
				_size = n;
				_str[_size] = '\0';
			}
			else
			{
				_str[n] = '\0';//nС��_size Ҫ�޸�����
				_size = n;//_sizeΪn
			}
		}
		void push_back(char ch)//β���ַ�
		{
			if (_size == _capacity)//����
			{
				size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
				reserve(newcapacity);
			}
			_str[_size] = ch;//��ĩβ׷���ַ�fh
			_size++;
			_str[_size] = '\0';//����\0
	}
		//����׷��׷���ַ���
		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)//ֱ������
			{
				reserve(_size + len);
		}
			strcpy(_str + _size, str);//strcpy��str��ͬ\0һ�𿽱������ˣ����Բ���Ҫ����\0
			_size += len;	
		}

		string& operator+=(char ch)//׷���ַ�����
		{
			push_back(ch);
			return *this;
		}
		string& operator+=(const char* str)//׷���ַ�������
		{
			append(str);
			return *this;
		}

		string& insert(size_t pos, char ch)//�����ַ�-
		{
			assert(pos <=_size);

			if (_size == _capacity)//����
			{
				size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
				reserve(newcapacity);
			}
			//Ų������
			//size_t end = _size+1;//�޷��Ű�
			//while (end>pos)//size_t��int����ͬʱ�ڲ��������ߣ��������������-С�������������int->size_t����û�и�������Զ����0-�������ѭ��;
			//{
			//	_str[end] = _str[end-1];
			//	end--;
			//}
			//�з��Ű�
			int end = _size-1;
			while (end >=(int) pos)
			{
				_str[end + 1] = _str[end];
				end--;
			}
			//�����ַ�
			_str[pos] = ch;
			_size++;
			_str[_size] = '\0';
			return *this;
		}
		string& insert(size_t pos, const char* str)//�����ַ���
		{
			//����
			size_t len = strlen(str);//��¼Ҫ�����ַ����ĳ���
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			
			//Ų������
			//(size_t)�޷��Ű�
			//size_t end = _size+1;//+1��\0ҲŲ��_str[_szie+len-1]��λ����
			//while (end > pos)
			//{
			//	_str[end + len-1] = _str[end-1];
			//	end--;
			//}
			//��(int)���Ű�
			int end = _size;//��\0ҲŲ��_str[_size+len]λ����
			while (end >= (int)pos)
			{
				_str[end + len] = _str[end];
				--end;
			}
			//�����ַ���
			strncpy(_str + pos, str, len);
			_size += len;
			return *this;
		}
		//string& erase(size_t pos, size_t len = npos)//��ȱʡֵ
		//{
		//	assert(pos <_size);
		//	if (len == npos || len >=_size - pos)
		//		//û������Ҫɾ�����ַ���������pos֮�������ȫɾ�� Ҫɾ�����ַ�������len����pos֮�����Ч�ַ���������Ҳȫɾ��
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
		size_t find(char ch, size_t pos=0)//Ѱ���ַ�
		{
			assert(pos < _size);
			while (pos<_size)
			{
				if (_str[pos] == ch)
				{
					return pos;//�������±�
				}
					++pos;
			}
			return npos;//û�ҵ�����npos
		}
		size_t find(const char* s, size_t pos = 0)//Ѱ���ַ���
		{
			assert(pos < _size);
			const char* ptr = strstr(_str, s);
			if (ptr == nullptr)
			{
				return npos;//û�ҵ�
			}
			else
			{
				return ptr - _str;//ָ�������ָ��֮���ַ�������-��Ϊpos��λ��
			}
		}
	private:
		 char* _str;
		 size_t _size;
		 size_t _capacity;
		 const static size_t npos = -1;
	};

	ostream& operator<<(ostream& out, const string&s )//������
	{
		for (size_t i = 0; i < s.size(); ++i)
		{
			out << s[i];
			
		}
		return out;
	}
	istream& operator>>(istream& in, string& s)//����ȡ
	{
		s.clear();//�������ȡ֮ǰs�������ַ�����Ҫ���
		char buff[128] = { '\0' };//��һ��ռ�����תվ
		size_t i = 0;
		char ch= in.get();//��chһ��������s���ַ�
		while (ch != ' ' && ch != '\n')//��ch���յ����л��߿ո���ֹͣ
		{
			if (i == 127)
			{
				//����-buffβ�Ӹ�s
				s += buff;
				i = 0;
			}
			//û��ch��������
			buff[i++] = ch;
			ch = in.get();
		}
		if (i>0)//���û����buffû��β�嵽s���棻�ֻ���buff�����Ĳ���β�Ӹ���s����ʣ�µĲ���û��β�Ӹ�s
		{
			buff[i] = '\0';//ҪЯ��\0 !
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
	//	cout << "wrold��λ���ڣ�" << pos << endl;


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
		cout << s3 << endl;*///�пո�Ļ�����ô�ո�����ǲ��ֻ��ڻ������ڣ���Ҫ������ȡһ��
						   
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