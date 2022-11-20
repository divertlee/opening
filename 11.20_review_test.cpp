#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;




int main()
{
	string s1;
	getline(std::cin, s1);
	string s2;
	cin >> s2;
	size_t fond = s1.find_first_of(s2);
	while (fond != string::npos)
	{
		s1[fond] = '*';
		fond = s1.find_first_of(s2, fond + 1);
	}
	size_t fund = s1.find_first_of('*');
	while (fund != string::npos)
	{
		s1.erase(fund, 1);
		fund = s1.find_first_of('*');
	}
	cout << s1 << endl;
	/*size_t fond = s1.find_first_of(s2);
	while (fond != string::npos)
	{
		s1[fond] = ' ';
		fond = s1.find_first_of(s2,fond+1);
	}*/
	
	cout << s1 << endl;

	//vector<int> v;// 容器放数据
	//int n = 0;//队伍个数
	//int i = 0;
	//cin >> n;//输入n个队伍
	//int a_i = 0;
	//for (i = 0; i < 3 * n; i++)
	//{
	//	cin >> a_i;
	//	v.push_back(a_i);//输入数据
	//}
	//
	//cout << Max(v, n) << endl;
	



	//int a = 10;
	//int* p =& a;
	//;
	//cout << a << endl;
	//string s1("hello wolrd");//无参构造
	//string s2("hello world");//字符串构造
	//string s3(4, 'x');
	//string s4(s2);//拷贝构造
	//cout << "hello c++!\n" << endl;
	//string::reverse_iterator it1 =s1.rbegin();
	//auto aut1 = s1.begin();
	//while (aut1 != s1.end())
	//{
	//	cout << *aut1 ;
	//	aut1++;
	//}
	//for (auto ch : s1)//范围for
	//{
	//	cout << ch ;
	//}
	//cout << endl;
	//s1.resize(5);
	//cout << s1 << endl;
	/*s1.push_back('x');
	cout << s1 << endl;
	s1.append("girl hai");
	cout << s1 << endl;*/
//	s1.insert(0, "tt1");
	/*string file("test.cpp");
	FILE* fout = fopen(file.c_str(), "r");
	assert(fout);
	char ch = fgetc(fout);
	while (ch != EOF)
	{
		cout << ch;
		ch = fgetc(fout);
	}
	cout << endl;*/
	return 0;
}

//long Max(vector<int>& v, const int& n)
//{
//	long sum = 0;
//	sort(v.begin(), v.end());//排序
////从n开始取，取n ，n+2 n+4
//	for (int i = n; i < 3 * n; i += 2)
//	{
//		sum += v[i];
//	}
//	return sum;
//}