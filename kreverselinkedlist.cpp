/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    
    ListNode *temp=A;
    ListNode *temp1=new ListNode(0);
    ListNode *solution=temp1;
    if(B==1)
        return A;
    while(temp)
    {
        int k=B;
        stack <int> s;
        while(k)
        {
          int v=temp->val;
          s.push(v);
          temp=temp->next;
          k--;
        }
            while(!s.empty())
        {
            ListNode *dummy=new ListNode(s.top());
            s.pop();
            temp1->next=dummy;
            temp1=temp1->next;
        }
        // temp1->next=temp;
    }
    return solution->next;
    
    
}
