/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
 TreeLinkNode *getNextRight(TreeLinkNode *p)  
{  
    TreeLinkNode *temp = p->next;  
  
    while (temp != NULL)  
    {  
        if (temp->left != NULL)  
            return temp->left;  
        if (temp->right != NULL)  
            return temp->right;  
        temp = temp->next;  
    }  
 
    return NULL;  
}  
void Solution::connect(TreeLinkNode* A) {
    
    TreeNode *temp;
    if(A==NULL) return;
    
    A->next=NULL;
    
    while(A!=NULL)
    {
        TreeLinkNode *q=A;
        while(q!=NULL)
        {
            if(q->left)
            {
                if(q->right)
                q->left->next=q->right;
                else
                q->left->next=getNextRight(q);
            }
            
            if(q->right)
            q->right->next=getNextRight(q);
            
            q=q->next;
        }
        
        if(A->left)
        A=A->left;
        else if(A->right)
        A=A->right;
        else 
        A=getNextRight(A);
    }
    
}

