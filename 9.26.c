


#include"test.h"

struct ListNode {
    int val;
    struct ListNode* next;
    
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    int sum1 = 0;
    int sum2 = 0;
    while (l1 != NULL)
    {
        sum1++;
        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        sum2++;
        l2 = l2->next;
    }
    int sum = sum1 + sum2;//����ܺ�
    int* a = (int*)malloc(sizeof(int) * sum);//������װ���������������
    for (int i = 0; i < sum1; i++)//��l1��ֵ�浽����a[0,num1-1]��
    {
        a[i] = l1->val;
        l1 = l1->next;
    }
    for (int i = sum1; i < sum; i++)//��l2��ֵ�浽����a[num1,num-1]��
    {
        a[i] = l2->val;
        l2 = l2->next;
    }
    for (int i = 0; i < sum - 1; i++)
    {
        int end = i;
        int tmp = a[end + 1];
        while (end >= 0)
        {
            if (a[end] > tmp)
            {
                a[end + 1] = a[end];
                end--;
            }
            else
            {
                break;
            }

        }
        a[end + 1] = tmp;

    }
    return a;
}