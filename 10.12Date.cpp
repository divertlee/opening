//#include"Date.h"
////.h������Ҫ����ȫ�ֱ�����ȫ�ֺ���������ᵼ�������ظ����´���-
////����취����.h�ļ���static����ȫ�ֱ�����ȫ�ֺ�������ֻ��.h�ļ����֣��������ű�-�����ӣ��������������
//bool Date ::operator==(const Date& d)const //�ж�
//{
//	return _year == d._year
//		&& _month == d._month
//		&& _day == d._day;
//}
//bool Date::operator>(const Date& d) const//�жϴ���
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
//Date& Date:: operator+=(int day)//�ӵ�����
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
//	 Date ret(*this);//��������
//	 ret -= day;
//	 return ret;
//}
// //��������أ�ͨ����������ö�Ӧ�ĺ���
// //�������أ���ͬ������ͬ������������
// Date& Date::operator++()//ǰ��
// {
//	 *this += 1;
//	 return *this;
// }
//
// Date Date::operator++(int)//����++
// {
//	 Date tmp(*this);
//	 *this += 1;
//	 return tmp;
// }
//
// //ǰ��--
// Date& Date:: operator--()
// {
//	 *this-=1;
//	 return *this;
// }
// //����--
// Date Date:: operator--(int)
// {
//	 Date tmp(*this);
//	 *this-=1;
//	 return tmp;
// }
// //����-����
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
//	// //��һ������������thisָ�루Ĭ�ϵģ��ڶ����������ǲ�����cout
// //{
//	// cout << d._year << "��" << d._month << "��" << d._day << "��" << endl;
//	// return cout;
// //}
//
// /*ostream& operator<<(ostream& out, const Date& d)
// {
//	 cout << d._year << "��" << d._month << "��" << d._day << "��" << endl;
//	 return out;
// }*/