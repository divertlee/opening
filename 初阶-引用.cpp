
#include<stdio.h>
//引用

//引用必须初始化-必须说明你是谁的别名
//一旦引用了一个实体，就不能再引用其他实体
//一个变量可以有多个引用
//#include<iostream>
//using namespace std;

//int main()
//{
//	int a = 520;
//	int b = 1314;
//	int& ra = a;//对a进行引用，别名初始化为ra
//	int& rb = a;//对a再一次引用，别名初始化为rb
//	return 0;
//}

//int count1()
//{
//	int n = 10;
//	cout << &n << endl;
//	n++;
//	return n;//出了count1栈帧后n的空间不在了，所以传值（拷贝-需要空间）到寄存器
//}
//
//int& count2()
//{
//	static int n = 10;
//	cout << &n << endl;
//	n++;
//	return n;//出了count2的栈帧后n的空间还在，所以可以用引用找到这块空间
//	
//}
//引用做参数
//减少拷贝，节省空间和时间，提高效率
//修改返回值-输出型参数，函数中修改形参，也修改实参

//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a=" << a << " b=" << b << endl;
//	swap(a, b);
//		cout << "交换后" << endl;
//	cout << "a=" << a << " b=" << b << endl;
//	return 0;
//}
//int main()
//{
//	int ret1 = count1();
//	cout << ret1 << endl;
//	int ret2 = count2();
//	cout << ret2 << endl;
//	return 0;
//}

//const 引用



//void fun(const int& x);//const引用可以减少拷贝，提高效率（不改变参数）-可以接收const和不const的参数（本身不能改变的参数加了const）
//#include<iostream>
//using namespace std;
//void fun(const int& x);//cosnt的引用
//int main()
//{
//	
//	int a = 520;//可读可改
//	int& ra = a;//权限平移（可读可改）-可以
//	const int& rra = a;//权限缩小（可读不可改）-可以
//	const int b = 150;//（可读不可改）
//	//int& rb = b;//权限放大（可读可改）-不可以
//	const int& rrb = b;//权限平移（可读不可改）-可以
//	fun(a);
//	fun(ra);
//	fun(b);
//	fun(rrb);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//权限不变
//	int& ra = a;
//	//指针和引用赋值中，权限可以缩小但是不能放大
//	const int b = 20;
//	//权限放大-不行
//	//int& rb = b;
//	
//	//权限缩小-可以-rra不能修改-a可以修改
//	const int& rra = a;
//	
//	//权限平移-可以
//	const int& rrb = b;
//	fun(a);
//	fun(ra);
//	fun(b);
//	fun(rrb);
//	return 0;
//}


//void fun(const int&(long) x);
//int fun(const int& x)
//{
//	return (double)x;
//}
//
//int main()
//{
//	int a = 10;
//	const int& ra = a;
//	int ret=fun(a);
//	//fun(ra);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int& a = 10;
//	return 0;
//}
//临时变量具有常性-不能修改
//#include<iostream>
//using namespace std;
//int add(const int& a = 10)//引用可以缺省
//{
//	return a;
//}
//
//int main()
//{
//	cout << "add= " << add() << endl;
//	return 0;
//}
//void fun();



//int main()
//{
//	int a = 13;
//	cout << "a= " << a << endl;
//	double b = 13.14;
//	cout << "b= " << b << endl;
//	int i = (int)b;// 强转（类型转换）
//	cout << "i=" << i << endl;
//	//int& t = b;//不可以
//	const int& k = b;
//	//可以，跟上述156行一样，k引用的是针对double类型b创建出来的int类型的临时变量
//	cout << "k= " << k << endl;
//	return 0;
//}



//int main()
//{
//	
//	//cout << add(2) << endl;
//	//int& b = 10;
//	const int& b = 10;//可以引用常量
//
//	double d = 13.14;
//
//	int i = (int)d;//类型转换-系统针对double类型的b创建出一份int类型的临时变量，然后赋给i
//
//	//int& i = d;//不可以
//	const int& i = d;//可以，跟上述95行一样，k引用的是针对double类型d创建出来的int类型的临时变量
//
//	return 0;
//}
//语法上，ra是a的别名，不开空间
//底层实现，引用是使用指针实现的


//int main()
//{
//	int a = 10;
//	cout << "a=" << a << endl;
//	int& ra = a;
//	cout << "ra=" << ra << endl;
//	int* pa = &a;
//	cout << "pa=" << *pa << endl;
//	return 0;
//}
// 
//int main()
//{
//	int a = 10;
//	int& ra = a;
//	ra = 20;
//	int* pa = &a;
//	*pa = 30;
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	cout << "a=" << a << endl;
	double c = 18.75;
	cout << "c=" << c << endl;
	auto b = a;
	cout << "b=" << b << endl;
	auto d = c;
	cout << "d=" << d << endl;
	return 0;
}
//C++11 小语法-语法糖
//int main()
//{
//	int a = 20;
//	auto b = a;
//	//auto-根据a的类型推断b的类型
//	printf("%d %d", a, b);
//	return 0;
//}