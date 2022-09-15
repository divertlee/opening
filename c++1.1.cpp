#include<stdio.h>
#include<stdlib.h>
#include"Stack.h"
#include"Queue.h"
//一般：局部优先原则-
//int a = 10;
//int main()
//{
//	int a = 20;
//	printf("%d\n", a);//20
//	//::域作用限定符
//	printf("%d\n", ::a);//10	
//	return 0;
//}

//局部变量在函数中-函数调用要创建栈帧-调用完后要销毁栈帧-局部变量找不到

//（命名空间域）：：变量，当命名空间域为空格时-为全局域
//namespace baby
//{
//	char name[]="xiaoxinxin";
//	int age = 18;
//}
int baby = 520;
int main()
{
	printf("is %d\n", ::baby);

}

//不影响变量生命周期，只是限定域，编译查找规则
//默认查找规则，先在局部找，再全局找
//局部变量-栈帧上，全局变量-静态区上，malloc-在堆上
//namespace bit
//{
//	int rand = 90;
//	int k = 19;
//
//}
//
//int main()
//{
//	printf("%d\n", rand);
//	printf("%d\n", bit::rand);
//	return 0;
//}


//namespace bit {
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}

//int main()
//{
//	printf("%d\n", bit::Add(2, 3));
//	struct bit::Node cur;
//	return 0;
//}
//命名空间可以嵌套；同级的同一个命名域的内容可以被合并；不同级的相同命名域不会被合并
//namespace N1 {
//	int a = 10;
//	namespace N1 {
//		int b = 90;
//	}
//}
//int main()
//{
//	printf("%d\n", N1::a);
//	printf("%d\n",N1:: N1::b);
//	return 0;
//}

//namespace N1 {
//	int a = 10;
//}
//namespace N1 {
//	int b = 110;
//}
//
//int main()
//{
//	printf("%d %d", N1::a, N1::b);
//	return 0;
//}

//#include<iostream>
////using namespace std;//吧命名墙拆了，用起来更方便,但是会命名冲突-日常练习使用，项目不建议用
////指定展开-部分展开-自己定义的时候避免跟常用重名
//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "hello" << endl;
//
//	//std::cout << "hello world" << std::endl;
//}


//#include<iostream>
//
//using namespace std;
////cout-控制台
////endl-end line
//int main()
//{//可以自动识别类型，对标c的printf和scanf
//	//<<-流插入运算符
//	cout << "hello world" << endl;
//	cout << "hello world" << '\n';
//	int a;
//	double b;
//	char c;
//	//>>流提取运算符
//	cin >> a;
//	cin >> b >> c;
//	cout << a << endl;
//	cout << b << " " <<(int) c << endl;
//
//	return 0;
//}

#include<iostream>

using namespace std;
//缺省参数不能在函数声明和定义同时出现
//全缺省
//void fun(int a = 10, int b = 20, int c = 80)//缺省值（初始化值0-后序不传值则为当前初始化
//{
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
//}
//
//
//int main()
//{
//	fun();
//	fun(1);
//	fun(1, 2 , 3);
//	//fun(1, , 2);必须按从左往右顺序传，不能跳
//	return 0;
//}

//半缺省-只能从右往左连续缺省
//void fun(int a , int b=20 , int c=90)//缺省值（初始化值0-后序不传值则为当前初始化
//{
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
//}
//
//
//int main()
//{
//	fun(1,2);
//
//	return 0;
//}


//int main()
//{//缺省的用法
//	//不知道要插入多少数据
//	bit::ST st1;
//	bit::StackInit(&st1);
////知道要插入100=个数据
//	bit::ST st2;
//	bit::StackInit(&st2, 100);
//
//	return 0;
//}


//函数重载：函数的特殊情况-在同一个作用域中声明几个功能类似的同名函数，这些同名函数的形参列表（参数个数，参数类型，参数顺序）不同，
//用来处理和实现不同的功能类型
//函数重载
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int add(double x, double y)
//{
//	return x + y;
//}
//
//int main()
//{//自动识别类型
//	cout << add(1, 2) << endl;
//	cout << add(1.93, 2.22) << endl;
//
//	return 0;
//}

//void f()
//{
//	cout << "f()" << endl;
//}
//
//void f(int a = 10, int b = 20)
//{
//	cout << "f(a,b)" << endl;
//}
//
//int main()
//{
//	f();//二义性
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& ra = a;
//	//&ra-a的别名-就是a
//	return 0;
//}




