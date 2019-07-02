int Solution::sqrt(int A) {
    if(A==0)return 0;
    if(A==1) return 1;
//     int b=1, e=A;
//     int m=(b+e)/2;
//     while(m>A/m)
//     {
//         m=m/2;
//     }
//     int l=m*2;
//   int i=m;
//   //cout<<m<<" "<<l;
//   for(int i=m; i<l; i++)
//   {
//       int k=i+1;
//       if((i*i<=A)&&(k*k>A))
//       {
//       cout<<i<<endl;
//       break;
//       }
//   }
//   return i;
//  if (x == 0 || x == 1)  
//       return x; 
  
    // Do Binary Search for floor(sqrt(x)) 
    int start = 1, end = A, ans;    
    while (start <= end)  
    {         
        int mid = (start + end) / 2; 
  
        // If x is a perfect square 
        if (mid== A/mid) 
            return mid; 
  
        // Since we need floor, we update answer when mid*mid is  
        // smaller than x, and move closer to sqrt(x) 
        if (mid< A/mid)  
        { 
            start = mid + 1; 
            ans = mid; 
        }  
        else // If mid*mid is greater than x 
            end = mid-1;         
    } 
    return ans; 
}

// int binary(int A, int &start, int &end)
// {
   
// }
