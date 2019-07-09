int min(int a, int b)
{
    return (a>b)?b:a;
}

int max(int a, int b)
{
    return (a>b)?a:b;
}
int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0;
    int j=0; 
    int k =0;
    int diff=INT_MAX;
    int fin1=0,fin2=0, fin3=0;
    while(i<A.size()&&j<B.size()&&k<C.size())
    {
        int minimum=min(C[k],min(A[i],B[j]));
        int maximum=max(C[k],max(A[i],B[j]));
        int diffcurr= maximum-minimum;
        if(diff>diffcurr)
        {
            diff=diffcurr;
            fin1=i;
            fin2=j;
            fin3=k;
        }
        if (diff == 0) break; 
        if(A[i]==minimum)i++;
        else if(B[j]==minimum)j++;
        else k++;
        
    }
    // cout<<A[fin1]<<B[fin2]<<C[fin3];
    return diff;
}
