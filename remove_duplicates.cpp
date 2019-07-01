int Solution::removeDuplicates(vector<int> &A) {
  if(A.size()==0)
  return 0;
  if( A.size()==1) return A.size(); 
    sort(A.begin(), A.end());
    int rec=A[0]; 
    int unique=0;
    for(int i=1; i<A.size(); i++)
    {
        if(A[0]!=A[i]&&A[i]!=rec)
        {unique++;
        A[unique]=A[i];
        rec= A[i];
        }
    }
    unique++;
    return unique;
}

