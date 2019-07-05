// Find the highest index i such that s[i] < s[i+1]. If no such index exists, the permutation is the last permutation.
// Find the highest index j > i such that s[j] > s[i]. Such a j must exist, since i+1 is such an index.
// Swap s[i] with s[j].
// Reverse the order of all of the elements after index i till the last element.

// void swap(int &a, int &b)
// {
//     int t=&a;
//     &a=&b;
//     &b=t;
// }
void Solution::nextPermutation(vector<int> &A) {
    
    int i=A.size()-1, j=0;
    while (i > 0 && A[i - 1] >= A[i]) {
        i--;
    }
    if(i<=0)
    {
        sort(A.begin(), A.end());
        return;
    }
    j=A.size()-1;
     while (A[j] <= A[i - 1]) {
        j--;
    }
    int swap=A[i-1];
    A[i-1]=A[j];
    A[j]=swap;
    j = A.size() - 1;

    while (i < j) {
       int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }
    // return A;
}
    
    

