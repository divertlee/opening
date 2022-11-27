#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<ctype.h>

int maxsum(int i)
{
	if (i == 0)
	{
		return 1;
	}
	else
	{
		int ret = 1;
		while (i--)
		{
			ret *= 10;

		}
		return ret;
	}
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	string str("-1245656");
	vector<int> v;
	
	int flag = 0;
	if (str[0] == '-')
	{
		str.erase(0, 1);//把负号先删掉
		flag = 1;
	}
	if (str[0] == '+')
	{
		str.erase(0, 1);//把正号先删掉
	}
	v.resize(str.size());// 给v开空间
	for (int i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i]) == 0)
		{
			cout<<"0"<<endl;//判断是不是数字，不是数字就返回0
			return 0;
		}
		else
		{
			v[i] = (arr[str[i] - 48]);
		}
	}

	int sum = 0;
	vector<int>::reverse_iterator rit1 = v.rbegin();
	int i = 0;
	while (rit1 != v.rend())
	{
		sum += (maxsum(i) * (*rit1));
		rit1++;
		i++;
	}
	if (flag == 1)
	{
		sum = -sum;
	}
	cout << sum << endl;

	//if (flag == 1)
	//{
	//	cout << '-';
	//}


	//for (auto ch : v)
	//{
	//	cout << ch;
	//}
	//cout << endl;
	return 0;
}

//int StrInt(string str)
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sum = 0;
//	int flag = 0;
//	if (str[0] == '-')
//	{
//		str.erase(0, 1);//把负号先删掉
//		flag = 1;
//	}
//	if (str[0] == '+')
//	{
//		str.erase(0, 1);//把正号先删掉
//	}
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (isdigit(str[i]) == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			sum += (arr[str[i]-'48']);
//		}
//	}
//}



//int main()
//{
//	vector< vector<int> > v;
//	int a = 0, b = 0;
//	cin >> a;
//	cin >> b;
//	v.resize(a);
//	for (int i = 0; i < v.size(); i++)
//	{
//		v[i].resize(b,1);
//}
//	int count = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = 0; j < v[i].size(); j++)
//		{
//			if (v[i][j] == 1)
//			{
//				count++;
//				if (i + 2 < v.size())
//				{
//					v[i + 2][j] = 0;
//				}
//				if (j + 2 < v[i].size())
//				{
//					v[i][j + 2] = 0;
//				}
//			}
//		}
//	}
//	cout << count << endl;
//	return 0;
//}