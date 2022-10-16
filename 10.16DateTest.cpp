#include"Date.h"

void TestDate1()
{
	Date d1(2002, 11, 28);
	d1.Print();
	//Date d2(d1);
	//d2.Print();
	//Date d3(2022, 10, 16);
	//d3.Print();
	//cout << (d3 > d1) << endl;
	//cout << d1 << d2 << endl;
	cin >> d1;
	cout << d1 << endl;
}


int main()
{

	TestDate1();
	return 0;
}