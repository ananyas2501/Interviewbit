vector<vector<int> > Solution::generateMatrix(int A) {
    
    // int bottom=A.size();
    int top=0;
    int left=0;
    // int right =A[0].size();
    int bottom=A, right=A;
    int direction=0;
     vector <vector <int> > solution(A);
     for(int i=0; i<A; i++)
     {
         solution[i]=vector <int> (A);
     }
    int counter=1;
    while(top<=bottom&&left<=right)
    {
        if(direction==0) //right traversal
        {
            for(int i=left; i<right; i++)
            {
                solution[top][i]= counter;
                counter++;
            }
            top ++;
            direction ++;
        }
        else if(direction==1) //downward traversal
        {
            for(int i=top; i<bottom; i++)
            {
                
                  solution[i][right-1]= counter;
                counter++;
            }
            right--;
            direction ++;
        }
         else if(direction==2) //left traversal
        {
            for(int i=right-1; i>=left; i--)
            {
                
                  solution[bottom-1][i]= counter;
                counter++;
            }
            bottom--;
            direction ++;
        }
        else if(direction==3) //upward traversal
        {
            for(int i=bottom-1; i>=top; i--)
            {
               
                  solution[i][left]= counter;
                  counter++;
            }
            left++;
            direction=0;
        }
    }
    return solution;
}

    
