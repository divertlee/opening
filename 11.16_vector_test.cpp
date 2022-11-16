#include<iostream>
#include<vector>
using namespace std;

void TestVectorExpand()
{
	size_t sz;
	vector<int> v;
	sz = v.capacity();
	v.reserve(100);
	cout << "making v grow:\n";
	for (int i = 0; i < 100; ++i)//vector也是二倍扩容
	{
		v.push_back(i);
		if (sz != v.capacity())
		{
			sz = v.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
	
}

int main()
{
//	 TestVectorExpand();

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.resize(10,2);
	//cout << v.capacity() << endl;
	//v.reserve(10);
	//cout << v.capacity() << endl;
	//v.reserve(2);//reserve不会缩容-以空间换时间
	//cout << v.capacity() << endl;




	/*for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;*/
	//vector<int>::iterator vt1 = v.begin();
	//while (vt1 != v.end())
	//{
	//	cout << ++*vt1 << " ";
	//	vt1++;
	//}
	//cout << endl;
	//for (auto ch : v)
	//{
	//	cout << ++ch << " ";
	//}
	//cout << endl;

	//vector<string>vstr;//vector<string>初始化的vstr能不能替代string初始化的vstr呢？(1):string初始化的末尾有\0(2):vevtor的对象是泛型；而string对象是字符串
	//string vstr;
}