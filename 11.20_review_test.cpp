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

	//vector<int> v;// ����������
	//int n = 0;//�������
	//int i = 0;
	//cin >> n;//����n������
	//int a_i = 0;
	//for (i = 0; i < 3 * n; i++)
	//{
	//	cin >> a_i;
	//	v.push_back(a_i);//��������
	//}
	//
	//cout << Max(v, n) << endl;
	



	//int a = 10;
	//int* p =& a;
	//;
	//cout << a << endl;
	//string s1("hello wolrd");//�޲ι���
	//string s2("hello world");//�ַ�������
	//string s3(4, 'x');
	//string s4(s2);//��������
	//cout << "hello c++!\n" << endl;
	//string::reverse_iterator it1 =s1.rbegin();
	//auto aut1 = s1.begin();
	//while (aut1 != s1.end())
	//{
	//	cout << *aut1 ;
	//	aut1++;
	//}
	//for (auto ch : s1)//��Χfor
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
//	sort(v.begin(), v.end());//����
////��n��ʼȡ��ȡn ��n+2 n+4
//	for (int i = n; i < 3 * n; i += 2)
//	{
//		sum += v[i];
//	}
//	return sum;
//}