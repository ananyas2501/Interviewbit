 bool rec(TreeNode *t1, TreeNode *t2)
    {
        if(t1==NULL && t2 ==NULL)
            return true;
        if(t1==NULL || t2==NULL)
            return false;
        if (t1->val == t2->val) 
            return (rec(t1->left, t2->right) && rec(t1->right, t2->left));
        
        return false;
    }
    
    
    bool isSymmetric(TreeNode* root) {
        
      return rec(root, root);
    }
};
