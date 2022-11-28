#include<iostream>
using namespace std;
#include<string>
#include<vector>


bool chkParenthesis(string A, int n) {
    if (A.size() == 0)//���ַ���ֱ�ӷ���0
    {
        return false;
    }

    if (A.size() % 2 == 1)//����2�ı���Ҳ����0
    {
        return false;
    }

    vector<char> stack;
    
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '(')//���������Ž�ջ
        {
            stack.push_back(A[i]);
        }
        else if (A[i] == ')')//���������ſ�stack������û��������
        {
            if (stack.size() == 0)//���û�������
            {
                return false;
            }
            stack.pop_back();
        }
        else
        {
            return false;//��������������������
        }
    }

    if (stack.size() == 0)
    {
        return true;//ƥ������true����false
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
//		F = fi(n);//һֱ�ҵ����ڻ����a��쳲�������
//	}
//
//
//	if (a == fi(n))//�����쳲��������ͷ���0
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