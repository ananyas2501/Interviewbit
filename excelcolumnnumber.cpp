int conversion(char x)
{
    return (int)(x-'A'+1);
}
int Solution::titleToNumber(string A) 
{
    int solution=0;
    for(int i=0; i<A.length(); i++)
    {
        int n=A.length()-i-1;
        char letter= A[i];
        int num=conversion(letter);
        // cout<<num<<endl;
        int x=num*(pow(26,n));
        // cout<<x<<endl;
        solution=solution+x;
    }
    return solution;
    
}

