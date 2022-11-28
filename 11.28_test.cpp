#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>


int main()
{
	string s1 = "12";//x
	string s2 = "12";//y
	string sum = "";
	int ret = 0;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		for (int j = s2.size() - 1; j >= 0; j--)
		{
			int x = s1[i] - '0';
			int y = s2[j] - '0';
			int max = x * y+ret;
			sum.push_back('0' + (max % 10));
			ret = max / 10;
		}
	}
	
	reverse(sum.begin(), sum.end());
	cout << sum << endl;
	return 0;
}


//int main()
//{
//    string s = "hello world";
//    string ret = "";
//    int i = 0;
//    while (i < s.size())
//    {
//        int start = i;
//        while (i < s.size() && s[i] != ' ')
//        {
//            i++;
//        }
//        for (int pos = i-1; pos>=start; pos--)
//        {
//            ret.push_back(s[pos]);
//        }
//        if (i<s.size() && s[i] == ' ')
//        {
//            ret.push_back(' ');
//            i++;
//        }
//    }
//    cout << ret << endl;
//    return 0;
//
//}
//int main()
//{
//    string s = "hello world";
//    string::iterator it1 = s.begin();
//    int cur = 0;
//    while (it1 <= s.end())
//    {
//        if (*it1 == " ")
//        {
//
//        }
//    }
//    return 0;
//}


//int main()
//{
//	vector<int> v;
//	v.resize(5);
//	for (int i = 0; i < v.size(); i++)
//	{
//		v[i] = i;
//	}
//
//	for (auto ch : v)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//
//	reverse(v.begin(), v.end());
//
//	for (auto ch : v)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//
//	return 0;
//
//}


//int main()
//{
//	string num1 = "2";
//	string num2 = "233";
//    int i = num1.size() - 1;
//    int j = num2.size() - 1;
//    int ret = 0;//存储进位
//    int men = 0;
//    while (i >= 0 || j >= 0 || ret != 0)
//    {
//        int x = 0;
//        int y = 0;
//        i >= 0 ? x = num1[i] - '0' : 0;
//        j >= 0 ? y = num2[j] - '0' : 0;
//
//        int sum = x + y + ret;
//        men = (sum % 10);
//        ret = sum / 10;
//        i--;
//        j--;
//    }
//	
//
//	return 0;
//}

//bool chkParenthesis(string A, int n) {
//    if (A.size() == 0)//空字符串直接返回0
//    {
//        return false;
//    }
//
//    if (A.size() % 2 == 1)//不是2的倍数也返回0
//    {
//        return false;
//    }
//
//    vector<char> stack;
//    
//    for (int i = 0; i < A.size(); i++)
//    {
//        if (A[i] == '(')//遇到左括号进栈
//        {
//            stack.push_back(A[i]);
//        }
//        else if (A[i] == ')')//遇到右括号看stack里面有没有左括号
//        {
//            if (stack.size() == 0)//如果没有则错误
//            {
//                return false;
//            }
//            stack.pop_back();
//        }
//        else
//        {
//            return false;//如果遇到不是括号则错误
//        }
//    }
//
//    if (stack.size() == 0)
//    {
//        return true;//匹配完则true否则false
//    }
//    else
//    {
//        return false;
//    }
//}
//
//
//int main()
//{
//    string s1 = "((aa))";
//
//    int ret= chkParenthesis(s1,s1.size());
//
//    cout << ret << endl;
//    return 0;
//}
















// int fi(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//
//	return fi(n-1) + fi(n-2);
//}
//
//
//
//
//int Fibonacci(int a)
//{
//	int n = 0;
//	int F = fi(n);
//	while (F < a)
//	{
//		n++;
//		F = fi(n);//一直找到大于或等于a的斐波那契数
//	}
//
//
//	if (a == fi(n))//如果是斐波那契数就返回0
//	{
//		return 0;
//	}
//	
//	
//		int x = (a - fi(n-1));
//		int y = (fi(n ) - a);
//		return (x < y ? x : y);
//	
//
//}
//
//int main()
//{
//
//	int a = 0;
//	cin >> a;
//	int ret = Fibonacci(a);
//
//	cout << ret << endl;
//	return 0;
//}