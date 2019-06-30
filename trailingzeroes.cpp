int Solution::trailingZeroes(int A) {
    int n=A;
    int count=0;
    for(int div=5; n/div>=1; div*=5)
    {
        count=count+n/div;
    }
    return count;
}
