
#include<iostream>
#include<assert.h>
#include<vector>
#include<string.h>
using namespace std;
#include"vector.h"
//void test1()
//{
//	Vect::vector<int> v;
//
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	for (auto ch : v)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//}

//void test2()
//{
//	Vect::vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	for (auto ch : v)
//			{
//				cout << ch << " ";
//			}
//			cout << endl;
//			v.resize(8,-1);
//			for (auto ch : v)
//					{
//						cout << ch << " ";
//					}
//					cout << endl;
//
//					v.resize(2);
//					for (auto ch : v)
//					{
//						cout << ch << " ";
//					}
//					cout << endl;
//}

void test3()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	for (auto ch : v)
	{
		cout << ch << " ";
	}
	cout << endl;
		
	/*v.pop_back();
	v.pop_back();

	for (auto ch : v)
		{
		cout << ch << " ";
		}
		cout << endl;*/

		v.insert(v.begin()+2, 200);

		for (auto ch : v)
		{
			cout << ch << " ";
		}
		cout << endl;
}

void test4()
{
	vector<int> v;
		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);

		for (auto ch : v)
					{
						cout << ch << " ";
					}
					cout << endl;

					vector<int>::iterator it1 = find(v.begin(), v.end(), 20);
					if (it1 != v.end())
					{
						v.insert(it1, 90);
					}
				/*	(*it1)++;*///迭代器失效（野指针）-it1传形参給insert找到位置并完成插入后，此时所在空间为新空间，而it1所指向的空间为旧空间---改变it1会越界
					//就算不扩容也不要这样用
					for (auto ch : v)
					{
						cout << ch << " ";
					}
					cout << endl;
}

int main()
{
	//test1();
	//test2();
	//test3();
	test3();
	
	
	return 0;
}




//void testv1()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//
//	v.insert(v.begin(), v1.begin()+1, v1.end() );
//
//
//	for (auto ch : v)
//	{
//		cout << ch << " ";
//	}
//	cout << endl; 
//
//}


//int main()
//{
//	testv1();

	/*vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	for (auto ch : v)
	{
		cout <<ch <<" "  ;
	}
	cout << endl;
	v.assign(v.begin(), v.end());
	

	for (auto ch : v)
	{
		cout <<ch <<" ";
	}
	cout << endl;*/
	//vector<int> v;
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);
	//v.push_back(4);
	//v.push_back(5);
	//for (size_t i = 0; i < v.size(); i++)
	//{
	//	cout << v[i] << ' ';//报错会断言---运算符重载 --release下断言会失效
	//	//cout<<v.at(i)<<' ';//报错会抛异常---成员函数
	//}
	//cout << endl;

//	return 0;
//}