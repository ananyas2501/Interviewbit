int Solution::removeDuplicates(vector<int> &A) {
    int unique=0;
    if(A.size()==1&&A[0]==0) return 1;
for(int i=0; i<A.size();)
{
    int x=A[i];
    int num=i+1;
    int counter=1;
    while(x==A[num])
    {
        num++;
        counter++;
        
    }
    // cout<<counter<<"counter for"<<A[i]<<endl;
    if(counter>=2)
    {
        A[unique]=A[i];
        A[unique+1]=A[i];
        unique+=2;
    }
    else 
    {
        A[unique++]=A[i];
        // unique+=1;
    }
    i=i+counter;
    // cout<<"a[i] i"<< A[i]<<i<<endl;
    //cout<<"uniq" <<unique<<endl;
}
// cout<<unique;
return unique;
}
