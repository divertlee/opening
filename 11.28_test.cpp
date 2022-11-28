#include<iostream>
using namespace std;
#include<string>
#include<vector>


bool chkParenthesis(string A, int n) {
    if (A.size() == 0)//空字符串直接返回0
    {
        return false;
    }

    if (A.size() % 2 == 1)//不是2的倍数也返回0
    {
        return false;
    }

    vector<char> stack;
    
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '(')//遇到左括号进栈
        {
            stack.push_back(A[i]);
        }
        else if (A[i] == ')')//遇到右括号看stack里面有没有左括号
        {
            if (stack.size() == 0)//如果没有则错误
            {
                return false;
            }
            stack.pop_back();
        }
        else
        {
            return false;//如果遇到不是括号则错误
        }
    }

    if (stack.size() == 0)
    {
        return true;//匹配完则true否则false
    }
    else
    {
        return false;
    }
}


int main()
{
    string s1 = "((aa))";

    int ret= chkParenthesis(s1,s1.size());

    cout << ret << endl;
    return 0;
}
















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