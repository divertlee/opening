#include<iostream>
using namespace std;
#include<string>
#include<vector>

string solve(int M, int N)
{
	string s1 =  "0123456789ABCDEF";
	int flag = 0;
	if (M < 0)
	{
		M = -M;//如果是负数就先换成正数，后面在换回来
		flag = 1;//标识
	}
	string s ="";
	while (M)
	{
		int yushu = 0;
		 yushu = M % N;
		s = s1[yushu] + s;//字符串相加-一位一位加
		M /= N;
}
	if (flag == 1)
	{
		s = "-" + s;
	}
	return s;
}

int main()
{
	
	
	int M=0, N=0;
	scanf_s("%d%d", &M,& N);
	string s2 = solve(M, N);

	cout << s2 << endl;


	return 0;

}





//int main()
//{
//	vector<int> v;
//	
//	int a = 0;
//	
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> a;
//		v.push_back(a);
//}
//	if ((v[1] + v[3]) == (v[2] - v[0]))
//	{
//		if (  ((v[0] + v[2]) % 2 )== 0
//		   && ((v[1]+  v[3])%2)==0 
//		  &&  ((v[3] - v[1]) % 2) == 0)
//		{
//			cout << (v[0] + v[2]) / 2 << ' ';
//			cout<< (v[1] + v[3]) / 2 << ' ';
//			cout<< (v[3] - v[1]) / 2 << endl;
//		}
//		else
//		{
//			cout<< "No" << endl;
//		}
//		
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//
//	return 0;
//}