int length(string x)
{
    int i=0;
    char  ch=x[i];
    while(ch!=NULL)
    {
        i++;
        ch=x[i];
    }
    return i;
}

int Solution::strStr(const string A, const string B) {
    if(A.length()==0)return -1;
    if(B.length()==0) return -1;
    if(B.length()>A.length()) return -1;
    int flag=0;
    for(int i =0; i<A.length()-B.length()+1; i++)
    {
        
        if(A[i]==B[0])
        {
            //  cout<<i<<endl;
            int k=0; 
            while(A[i+k]==B[k]&&k<B.length())
            {
            //  cout<<B[k]<<endl;
            k++; }
            // cout<<k;
            if(k==B.length())
            {
            // cout<<k;
            flag++;
            return i;
            }
        }
        
    }
    if(flag==0)
    return -1;
    
    
}
