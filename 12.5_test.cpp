
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

//void test3()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	for (auto ch : v)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//		
//	/*v.pop_back();
//	v.pop_back();
//
//	for (auto ch : v)
//		{
//		cout << ch << " ";
//		}
//		cout << endl;*/
//
//		v.insert(v.begin()+2, 200);
//
//		for (auto ch : v)
//		{
//			cout << ch << " ";
//		}
//		cout << endl;
//}

//void test4()
//{
//	vector<int> v;
//		v.push_back(10);
//		v.push_back(20);
//		v.push_back(30);
//		v.push_back(40);
//
//		for (auto ch : v)
//					{
//						cout << ch << " ";
//					}
//					cout << endl;
//
//					vector<int>::iterator it1 = find(v.begin(), v.end(), 20);
//					if (it1 != v.end())
//					{
//						v.insert(it1, 90);
//					}
//				/*	(*it1)++;*///迭代器失效（野指针）-it1传形参給insert找到位置并完成插入后，此时所在空间为新空间，而it1所指向的空间为旧空间---改变it1会越界
//					//就算不扩容也不要这样用
//					for (auto ch : v)
//					{
//						cout << ch << " ";
//					}
//					cout << endl;
//}

//void  test5()
//{
//	Vect::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	//用的算法库里的find，找到则返回目标内容的迭代器，没找到则返回最后一个迭代器
//	Vect:: vector<int>::iterator it1 = find(v.begin(), v.end(), 4);
//	if (it1 != v.end())
//	{
//		v.insert(it1, 40);
//  }
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//void test6()
//{
//	std::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	//用的算法库里的find，找到则返回目标内容的迭代器，没找到则返回最后一个迭代器
//	std::vector<int>::iterator it1 = find(v.begin(), v.end(), 2);
//	if (it1 != v.end())
//	{
//		it1=v.erase(it1);
//	}
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	cout << *(it1) << endl;
//	//如果我们删除的是4，那么返回的迭代器就不在容器的范围内了-迭代器属于野指针-属于越界访问
//	//我们模拟的迭代器虽然有时候不失效，但极端情况会失效，所以建议用完迭代器之后不读也不写
//	//而vs库里面的迭代器不是原生指针，而且会强制检查不给用；用完迭代器之后就不给访问了
//	//Linux系统下虽然不强制检查，但是用了会出问题
//}
//void test7()
//{
//	std::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	vector<int>::iterator it1 = find(v.begin(), v.end(), 2);
//	if (it1 != v.end())
//	{
//		v.erase(it1);
//	}
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	cout << *(it1) << endl;//报错-vs会严格检查不给用
//}
//void test8()
//{
//	Vect::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(6);
//
//
//	//删除所有的偶数正确写法---Linux系统和vs都能运行
//	Vect::vector<int>::iterator it1 = v.begin();
//	while (it1 != v.end())
//	{
//		if (*(it1) % 2 == 0)
//		{
//			it1=v.erase(it1);//这里要更新it1
//
//		}
//		else
//		{
//			it1++;
//		}
//	}
//	
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//
//	cout << endl;
//}
//void test9()
//{
//	Vect::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	for (auto e : v)
//	{
//	 cout << e << " ";
//	}
//	cout << endl;
//	
//	Vect::vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1 = v1;
////赋值的时候如果容量满了会扩容，就算是自己赋值給自己也会扩容；先后经过后者拷贝构造临时对象，拷贝构造时用到迭代器构造临时对象，
////然后构造时尾插，尾插时就验证要不要扩容！
//	
//	for (auto e : v1)
//	{
//		cout << e << " ";
//	}
//
//	cout << endl;
//
//
//}

//void test10()
//{
//		Vect::vector<int> v(10,5);
//
//	for (auto e : v)
//	{
//	 cout << e << " ";
//	}
//	cout << endl;
//}
 
void test11()
{
	Vect:: vector<vector<int>> vv;
	vector<int> v(2,1);
	vv.push_back(v);
	vv.push_back(v);
	vv.push_back(v);
	vv.push_back(v);
	vv.push_back(v);
	vv.push_back(v);
	vv.push_back(v);

	

	for (size_t i = 0; i < vv.size(); i++)
	{
		for (size_t j = 0; j < v.size(); ++j)
		{
			cout << v[j] << " ";
		}
		cout << endl;
	}

}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test8();
	//test7();
	//test9();
	//test10();
	test11();
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