#include<bits/stdc++.h>

using namespace std;

bool recurse(int n, int A[], int goal)
{
    if(goal == 0)
    return true;

    if( n ==0 && goal != 0 )
        return false;


    if(A[n-1]>goal)
    return recurse(n-1,A,goal);

    else
    return recurse(n-1,A,goal) || recurse (n-1,A, goal-A[n-1]);
}
int memoize(int n, int A[], int goal, vector<vector<int>> M)
{

if(goal == 0)
            return true;
            
        if(n==0 && goal!=0)
        {
            return false;
        }
        if(M[n][goal]!= -1)
        return M[n][goal];
        
        if(A[n-1]>goal)
            return memoize(n-1,A,goal,M);
        else
         return M[n][goal] = (memoize(n-1,A,goal,M) || memoize(n-1, A, goal-A[n-1],M));
        
}
bool dynamic(int n, int arr[], int goal)
{

    vector<vector<int> > M(n + 1,vector<int>(goal + 1, -1));
            
            
            
            for(int i =1;i <= goal;i++)
                M[0][i] = 0;
                
            for(int i =0;i<=n;i++)
                M[i][0] = 1;
                
                // for(int i =0;i<=N;i++)
                // {
                // for(int j = 0;j<=sum/2;j++)
                //     cout<<M[i][j];
                //     cout<<endl;
                // }
                // cout<<"runs"<<endl;
                for(int i = 1; i<=n;i++)
                {
                    for(int j = 1; j <= goal; j++)
                    {
                        // cout<<M[i][j]<<" ";
                         
                          
                        if(arr[i-1]<=j)
                        {
                            M[i][j] = (M[i-1][j-arr[i-1]] || M[i-1][j]);
                        }
                        else
                             M[i][j] = M[i-1][j];
                   
                        
                    }
               
                }
                return M[n][goal];
       
}






int main()
{
    int A[] = {11,5,1,5};
    int n = sizeof(A)/sizeof(int);
    int sum = 0;

    for(int i = 0;i<n;i++)
    sum = sum+ A[i];


    if(sum%2==0)
    {
    // if(recurse(n,A,sum/2) )
    //     cout<<"Possible recursion"<<endl;
    // else 
    //     cout<<"Not Possible recursion"<<endl;


  vector<vector<int> > M(n + 1,
                            vector<int>(sum/2 + 1, -1));

    if( memoize(n,A,sum/2,M) )
            cout<<"Possible Memoization"<<endl;
        else 
            cout<<"Not Possible Memoization"<<endl;    


    if( dynamic(n,A,sum/2) )
            cout<<"Possible Dynamic"<<endl;
        else 
            cout<<"Not Possible Dynamic"<<endl;     
        
       


    }
    else
    cout<<false<<endl;



    
}
