
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
//				/*	(*it1)++;*///������ʧЧ��Ұָ�룩-it1���βνoinsert�ҵ�λ�ò���ɲ���󣬴�ʱ���ڿռ�Ϊ�¿ռ䣬��it1��ָ��Ŀռ�Ϊ�ɿռ�---�ı�it1��Խ��
//					//���㲻����Ҳ��Ҫ������
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
//	//�õ��㷨�����find���ҵ��򷵻�Ŀ�����ݵĵ�������û�ҵ��򷵻����һ��������
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
//	//�õ��㷨�����find���ҵ��򷵻�Ŀ�����ݵĵ�������û�ҵ��򷵻����һ��������
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
//	//�������ɾ������4����ô���صĵ������Ͳ��������ķ�Χ����-����������Ұָ��-����Խ�����
//	//����ģ��ĵ�������Ȼ��ʱ��ʧЧ�������������ʧЧ�����Խ������������֮�󲻶�Ҳ��д
//	//��vs������ĵ���������ԭ��ָ�룬���һ�ǿ�Ƽ�鲻���ã����������֮��Ͳ���������
//	//Linuxϵͳ����Ȼ��ǿ�Ƽ�飬�������˻������
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
//	cout << *(it1) << endl;//����-vs���ϸ��鲻����
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
//	//ɾ�����е�ż����ȷд��---Linuxϵͳ��vs��������
//	Vect::vector<int>::iterator it1 = v.begin();
//	while (it1 != v.end())
//	{
//		if (*(it1) % 2 == 0)
//		{
//			it1=v.erase(it1);//����Ҫ����it1
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
////��ֵ��ʱ������������˻����ݣ��������Լ���ֵ�o�Լ�Ҳ�����ݣ��Ⱥ󾭹����߿���������ʱ���󣬿�������ʱ�õ�������������ʱ����
////Ȼ����ʱβ�壬β��ʱ����֤Ҫ��Ҫ���ݣ�
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
	//	cout << v[i] << ' ';//��������---��������� --release�¶��Ի�ʧЧ
	//	//cout<<v.at(i)<<' ';//��������쳣---��Ա����
	//}
	//cout << endl;

//	return 0;
//}