/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *temp1=A;
    ListNode *temp2 = B;
    ListNode * ans= new ListNode(0);
    ListNode *sol=ans;
    while(temp1&&temp2)
    {
        if(temp1->val<temp2->val)
        {
            // ListNode *temp= new ListNode(temp1->val);
            // cout<<temp1->val<<endl;
             ans->next=temp1;
             temp1=temp1->next;
             ans=ans->next;
            //  cout<<ans->val;
            //  cout<<endl;
            
        }
        else
        {
             //ListNode *temp= new ListNode(temp2->val);
            //  cout<<temp2->val<<endl;
             ans->next=temp2;
             temp2=temp2->next;
             ans=ans->next;
        }
    }
    while(temp1)
    {
             //ListNode *temp= new ListNode(temp1->val);
             ans->next=temp1;
             temp1=temp1->next;
             ans=ans->next;
    }
    while(temp2)
    {
            //  ListNode *temp= new ListNode(temp1->val);
             ans->next=temp2;
              temp2=temp2->next;
             ans=ans->next;
    }
    sol=sol->next;
    return sol;
    
}
