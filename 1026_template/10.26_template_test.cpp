#include"Stack.hpp"
 //template<typename S>
 
 //void swap(S& x, S& y)
 //{
	// S tmp = x;
	// x = y;
	// y = tmp;
 //}

 //int main()
 //{
	// int a = 5, b = 7;
	// double c = 3.40, d = 5.20;
	// swap(a, b);
	// swap(c, d);
	// 
	// //swap(a, d);
	// //为什么不能让int类型和double类型互换？推演模板实例化在调用参数之前，这时候推演模板实例化的时候的模板参数只有一个，出现两个参数类型则会报错
	// //还轮不到调用参数的隐式转化（整形提升-数据截断等等）；
	//// 就算是发生参数的隐式类型转化-，参数a会先拷贝出一份临时变量然后再传给函数进行调用x-临时变量具有常性,那么参数x要加const，但参数x引用加const又怎么交换呢？
	// return 0;
 //}





//template<typename T1,typename T2>
//
//T1 Add(const T1& x, const T2& y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//double c = 2.1, d = 9.5;
//cout<<Add(a, d) << endl;
//cout << Add(d, a) << endl;
////强制转化
////cout<< Add((double)a, c) << endl;
//	//cout<< Add(a,(int) d)<<endl;
//	//显示类型转化
//	//cout << Add<int>(a, c) << endl;
//	//cout << Add<double>(a, d) << endl;
//	return 0;
//}


//template<typename T>
//
//T Add(const T& x, const T& y)
//{
//	return x + y;
//}
//int Add(int x, double y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 1, b = 2,  c = 9;
//	double d = 2.1, e = 9.5;
//	int tmp1=Add(a, b);
//	int tmp2=Add(a, c);
//	cout << Add(a, d) << endl;
//
//	
//	return 0;
//}
//void swapi(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//
//void swapd(double& left, double& right)
//{
//	double tmp = left;
//	left = right;
//	right = tmp;
//}
//
//int main()
//{
//	int x = 5;
//	int y = 8;
//	cout <<"交换前" << x << " " << y << endl;
//	swapi(x, y);
//	cout << "交换后" << x << " " << y << endl;
//	double c = 7.5;
//	double d = 4.3;
//	cout << "交换前" << c << " " << d << endl;
//	swapd(c, d);
//	cout << "交换后" << c << " " << d << endl;
//	return 0;
//}




int main()
{
	Stack<int> st1;
	st1.Push(1);
	st1.Push(2);
	
	
	return 0;
}

























































//namespace ikun
//{
//	template<class T>//template-关键字<typename/clas类型名·1>
//	void swap(T& left, T& right)
//	{
//		T temp = left;
//		left = right;
//		right = temp;
//	}
//}
//
//int main()
//{
//	int a = 10, b = 29;
//	swap(a, b);
//	ikun::swap(a, b);
//	return 0;
//}