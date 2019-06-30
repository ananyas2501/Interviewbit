int fact(int x)
{
    if(x==1)return 1;
    return x*fact(x-1);
}

int max(int a, int b)
{
    return(a>b)?a:b;
}

long long int factorial(int a)
{
    if (a==0) return 1;
    long long int sol=1;
    for(int i=1; i<=a; i++)
    {
        sol=sol*i;
    }
    return sol;
}
int Solution::uniquePaths(int A, int B) {
    int n= A+B-2;
    int big, small;
//   long long int f1= factorial(n);
//      long long int f2= factorial(A-1);
//      long long int f3= factorial(B-1);
    // cout<<f1<<" "<<f2<<" "<<f3;
    // int ans = factorial(n)/(factorial(A-1)*factorial(B-1));
    if(A>B)
    {
        big=A;
        small=B;
    }
    else
    {
        big=B;
        small=A;
        
    }
    long long int sol=1;
    for(int i=big; i<=n; i++)
    {
        sol=sol*i;
        //cout<<sol<<endl;
    }
   // cout<<sol<<endl;
    long long int answer= sol/factorial(small-1);
    return answer;
}
