vector<int> Solution::prevSmaller(vector<int> &A) {
    vector <int> G(A.size());
    G[0]=-1;
    // for(int i=1; i<A.size(); i++)
    // {
    //     int flag=0;
    //     int k=i-1; 
    //     int small=A[i];
    //     int small_index=i;
        // while(k<i)
        // {
           
        //     if(A[i]>A[k])
        //     {
        //         small=A[k];
        //         flag++;
                
        //     }
        //     k++;
        // }
        // while(k>=0)
        // {
        //     if(A[k]<A[i])
        //     {
        //         G[i]=A[k];
        //         flag=1;
        //         break;
        //     }
        //     k--;
        // }
        // if(flag==0)
        // {
        //     G[i]=-1;
        // }
        // else
        // G[i]=small;
        // cout<<G[i];
        // cout<<"reaching here?"<< i<<" iteration"<<endl; 
        
        stack <int> s;
        
        for(int i=0; i<A.size(); i++)
        {
            while(!s.empty()&&A[i]<=s.top())
            {
                s.pop();
            }
          
            if(s.empty())
            G[i]=-1;
            else G[i]=s.top();
              s.push(A[i]);
        }
        
    return G;
}
        
    
        
        
 
    
    
