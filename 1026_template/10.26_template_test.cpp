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
	// //Ϊʲô������int���ͺ�double���ͻ���������ģ��ʵ�����ڵ��ò���֮ǰ����ʱ������ģ��ʵ������ʱ���ģ�����ֻ��һ����������������������ᱨ��
	// //���ֲ������ò�������ʽת������������-���ݽضϵȵȣ���
	//// �����Ƿ�����������ʽ����ת��-������a���ȿ�����һ����ʱ����Ȼ���ٴ����������е���x-��ʱ�������г���,��ô����xҪ��const��������x���ü�const����ô�����أ�
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
////ǿ��ת��
////cout<< Add((double)a, c) << endl;
//	//cout<< Add(a,(int) d)<<endl;
//	//��ʾ����ת��
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
//	cout <<"����ǰ" << x << " " << y << endl;
//	swapi(x, y);
//	cout << "������" << x << " " << y << endl;
//	double c = 7.5;
//	double d = 4.3;
//	cout << "����ǰ" << c << " " << d << endl;
//	swapd(c, d);
//	cout << "������" << c << " " << d << endl;
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
//	template<class T>//template-�ؼ���<typename/clas��������1>
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