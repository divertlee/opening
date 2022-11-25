#include <iostream>
#include <vector>
using namespace std;

int  getmax(int a, int b)
{
	int max = 0;
	max = a > b ? a : b;
	return max;

}

int main()
{

	vector<int> v;
	int N = 0;
	cin >> N;
	v.resize(N);//扩容
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	int sum = v[0];
	int maxsum = v[0];
	for (int i = 1; i < N; i++)
	{
		sum = getmax(v[i], sum + v[i]);//当前下标和前和相比，取大的---等于遇到大的刷新
		if (sum > maxsum)
		{
			maxsum = sum;
		}
	}
	cout << maxsum << endl;
	return 0;
}




//int islevel(string s1, string& s2)
//{
//	string tmp = s1;
//	int count = 0;
//	for (int i = 0; i <= s1.size(); i++)
//	{
//		s1.insert(i, s2);
//		string tmp1 = s1;
//		reverse(s1.begin(), s1.end());
//		if (tmp1 == s1)
//		{
//			count++;
//		}
//		s1 = tmp;
//	}
//	return count;
//}
//
//int main()
//{
//
//	string s1;//被插入的字符串
//	string s2;//插入的字符串
//	cin >> s1;
//	cin >> s2;
//	int ret = islevel(s1, s2);
//	cout << ret << endl;
//
//	return 0;
//
//}

//char lzh[] = "abcde";
	//cout << sizeof(lzh) << endl;