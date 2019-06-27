int max(int a, int b)
{
	int t=(a>b)?a:b;
	// int maxval=(t>c)?t:c;
	return t;
}

// int crossover(int A[], l, m, h)
// {
// 	int left_sum=-999999;
// 	int sum=0;
// 	for (int i=m; i>=1; i--)
// 	{
// 		sum = sum + arr[i]; 
//         if (sum > left_sum) 
//           left_sum = sum; 
// 	}

// 	int right_sum=-999999;
// 	int sum=0;
// 	for (int i=m+1; i<h; i++)
// 	{
// 		sum = sum + arr[i]; 
//         if (sum > right_sum) 
//           right_sum = sum; 
// 	}
// 	    return left_sum + right_sum; 

// }
// int maxArraySum(int A[], int l, int h)
// {
// 	if(l==h)
// 	return A[l];
// 	int m = (l+h)/2;
// 	int sol=max(maxArraySum(A, l,m), maxArraySum(A, m+1,h), crossover(A, l, m, h));
// 	return sol;
// }
int max(int a, int b)
{
	int t=(a>b)?a:b;
	// int maxval=(t>c)?t:c;
	return t;
}
int Solution::maxSubArray(const vector<int> &A) {
    int n= A.size();
    int currmax= A[0];
    cout<<currmax<<" "<<global;
    int global=A[0];

    for (int i=0; i<n; i++)
    {
    	int currmax=max(A[i], currmax+A[i]);
    	if(currmax>global)
    		global = currmax;
    }

    return global;
}