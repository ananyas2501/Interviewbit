using namespace std;
#include <bits/stdc++.h> 
#include <iostream>
#
int maxDivide(int a, int b)
{
    while(a%b==0)
    {
        a=a/b;
    }
    
    return a;
}
int min(int x, int y, int z)
{
	int t=(x<y)?x:y;
	return(t<z)?t:z;
}
int max(int x, int y, int z)
{
	int t=(x>y)?x:y;
	return(t>z)?t:z;
}


int main() {
	int A,B,C,D;
	cin>>A>>B>>C>>D;
    int maxval=max(A,B,C);
    int minval=min(A,B,C);
    int mid;
    if(A!=maxval && A!=minval)
    {
    	mid=A;
    }
    if(B!=maxval && B!=minval)
    {
    	mid=B;
    }
    if(C!=maxval && C!=minval)
    {
    	mid=C;
    }
   // cout<<"yaha aaye?";
    vector<int> sol(D+1);
    int k=0;
    int iter=minval;
    while(k<D)
    {
        int temp=iter;
        temp=maxDivide(temp, A); //cout<<temp;
        temp=maxDivide(temp, B); //cout<<temp;
        temp=maxDivide(temp, C); //cout<<temp;
        if(temp==1)
            {
            sol[k]=iter;
            cout<<sol[k]<<endl;
            k++;
            }        
            //cout<<"k="<<k<<"\n";
        iter++;
        //cout<<"D="<<D<<endl;
    }
    // return sol;
    
}