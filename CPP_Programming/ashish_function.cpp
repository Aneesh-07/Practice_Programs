
struct ListNode
{
    int val;
    struct ListNode *next;
};

#include <bits/stdc++.h>
struct ListNode *addTwoNumbers(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *h1 = (struct ListNode *)malloc(sizeof(struct ListNode)), *p, *l1, *l2, *x;
    p = h1;
    l1 = list1;
    l2 = list2;
    p->val = l1->val + l2->val;
    l1 = l1->next;
    l2 = l2->next;
    p->next = NULL;
    while (l1 != NULL && l2 != NULL)
    {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->val = l1->val + l2->val;
        l1 = l1->next;
        l2 = l2->next;
        temp->next = NULL;
        p->next = temp;
        p=p->next;
    }
    if (l1 == NULL)
        x = l2;
    else
        x = l1;

    while (x != NULL)
    {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->val = x->val;
        x = x->next;
        temp->next = NULL;
        p->next = temp;
        p=p->next;
    }

    x = h1;
    while (x->next != NULL)
    {
        if ((x->val) / 10 != 0)
        {
            (x->val) = (x->val) % 10;
            ((x->next)->val)++;
        }
        x = x->next;
    }

    if ((x->val) / 10 != 0)
    {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->val = 1;
        (x->val) = (x->val) % 10;
        x->next=temp;
        temp->next=NULL;
    }

    return h1;
}