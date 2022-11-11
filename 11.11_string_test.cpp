
#define _CRT_SECURE_NO_WARNINGS 1 



#pragma
#include<iostream>
#include<string>
using namespace std;
typedef basic_string<char> string;
#include<assert.h>
//void test_string1()
//{
//	string s1;//无参的构造
//	string s2("广东省东莞市");//带参的构造
//	s2 += "虎门镇炮塔";//运算符重载
//	string s4(10, '*');//以10个*字符构造s4
//	cout <<"s2:  " << s2 << endl;
//	cout <<"s4:  " << s4 << endl;
//
//	string s5(s2);//拷贝构造
//	string s6 = s2;//赋值重载
//	cout << "s5:  " << s5 << endl;
//	cout << "s6:  " << s6 << endl;
//	string s7("hello world",5);//以hello world的前五个字符构造s7
//	cout << "s7:  " << s7 << endl;
//	string s8(s7, 2, 3);//以s7的第二个字符起始，往后取出三个字符初始化s8
//	string s9(s7, 2, 30);//就算要求的长度大于了来源字符串，也不会报错
//	string s10(s7, 2);//就算要初始化的长度也会以缺省值初始化
//
//	cout << "s8:  " << s8 << endl;
//	cout << "s9:  " << s9 << endl;
//	cout << "s10:  " << s10 << endl;
//}
//void  test_string2()
//{
//	string s1("1234");
//	cout << "初始s1：" << s1 << endl;
	//遍历全部数字并＋1
	//1.用下标【】	
	//for (size_t i = 0; i < s1.size(); ++i)
	//{
	//	s1[i]++;
	//}
	//cout << "用下标++后的s1：" << s1 << endl;
	////2.范围for
	//for (auto& ch : s1)
	//{
	//	ch++;
	//}
	//cout << "范围for++后的s1:" << s1 << endl;
	////反转s1
	//size_t begin = 0, end = s1.size()-1;
	//while (begin < end)
	//{
	//	swap(s1[begin++], s1[end--]);
	//}
	//cout << "反转后的s1:" << s1 << endl;


	//迭代器遍历操作
	//string::iterator it1 = s1.begin();//第一个字符的位置
	//while (it1 != s1.end())//最后一个字符的下一个位置
	//{
	//	*it1 += 1;//加1
	//	it1++;//迭代器位置加1
	//}
	// it1 = s1.begin();
	//while (it1 != s1.end())
	//{
	//	cout << *it1 << " ";
	//	it1++;
	//}
	//cout << endl;

	//string::reverse_iterator rit1 = s1.rbegin();
	//cout << "反向迭代器" << endl;
	//while (rit1 != s1.rend())
	//{
	//	
	//	cout << *rit1 << " ";
	//	++rit1;

	//}
	//cout << endl;

	//auto推导类型达到优化代码
	//auto rit1 = s1.rbegin();
	//cout << "auto" << endl;
	//while (rit1 != s1.rend())
	//{

	//	cout << *rit1 << " ";
	//	++rit1;

	//}
	//cout << endl;

	////const 迭代器-只读不可写
	//cout << "const_iterator" << endl;
	//string::const_iterator cit1 = s1.cbegin();
	//while (cit1 != s1.cend())
	//{
	//	cout << *cit1 << " ";
	//	++cit1;
	//}
	//cout << endl;

	//const_reverse 迭代器-只读不可写
//	cout << "const_reverse_iterator" << endl;
//	string::const_reverse_iterator crit1 = s1.rbegin();
//	while (crit1 != s1.rend())
//	{
//		cout << *crit1 << " ";
//		++crit1;
//	}
//	cout << endl;
//
//
//}
//void  test_string3()
//{
//	string s1("hello world");
//	cout << s1 << endl;
//	cout << s1.size() << endl;//返回字符串有序长度
//	cout << s1.length() << endl;//返回字符串有序长度
//	cout << s1.capacity() << endl;//返回空间总大小
//	//cout << s1.max_size() << endl;//返回最大空间大小-42亿九千万
//	s1.clear();//清除有效字符
//	cout << s1 << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//}
//void TestPushBack()
//{
//	string s;
//	s.reserve(500);
//	size_t sz = s.capacity();
//	cout << "capacity changed: " << sz << '\n';
//	cout << s.size() << endl;
//	cout << "making s grow:\n";
//	for (int i = 0; i < 1000; ++i)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}

