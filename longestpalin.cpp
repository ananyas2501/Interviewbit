string Solution::longestPalindrome(string A) {

    int n=A.length();
    int arr[n][n];
    int maxlen=1;
    int start=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=0; i<n; i++)
        {
            arr[i][i]=1;
        }
    for(int i=0; i<n-1; i++)
    {
        if(A[i]==A[i+1])
            {
                start=i;
                arr[i][i+1]=1; maxlen=2;
            }
    }

    for(int k=3; k<=n; k++)
    {
        for(int i=0; i<n-k+1; i++)
        {
            int j=i+k-1;
            if(arr[i+1][j-1]&&A[i]==A[j])
            {
                arr[i][j]=1;
                int len=k;
                if(k>maxlen)
                {start=i;maxlen=k;
                    // cout<<"yaha aaya ye? part2\n"<<"k==="<<k<<endl;
                }
            }
        }
    }
    string x;
   for(int i=start; i<start+maxlen; i++)
   {
       x=x+A[i];
   }
   return x;
}
