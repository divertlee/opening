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
		cout << v[i] << ' ';//��������---��������� --release�¶��Ի�ʧЧ
		//cout<<v.at(i)<<' ';//��������쳣---��Ա����
	}
	cout << endl;

	return 0;
}


