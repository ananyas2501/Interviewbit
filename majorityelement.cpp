int Solution::majorityElement(const vector<int> &A) {
    
    for (int i=0; i<A.size(); i++)
    {
        int num =A[i];
        int count=0;
        for (int j=0; j< A.size(); j++)
        {
            if (A[j] == num)
            count++;
        }
         
        if (count > A.size()/2)
        return A[i];
    }
}
