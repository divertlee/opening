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
void  test_string2()
{
	string s1("1234");
	cout << "��ʼs1��" << s1<<endl;
	//����ȫ�����ֲ���1
	//1.���±꡾��	
	for (size_t i = 0; i < s1.size(); ++i)
	{
		s1[i]++;
	}
	cout << "���±�++���s1��" << s1 << endl;
	//2.��Χfor
	for (auto& ch : s1)
	{
		ch++;
	}
	cout << "��Χfor++���s1:" << s1 << endl;
	//��תs1
	size_t begin = 0, end = s1.size()-1;
	while (begin < end)
	{
		swap(s1[begin++], s1[end--]);
	}
	cout << "��ת���s1:" << s1 << endl;

}
int main()
{
	//test_string1();
	test_string2();
	return 0;
}

