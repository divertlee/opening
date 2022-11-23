#include<iostream>
using namespace std;
#include<vector>

int main()
{

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';//报错会断言---运算符重载 --release下断言会失效
		//cout<<v.at(i)<<' ';//报错会抛异常---成员函数
	}
	cout << endl;

	return 0;
}


