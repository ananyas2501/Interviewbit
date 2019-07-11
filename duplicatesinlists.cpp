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
    
   

    
        while(temp->next!=NULL)
        {
            if(temp->val==temp->next->val)
            {
                ListNode *x= temp->next->next;
                free(temp->next);
                temp->next=x;
            }
            else
            {
                temp=temp->next;
            }
        }
        
        
        return A;
    

    
}
