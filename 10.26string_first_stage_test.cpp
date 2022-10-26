#pragma
#include<iostream>
#include<string>
using namespace std;
typedef basic_string<char> string;

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
void  test_string2()
{
	string s1("1234");
	cout << "初始s1：" << s1<<endl;
	//遍历全部数字并＋1
	//1.用下标【】	
	for (size_t i = 0; i < s1.size(); ++i)
	{
		s1[i]++;
	}
	cout << "用下标++后的s1：" << s1 << endl;
	//2.范围for
	for (auto& ch : s1)
	{
		ch++;
	}
	cout << "范围for++后的s1:" << s1 << endl;
	//反转s1
	size_t begin = 0, end = s1.size()-1;
	while (begin < end)
	{
		swap(s1[begin++], s1[end--]);
	}
	cout << "反转后的s1:" << s1 << endl;

}
int main()
{
	//test_string1();
	test_string2();
	return 0;
}

