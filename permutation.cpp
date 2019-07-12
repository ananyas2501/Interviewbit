void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}



void  permutation(vector<vector<int> >&sol, int l, int h, vector <int> &answer)
{
    if(l==h)
    {
        sol.push_back(answer);
    }
    else
    {
        for(int i =l; i<=h; i++)
        {
            swap(&answer[i], &answer[l]);
            permutation(sol, l+1, h, answer);
            swap(&answer[i], &answer[l]);
        }
    }
}




vector<vector<int> > Solution::permute(vector<int> &A) {
    
    vector<vector<int> > sol;
     permutation(sol,0, A.size()-1, A);
    return sol;
    
    
}
