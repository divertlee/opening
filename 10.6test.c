#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    char s[] = "we are happy.";
    //����ո����
    int len = strlen(s);//û�м��㵽"\0"
    int count = 0;
    for (int i = 0; i < len; i++)//�����ַ���
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    //���¿ռ�
    int newlen = len + count * 2;
    char* ans = (char*)malloc(sizeof(char) * newlen + 1);//+1��б��0���ռ�
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
//    //ͳ�ƿո�����
//    int count = 0;
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        if (s[i] == ' ') {
//            count++;
//        }
//    }
//
//    //Ϊ���������ռ�
//    int newLen = len + count * 2;
//    char* result = malloc(sizeof(char) * newLen + 1);
//    //��������鲢�滻�ո�
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