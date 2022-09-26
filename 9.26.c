


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
    int sum = sum1 + sum2;//求出总和
    int* a = (int*)malloc(sizeof(int) * sum);//创建能装下两个链表的数组
    for (int i = 0; i < sum1; i++)//把l1的值存到数组a[0,num1-1]中
    {
        a[i] = l1->val;
        l1 = l1->next;
    }
    for (int i = sum1; i < sum; i++)//把l2的值存到数组a[num1,num-1]中
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