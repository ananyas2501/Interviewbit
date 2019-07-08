void Solution::sortColors(vector<int> &A) {
    int one=0, zero=0, two=0;
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]==0)
        zero++;
        else if(A[i]==1)
        one++;
        else
        two++;
    }
    for(int i=0; i<zero; i++)
    {
        A[i]=0;
    }
     for(int i=zero; i<one+zero; i++)
    {
        A[i]=1;
    }
     for(int i=one+zero; i<two+one+zero; i++)
    {
        A[i]=2;
    }
    
}
