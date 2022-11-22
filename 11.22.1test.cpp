#include<iostream>
using namespace std;
#include<string>
#include<vector>


int main()
{

	long long n = 0;
	cin >> n;
	vector<long long> v(n);
	long long i = 0;
	while (v[i] != ',')
	{
		cin >> v[i];
		i++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	cout << endl;




	return 0;
}
//int main()
//{
//	string s1;
//	string s2;
//	string s3;
//	cin >> s1;//输入
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] >= '0'  && s1[i] <= '9')//是数字就尾接到s2
//		{
//			s2 += s1[i];
//		}
//		else//不是数字就判断
//		{
//			if (s3.size() < s2.size())
//			{
//				s3 = s2;//把最长的数字串放到s3
//			}
//				s2.clear();
//			
//		}
//		if (s3.size() < s2.size())
//		{
//
//			s3 = s2;//把最长的数字串放到s3
//		}
//}
//	cout << s3 << endl;
//
//
//
//
//
//
//	//for (i = 0; i < s1.size(); i++)
//	//{
//	//	if (s1[i] > 48 && s1[i] < 57)//找到数字串
//	//	{
//	//		max > n ? max : n;
//
//	//		while (i < s1.size()&& s1[i] > 48 && s1[i] < 57)
//	//		{
//	//			s2 += s1[i];
//	//			n++;
//	//			
//	//		}
//	//	}
//	//}
//
//	return 0;
//
//}