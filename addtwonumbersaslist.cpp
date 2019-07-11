/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode *solution= new ListNode(0);
    ListNode *answer=solution;
    ListNode *temp1=A;
    ListNode *temp2=B;
    int carry=0;
    while(temp1 && temp2)
    {
        int sumdigit=temp1->val+temp2->val+carry;
        if(sumdigit<10)
        {
            carry=0;
            solution->val=sumdigit;
            // cout<<solution->val;
            ListNode *temp= new ListNode(0);
            solution->next=temp;
            solution=solution->next;
        }
        else
        {
            carry=1;
            solution->val=sumdigit%10;
            //cout<<solution->val;
            ListNode *temp= new ListNode(0);
            solution->next=temp;
            solution=solution->next;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    while(temp1)
    {
        int sumdigit=temp1->val+carry;
         if(sumdigit<10)
        {
            carry=0;
            solution->val=sumdigit;
            ListNode *temp= new ListNode(0);
            solution->next=temp;
            solution=solution->next;
        }
        else
        {
            carry=1;
            solution->val=sumdigit%10;
             //cout<<solution->val;
            ListNode *temp= new ListNode(0);
            solution->next=temp;
            solution=solution->next;
        }
        temp1=temp1->next;
   
        
    }
     while(temp2)
    {
        int sumdigit=temp2->val+carry;
         if(sumdigit<10)
        {
            carry=0;
            solution->val=sumdigit;
            ListNode *temp= new ListNode(0);
            solution->next=temp;
            solution=solution->next;
        }
        else
        {
            carry=1;
            solution->val=sumdigit%10;
            ListNode *temp= new ListNode(0);
            solution->next=temp;
            solution=solution->next;
        }
             temp2=temp2->next;
    }
    // cout<<carry<<endl;
    ListNode *x=answer;
    if(carry==1)
    {
        // cout<<"you even coming here?";
        solution->val=1;
    }
    // cout<<solution->val;
    while(x->next->next!=NULL)
    {
        x=x->next;
    }
   
    if(solution->val==0&&carry==0)
    {
         x->next=NULL;
        free(solution);
    };
    
    return answer;
}
