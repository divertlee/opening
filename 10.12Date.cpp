//#include"Date.h"
////.h尽量不要定义全局变量和全局函数，否则会导致链接重复导致错误-
////解决办法：在.h文件用static修饰全局变量和全局函数导致只在.h文件出现（不进符号表-不链接）或定义和声明分离
//bool Date ::operator==(const Date& d)const //判断
//{
//	return _year == d._year
//		&& _month == d._month
//		&& _day == d._day;
//}
//bool Date::operator>(const Date& d) const//判断大于
//{
//	if (_year > d._year)
//	{
//		return true;
//	}
//	else if (_year == d._year && _month > d._month)
//	{
//		return true;
//	}
//	else if (_year == d._year && _month == d._month && _day > d._day)
//	{
//		return true;
//	}
//	return false;
//}
//
//
//Date& Date:: operator+=(int day)//加等天数
//{
//	if (day < 0)
//	{
//		return *this -= -day;
//}
//	_day += day;
//	while (_day > GetTureDay(_year, _month))
//	{
//		_day -= GetTureDay(_year, _month);
//		_month++;
//		if (_month == 13)
//		{
//			_year++;
//			_month = 1;
//		}
//	}
//	return *this;
//}
//Date Date::operator+(int day)const
//{
//	Date ret(*this);
//	ret += day;
//	return ret;
//}
//
//Date& Date:: operator-=(int day)
//{
//	if (day < 0)
//	{
//		return *this +=abs(day);
//}
//	_day -= day;
//	while (_day <= 0)
//	{
//		--_month;
//		if (_month == 0)
//		{
//			--_year;
//			_month = 12;
//		}
//		_day += Date::GetTureDay(_year, _month);
//	}
//	return *this;
//}
// Date Date:: operator-(int day)const
// {
//	 Date ret(*this);//拷贝构造
//	 ret -= day;
//	 return ret;
//}
// //运算符重载：通过运算符调用对应的函数
// //函数重载：相同函数不同参数构成重载
// Date& Date::operator++()//前置
// {
//	 *this += 1;
//	 return *this;
// }
//
// Date Date::operator++(int)//后置++
// {
//	 Date tmp(*this);
//	 *this += 1;
//	 return tmp;
// }
//
// //前置--
// Date& Date:: operator--()
// {
//	 *this-=1;
//	 return *this;
// }
// //后置--
// Date Date:: operator--(int)
// {
//	 Date tmp(*this);
//	 *this-=1;
//	 return tmp;
// }
// //日期-日期
// int Date:: operator-(const Date& d) const
// {
//	 Date max = *this;
//	 Date min = d;
//	 int flag = 1;
//	 if (*this<d)
//	 {
//
//		 max = d;
//		 min = *this;
//		 flag = -1;
//	 }
//	 int n = 0;
//	 while (min < max)
//	 {
//		 ++n;
//		 ++min;
//	 }
//
//	 return n * flag;
// }
//	
// //ostream& operator<<(ostream& cout, const Date& d)//
//	// //第一个操作参数是this指针（默认的）第二个参数才是插入流cout
// //{
//	// cout << d._year << "年" << d._month << "月" << d._day << "日" << endl;
//	// return cout;
// //}
//
// /*ostream& operator<<(ostream& out, const Date& d)
// {
//	 cout << d._year << "年" << d._month << "月" << d._day << "日" << endl;
//	 return out;
// }*/