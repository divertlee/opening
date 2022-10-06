#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    char s[] = "we are happy.";
    //计算空格个数
    int len = strlen(s);//没有计算到"\0"
    int count = 0;
    for (int i = 0; i < len; i++)//遍历字符串
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    //开新空间
    int newlen = len + count * 2;
    char* ans = (char*)malloc(sizeof(char) * newlen + 1);//+1给斜杠0留空间
    for (int i = len - 1, j = newlen - 1; i >= 0; i--, j--)
    {
        if (s[i] != ' ')
        {
            ans[j] = s[i];
        }
        else
        {
            ans[j--] = '0';
            ans[j--] = '2';
            ans[j] = '%';
        }
    }
    ans[newlen] = '\0';
    for (int i = 0; i < newlen; i++)
    {
        printf("%c ",ans[i]);
    }
}

//int main()
//{
//    char s[] = "we are happy.";
//    //统计空格数量
//    int count = 0;
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        if (s[i] == ' ') {
//            count++;
//        }
//    }
//
//    //为新数组分配空间
//    int newLen = len + count * 2;
//    char* result = malloc(sizeof(char) * newLen + 1);
//    //填充新数组并替换空格
//    for (int i = len - 1, j = newLen - 1; i >= 0; i--, j--) {
//        if (s[i] != ' ') {
//            result[j] = s[i];
//        }
//        else {
//            result[j--] = '0';
//            result[j--] = '2';
//            result[j] = '%';
//        }
//    }
//    result[newLen] = '\0';
//
//    for (int i = 0; i < newLen; i++)
//    {
//        printf("%c ", result[i]);
//   }
//}