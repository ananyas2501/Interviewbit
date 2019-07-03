
long long int factorial(int n)
{
    if(n==0)return 1;
    long long int r=1;
    for(int i=1; i<=n; i++)
    {
        r=r*i;
    }
    return r;
}

int permutation(string s, int index)
{
    char ch=s[index];
    int x=0;
    for(int i=index+1; i<s.length(); i++)
    {
        if(ch>s[i])
        x++;
        
    }
    // cout<<"for index "<<index<<endl;
    // cout<<"no of alphabets less than" <<ch<<x<<endl;
    return x;
}
int Solution::findRank(string A) {
    int len=A.length()-1;
    long long int rank=0;
    for(int i=0; i<A.length(); i++)
    {
        char ch=A[i];
        int perm= permutation(A,i);
        long long int fact = factorial(len-i);
       // cout<<perm<<endl;
        // cout<<"factorial"<<fact<<endl;
         rank+=perm*fact;
        // cout<<"rank"<<rank<<endl;
        // A.erase(A.begin()+i);
       
        
    }
    rank++;
    return rank%1000003;
    
    
    
}
