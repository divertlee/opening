#include"Date.h"

//void TestDate1()
//{
//	Date d1(1998,3,28);
//	d1.Print();
// Date d2(2020,11,29);//��������
//
// d2.Print();
// Date d3(d2);//�������� һ����ʼ����һ������Ҫ�����Ķ���
// Date d4 = d2;//������Ҳ��ͨ������������
//d1 = d2;//��ֵ���أ����ƿ����� �Ѿ����ڵ���������֮�俽��
//
// d1.Print();
// d1 = d1;
//}

void TestStack()
{
	Stack st1;
	st1.Push(1);
	st1.Push(2);

	Stack st2;
	st2.Push(10);
	st2.Push(20);
	st2.Push(30);
	st2.Push(40);

	st1 = st2;
}
int main()
{
	//TestDate1();
	TestStack();
}