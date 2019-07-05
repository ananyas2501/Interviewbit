vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    int n =A.size();
    if (n==0) return A;
    vector<vector <int> >solution(2*n -1);
    for(int i=0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
           int k= i+j;
           // cout<<k<<endl;
           // cout<<"yaha pe?"<<endl;
           solution[k].push_back(A[i][j]);
           // cout<<A[i][j];
           // cout<<"\n";
           // cout<<"seg kaha aa raha bc?\n";
        }
    }
    return solution;
}
