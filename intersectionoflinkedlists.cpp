/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
int count(ListNode *t)
{
    ListNode *temp=t;
    int c=0;
    while(temp)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    
    ListNode *temp1=A;
    ListNode *temp2=B;
    int count1=count(temp1);
    int count2=count(temp2);
    int d=0;
    if(count1>count2)
    {
        d=count1-count2;
        while(d>0)
        {
            temp1=temp1->next;
            d--;
        }
    }
    else
    {
        d=count2-count1;
        while(d>0)
        {
            temp2=temp2->next;
            d--;
        }
    }
    while(temp1&&temp2)
    {
        if(temp1==temp2)
        {
            return temp1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return NULL;
    
}
