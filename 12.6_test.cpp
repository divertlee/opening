#pragma once
#include<iostream>

#include<string.h>
using namespace std;
#include"vector.h"


void test1()
{
	Vect:: vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	test1();

	return 0;
}