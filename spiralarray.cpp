#include <bits/stdc++.h>
using namespace std;

int main()
{
	int bottom, right;
	cin>>bottom;
	cin>>right;
	int size=bottom*right;
    // int bottom=A.size();
    int top=0;
    int left=0;
    // int right =A[0].size();
    int A[bottom][right];
    int direction=0;
    for(int i=0; i<bottom; i++)
    {
    	for(int j=0; j<right; j++)
    	{
    		cout<<i<<":"<<j<<endl;
    		cin>>A[i][j];
    	}
    }
    vector <int> solution;
    while(top<=bottom&&left<=right)
    {
        if(direction==0) //right traversal
        {
            for(int i=left; i<right; i++)
            {
                solution.push_back(A[top][i]);
                //cout<<A[top][i]<<" ";
            }
            top ++;
            direction ++;
            continue;
        }
        else if(direction==1) //downward traversal
        {
            for(int i=top; i<bottom; i++)
            {
                solution.push_back(A[i][right-1]);
                  //cout<<A[i][right-1]<<" ";
            }
            right--;
            direction ++;
            continue;
        }
         else if(direction==2) //left traversal
        {
            for(int i=right-1; i>=left; i--)
            {
                solution.push_back(A[bottom-1][i]);
                  //cout<<A[bottom-1][i]<<" ";
            }
            bottom--;
            direction ++;
            continue;
        }
        else if(direction==3) //upward traversal
        {
            for(int i=bottom-1; i>=top; i--)
            {
                solution.push_back(A[i][left]);
                  //cout<<A[i][left]<<" ";
            }
            left++;
            direction=0;
        }
    }
    for(int i=0; i<size; i++)
    {
    	cout<<solution[i]<<endl;
    }
}

