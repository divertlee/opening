#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>


int MoreThanHalfNum_Solution(vector<int>& numbers) {
    // write code here
    if (numbers.size() == 0)
        return 0;

    sort(numbers.begin(), numbers.end());//����

    size_t n = (numbers.size() / 2);//ȡ��λ��
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
//	cin >> s1;//����
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] >= '0'  && s1[i] <= '9')//�����־�β�ӵ�s2
//		{
//			s2 += s1[i];
//		}
//		else//�������־��ж�
//		{
//			if (s3.size() < s2.size())
//			{
//				s3 = s2;//��������ִ��ŵ�s3
//			}
//				s2.clear();
//			
//		}
//		if (s3.size() < s2.size())
//		{
//
//			s3 = s2;//��������ִ��ŵ�s3
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
//	//	if (s1[i] > 48 && s1[i] < 57)//�ҵ����ִ�
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