#include<iostream>
using namespace std;
#include<string>
#include<ctype.h>

int strtoint(char str)
{
    return (str - 48);
}

int maxj(int j)
{
    if (j == 0)
    {
        return 1;
    }
    return 10 * maxj(j - 1);
}

int StrToInt(string str) {
    if (str.size() == 0)
    {
        return 0;
    }
    int flag = 0;
    if (str[0] == '-')
    {
        flag = 1;
        str.erase(0, 1);//是负号就删除，并且用flag标记
    }
    if (str[0] == '+')
    {
        str.erase(0, 1);//是正号就删除
    }
    int sum = 0;
    int j = 0;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        int count = 0;
        count = (strtoint(str[i]));//char转换为int
        if (count<0||count>9)
        {
            return 0;
        }
        else
        {
            if (j == 0)
            {
                sum += count;
                j++;
            }
            else
            {
                sum += ((maxj(j) ) * count);
                j++;
            }
        }

   }
    if (flag == 1)
    {
        sum = -sum;
    }
    return sum;
   
}

int main()
{
    string s1 = "s12345";
    int ret = 0;
    ret = StrToInt(s1);

    cout << ret << endl;
    return 0;
}

