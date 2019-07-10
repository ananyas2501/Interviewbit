/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *temp=A;
    ListNode *x= new ListNode(0);
    x->next=A;
    ListNode *prev=x;
    //prev->next=x;
    //prev->next=A;
    while(temp)
    {
        while(temp->next!=NULL&&temp->next->val==prev->next->val)
        {
            temp=temp->next;
        }
        
        if(prev->next==temp)
        {
            prev=prev->next;
        }
        else
        {
            prev -> next = temp-> next;
        }
        temp=temp->next;
    }
    
    A=x->next;
    
    
    
    // int flag=0;
    // int lastflag=0;
    // while(temp!=NULL)
    // {
    //      cout<<temp->val<<endl;
    //      int currval=temp->val;
    //      temp=temp->next;
    //      int counter=0;
    //     while(temp!=NULL&&temp->val==currval)
    //     {
    //         // cout<<"woho"<<endl;
    //         counter++;
    //         temp=temp->next;
            
    //     }
    //     cout<<currval<<" : "<<counter<<endl;
    //     //if(temp)cout<<temp->val<<endl;
    //     if(counter==0)
    //   { 
    //     flag++;
    //     sol->val=currval;
    //     sol->next=temp;
    //     cout<<"COUNTER" <<sol->val<<endl;
    //     sol=sol->next;
    //   }
    //   if(currval==sol->val)
    //   temp=temp->next;
      
    // }
    // int last=sol->val;
    
    
    // if(flag==0) A=NULL;
    // cout<<A->val;
    return A;
    
    
}
