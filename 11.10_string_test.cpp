#pragma
#include<iostream>
#include<string>
using namespace std;
typedef basic_string<char> string;

//void test_string1()
//{
//	string s1;//�޲εĹ���
//	string s2("�㶫ʡ��ݸ��");//���εĹ���
//	s2 += "����������";//���������
//	string s4(10, '*');//��10��*�ַ�����s4
//	cout <<"s2:  " << s2 << endl;
//	cout <<"s4:  " << s4 << endl;
//
//	string s5(s2);//��������
//	string s6 = s2;//��ֵ����
//	cout << "s5:  " << s5 << endl;
//	cout << "s6:  " << s6 << endl;
//	string s7("hello world",5);//��hello world��ǰ����ַ�����s7
//	cout << "s7:  " << s7 << endl;
//	string s8(s7, 2, 3);//��s7�ĵڶ����ַ���ʼ������ȡ�������ַ���ʼ��s8
//	string s9(s7, 2, 30);//����Ҫ��ĳ��ȴ�������Դ�ַ�����Ҳ���ᱨ��
//	string s10(s7, 2);//����Ҫ��ʼ���ĳ���Ҳ����ȱʡֵ��ʼ��
//
//	cout << "s8:  " << s8 << endl;
//	cout << "s9:  " << s9 << endl;
//	cout << "s10:  " << s10 << endl;
//}
//void  test_string2()
//{
//	string s1("1234");
//	cout << "��ʼs1��" << s1 << endl;
	//����ȫ�����ֲ���1
	//1.���±꡾��	
	//for (size_t i = 0; i < s1.size(); ++i)
	//{
	//	s1[i]++;
	//}
	//cout << "���±�++���s1��" << s1 << endl;
	////2.��Χfor
	//for (auto& ch : s1)
	//{
	//	ch++;
	//}
	//cout << "��Χfor++���s1:" << s1 << endl;
	////��תs1
	//size_t begin = 0, end = s1.size()-1;
	//while (begin < end)
	//{
	//	swap(s1[begin++], s1[end--]);
	//}
	//cout << "��ת���s1:" << s1 << endl;


	//��������������
	//string::iterator it1 = s1.begin();//��һ���ַ���λ��
	//while (it1 != s1.end())//���һ���ַ�����һ��λ��
	//{
	//	*it1 += 1;//��1
	//	it1++;//������λ�ü�1
	//}
	// it1 = s1.begin();
	//while (it1 != s1.end())
	//{
	//	cout << *it1 << " ";
	//	it1++;
	//}
	//cout << endl;

	//string::reverse_iterator rit1 = s1.rbegin();
	//cout << "���������" << endl;
	//while (rit1 != s1.rend())
	//{
	//	
	//	cout << *rit1 << " ";
	//	++rit1;

	//}
	//cout << endl;

	//auto�Ƶ����ʹﵽ�Ż�����
	//auto rit1 = s1.rbegin();
	//cout << "auto" << endl;
	//while (rit1 != s1.rend())
	//{

	//	cout << *rit1 << " ";
	//	++rit1;

	//}
	//cout << endl;

	////const ������-ֻ������д
	//cout << "const_iterator" << endl;
	//string::const_iterator cit1 = s1.cbegin();
	//while (cit1 != s1.cend())
	//{
	//	cout << *cit1 << " ";
	//	++cit1;
	//}
	//cout << endl;

	//const_reverse ������-ֻ������д
//	cout << "const_reverse_iterator" << endl;
//	string::const_reverse_iterator crit1 = s1.rbegin();
//	while (crit1 != s1.rend())
//	{
//		cout << *crit1 << " ";
//		++crit1;
//	}
//	cout << endl;
//
//
//}
//void  test_string3()
//{
//	string s1("hello world");
//	cout << s1 << endl;
//	cout << s1.size() << endl;//�����ַ������򳤶�
//	cout << s1.length() << endl;//�����ַ������򳤶�
//	cout << s1.capacity() << endl;//���ؿռ��ܴ�С
//	//cout << s1.max_size() << endl;//�������ռ��С-42�ھ�ǧ��
//	s1.clear();//�����Ч�ַ�
//	cout << s1 << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//}
//void TestPushBack()
//{
//	string s;
//	s.reserve(500);
//	size_t sz = s.capacity();
//	cout << "capacity changed: " << sz << '\n';
//	cout << s.size() << endl;
//	cout << "making s grow:\n";
//	for (int i = 0; i < 1000; ++i)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}

//void test_string4()
//{
//	string s1("hello world");
//	cout << "ԭ�����ַ���" << endl;
//	cout << s1 << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	string s2("hello world");
//	s2.resize(5);
//	cout << "n<�ַ�������" << endl;
//	cout << s2 << endl;
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl;
//
//	string s3("hello world");
//	s3.resize(14,'x');
//	cout << "�ַ�������<n<capacity" << endl;
//	cout << s3 << endl;
//	cout << s3.size() << endl;
//	cout << s3.capacity() << endl;
//
//	string s4("hello world");
//	s4.resize(20);
//	cout << "n>capacity" << endl;
//	cout << s4 << endl;
//	cout << s4.size() << endl;
//	cout << s4.capacity() << endl;
//}
void  test_string5()
{
	string s1("hello world");
	cout << s1 << endl;
	s1.push_back('!');
	cout << s1 << endl;
	s1.append("how are you");
	cout << s1 << endl;
	s1 += " i am fine,and you";
	cout << s1 << endl;
}
int main()
{
	//test_string1();
	//test_string2();
	//test_string3();
	 //TestPushBack();
	//test_string4();
	test_string5();
	return 0;
}

