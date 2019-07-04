vector<int> Solution::plusOne(vector<int> &A) {
   
    int x=A.size()-1;
    // A.resize(x+2);
    vector <int> C;
    C.push_back(0);
    A[x]=A[x]+1;
    int overflow=0;
    while(A[x]>=10&&x>=0)
    {
        if(x==0) overflow=1;
        A[x]=0;
         x--;
        A[x]+=1;
       
    }
    // for(int i =0; i<A.size(); i++)
    // {
    //     C.push_back(A[i]);
    // }
    if(overflow)
    {
        C[0]=1;
    //      for(int i = A.size(); i>0; i--)
    //  {
    //   A[i]=A[i-1];
    //  }
    //  A[0]=1;
    A.insert(A.begin(),1);
    }
    // else
    // {
    //     C.erase(C.begin()+0);
    // }
    // A.clear();
    // A.clear();
    // A=C;
    return A;
    
    
    
}
