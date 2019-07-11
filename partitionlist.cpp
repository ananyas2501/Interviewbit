/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::partition(ListNode* A, int B) {
    
    ListNode *lesshead= new ListNode(0);
    ListNode *morehead= new ListNode(0);
    ListNode *temp=A;
    ListNode *temp2=morehead;
    ListNode *temp1=lesshead;
    
    
    while(temp)
    {
        if(temp->val<B)
        {
            //cout<<temp->val<<endl;
            ListNode *x = new ListNode(temp->val);
            lesshead->next=x;
            lesshead=lesshead->next;
        }
          else
        {
           // cout<<"more"<<temp->val<<endl;
            ListNode *x = new ListNode(temp->val);
            morehead->next=x;
            morehead=morehead->next;
        }
        temp=temp->next;
    }
    
    if(temp1->next!=NULL&&temp2->next!=NULL)
    {
        lesshead->next=temp2->next;
        return temp1->next;
    }
    else if(temp1->next)
    {
        return temp1->next;
    }
    else
    return temp2->next;
    
    
    
    
    
}