//void test_string4()
//{
//	string s1("hello world");
//	cout << "原来的字符串" << endl;
//	cout << s1 << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	string s2("hello world");
//	s2.resize(5);
//	cout << "n<字符串长度" << endl;
//	cout << s2 << endl;
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl;
//
//	string s3("hello world");
//	s3.resize(14,'x');
//	cout << "字符串长度<n<capacity" << endl;
//	cout << s3 << endl;
//	cout << s3.size() << endl;
//	cout << s3.capacity() << endl;
//
//	string s4("hello world");
//	s4.resize(20);
//	cout << "n>capacity" << endl;
//	cout << s4 << endl;
//	cout << s4.size() << endl;
//	cout << s4.capacity() << endl;
//}
//void  test_string5()
//{
//	string s2("im ok");
//	string s1("hello world");
//	cout << s1 << endl;
//	s1.push_back('!');
//	cout << s1 << endl;
//	s1.append("how are you");
//	cout << s1 << endl;
//	s1 += " i am fine,and you";
//	cout << s1 << endl;
//	s1 += s2;
//	cout << s1 << endl;
//	s1 += '!';
//	cout << s1 << endl;
//}
//void test_string6()
//{
//	
//	string s1;
//	if (s1.empty())
//	{
//		cout << "string s1 is  empty!" << endl;
//	}
//	else
//	{
//		cout << "string s1 is not empty!" << endl;
//	}
//
//	
//}

//void  test_string7()
//{
//	string s1(100, 'A');
//	cout << "s1.size:" << s1.size() << endl;
//	cout << "s1.capacity:" << s1.capacity() << endl;
//	s1.resize(1000);
//	cout << "s1.size:" << s1.size() << endl;
//	cout << "s1.capacity:" << s1.capacity() << endl;
//	s1.shrink_to_fit();
//	cout << "s1.size:" << s1.size() << endl;
//	cout << "s1.capacity:" << s1.capacity() << endl;
//}
//void  test_string8()
//{
//	string s1("hello world");
//	cout << s1 << endl;
//	s1.insert(0, "keep coding");//在下标为0的位置插入keep coding
//	cout << s1 << endl;
//	s1.erase(11, 5);//在下标为11的位置往后删除5个字符
//	cout << s1 << endl;
//	s1.erase(5);
//	//在下标为5的位置，没给具体个数则以缺省值npos删除，则删完即停止
//	cout << s1 << endl;
//}
//void test_string9()
//{
//	string s1("how are you");
//	cout <<"s1:" << s1 << endl;
//	s1.assign("how old are you");
//	cout << "s1:" << s1 << endl;
//	string s2("how are you");
//	cout << "s2:" << s2 << endl;
//	s2.replace(0, 3, "where");
//	cout << "s2:" << s2 << endl;
//}
//void  test_string10()
//{
//	string s1(" hello world ");
//	cout << s1 << endl;
//	size_t pos = s1.find(' ');
//	while (pos != string::npos)
//	{
//		s1.replace(pos, 1, "%20");
//		pos = s1.find(' ', pos + 3);
//	}
//	cout << s1 << endl;
//}
//void test_string11()
//{
//	//c_str作为指针用-可以打印该test.c文件的内容
//	{
//		string file("test.cpp");
//		FILE* fout = fopen(file.c_str(), "r");
//		assert(fout);
//		char ch = fgetc(fout);
//		while (ch != EOF)
//		{
//			cout << ch;
//			ch = fgetc(fout);
//		}
//		fclose(fout);
//	}
//}
//void test_string12()
//{ 
//	//输入文件名进去，输出文件后缀
//	string file;
//	cin >> file;
//	size_t pos = file.rfind('.');
//	if (pos != string::npos)
//	{
//	//	string suffix = file.substr(pos, file.size() - pos);
//		string suffix = file.substr(pos);//以缺省值输出到结尾
//		cout << suffix << endl;
//	}
//
//}

void test_string13()
{
	string st1;
	getline(cin, st1);
	size_t pos = st1.rfind(" ");
	if (pos != string::npos)
	{
		string st2 = st1.substr(pos);
		cout << st2 << endl;
	}
	
}


int main()
{
	//test_string1();
	//test_string2();
	//test_string3();
	 //TestPushBack();
	//test_string4();
	//test_string5();
	//test_string6();
//	test_string7();
//test_string8();
	//test_string9();
	//test_string10();
	//test_string11();
	//test_string12();
	test_string13();
	return 0;
}

