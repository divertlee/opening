#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
#include<stdio.h>
//struct A
//{
//	unsigned a : 19;
//	char ch;
//};

int main()
{
	char a[101] = { 0 };
	char b[101] = { 0 };
	gets_s(a);//�����ַ���
	int k = 0;
	int j = 0;
	for (int i =100; i >=0; i--)//�Ӻ���ǰ¼��b
	{
		if (a[i] == ' ')//�������һ���ո�
		{
			for (j = i + 1; a[j] != ' ' && a[j] != '\0'; j++)
			{
				b[k++] = a[j];
			}
		}
		b[k++] = ' ';//���ʸ����ո�
		

	}

	//a����ĵ�һ������
	for (int i = 0; a[i] != ' ' ; i++)
	{
		b[k++] = a[i];
	}
	printf("%s", b);

	return 0;
}


//int main()
//{

	//int n=0;
	//cin >> n;
	//vector<int> v(n+1);
	//for (int i = 0; i < n; i++)
	//{
	//	cin>>v[i];//�洢����
	//}
	//v[n] = 0;

	//int i = 0;
	//int sum=0;
	//if (n <= 2)
	//{
	//	cout << 1 << endl;
	//}
	//else
	//{
	//	while (i < n)
	//	{
	//		if (i < n && v[i + 1] < v[i])//����С��
	//		{
	//			while (i < n && v[i + 1] <= v[i])
	//			{
	//				i++;
	//			}
	//			i++;
	//			sum++;
	//		}
	//		else if (i < n && v[i + 1] == v[i])
	//		{
	//			while (i < n && v[i + 1] == v[i])
	//			{
	//				i++;
	//			}
	//			i++;
	//			sum++;
	//		}
	//		else
	//		{
	//			while (i < n && v[i + 1] >= v[i])
	//			{
	//				i++;
	//			}
	//			i++;
	//			sum++;
	//		}
	//	}
	//	cout << sum << endl;
	//}
	//string s1;
	//getline(std::cin, s1);//�����ַ���
	//int cur=0;
	//int prev=0;
	//string s2;
	//
	//while (cur<s1.size())
	//{
	//	if (s1[cur] == ' ')
	//	{
	//		prev = cur;
	//	}
	//	cur++;
	//}
	//
	// 
	// 
	//s2 += s1.substr(prev+1, cur);// beijing.
	////cout << s2 << endl;
	//s1.erase(prev, cur-1);
	////cout << s1 << endl;
	//cur = 0;
	//while (cur < s1.size())
	//{
	//	if (s1[cur] == ' ')
	//	{
	//		prev = cur;
	//	}
	//	cur++;
	//}
	//s2 += s1.substr(prev, cur);
	////cout << s2 << endl;
	//s1.erase(prev, cur - 1);
	////cout << s1 << endl;
	//s2 += ' ';
	//s2 += s1;
	//cout << s2 << endl;
	/*cur = 0;
	while (cur < s1.size())
	{
		if (s1[cur] == ' ')
		{
			prev = cur;
		}
		cur++;
	}
	s2 += s1.substr(prev, cur);
	cout << s2 << endl;*/
	/*int n = 0;
	cin >> n;
	char arr[] = { 0 };
	cin.getline(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	int i = 0;
	int j = 0;
	int sum = 0;*/
	//while (i < n)
	//{
	//	while (i<n&&arr[i + 1] < arr[i])//����С
	//	{
	//		i++;
	//	}
	//	if (i > j)//����С��
	//	{
	//		sum++;
	//		j = i;
	//	}
	//	while (j<n&&arr[j + 1] > arr[j])//������
	//	{
	//		j++;
	//	}
	//	if (j > i)
	//	{
	//		sum++;
	//		i = j;
	//	}
	//}
	//cout << sum << endl;
	
	//int length = sizeof(A);
	/*int a = 10;
	int* b = &a;
	*b += 2;
	cout <<  a<< endl;*/
//	return 0;
//}