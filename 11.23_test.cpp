#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>


int MoreThanHalfNum_Solution(vector<int>& numbers) {
    // write code here
    if (numbers.size() == 0)
        return 0;

    sort(numbers.begin(), numbers.end());//排序

    size_t n = (numbers.size() / 2);//取中位数
    int k = numbers[n];
    size_t count = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == k)
        {
            count++;
        }
    }

    int res = count > (numbers.size() / 2) ? count : 0;
    if (res != 0)
    {
        return k;
   }
    else
    {
        return 0;
    }


};


int main()
{
    vector<int> v;
    v = { 1,2,2,2,3 };

    int res = MoreThanHalfNum_Solution(v);

    cout << res << endl;


	return 0;
}
//int main()
//{
//	string s1;
//	string s2;
//	string s3;
//	cin >> s1;//输入
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] >= '0'  && s1[i] <= '9')//是数字就尾接到s2
//		{
//			s2 += s1[i];
//		}
//		else//不是数字就判断
//		{
//			if (s3.size() < s2.size())
//			{
//				s3 = s2;//把最长的数字串放到s3
//			}
//				s2.clear();
//			
//		}
//		if (s3.size() < s2.size())
//		{
//
//			s3 = s2;//把最长的数字串放到s3
//		}
//}
//	cout << s3 << endl;
//
//
//
//
//
//
//	//for (i = 0; i < s1.size(); i++)
//	//{
//	//	if (s1[i] > 48 && s1[i] < 57)//找到数字串
//	//	{
//	//		max > n ? max : n;
//
//	//		while (i < s1.size()&& s1[i] > 48 && s1[i] < 57)
//	//		{
//	//			s2 += s1[i];
//	//			n++;
//	//			
//	//		}
//	//	}
//	//}
//
//	return 0;
//
//}