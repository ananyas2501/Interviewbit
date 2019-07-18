int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int i=0;
    int n= A.size();
    while(i<n)
    {
        int x=A[i];
        int next=i+1;
        while(A[i]==A[i+1])
        {
            i++;
        }
        int diff= n-i-1;
    //   cout<<x<<" "<<diff<<" "<<i<<endl;
        if (diff==x) return 1;
        i++;
    }
    if(A[n-1]==0) return 1;
     return -1;
}
