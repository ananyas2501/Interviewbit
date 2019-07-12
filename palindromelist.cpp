/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) 
{
    int len=0;
    ListNode *temp=A;
      ListNode *temp1=A;
    stack<int> s;
    while(temp)
    {
        len++;
        s.push(temp->val);
        temp=temp->next;
    }
    int c=0;
    int flag=0;
    while(!s.empty()&&c!=len/2)
    {
        int x=s.top();
        if(x!=temp1->val)
        flag++;
        s.pop();
        temp1=temp1->next;
    }
    if(flag==0)
    return 1;
    else return 0;
    
    
    
    
}
