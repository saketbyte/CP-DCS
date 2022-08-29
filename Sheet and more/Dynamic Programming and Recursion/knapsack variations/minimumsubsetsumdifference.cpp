#include<bits/stdc++.h>

using namespace std;

int dynamic(int n, int arr[], int goal)
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
            int mini = INT_MAX;
            for(int i = 0; i < goal+1;i++)
            {
                if(M[n][i]!=-1)
                mini = min(mini, abs(goal-2*i));
            }


            return mini;

       
}






int main()
{
    int A[] = {1,6,5,11};
   
    int n = sizeof(A)/sizeof(int);
    int sum = 0;

    for(int i = 0;i<n;i++)
    sum = sum+ A[i];


 


  
    if( dynamic(n,A,sum/2) )
            cout<<"Possible Dynamic "<<dynamic(n,A,sum)<<endl;
        else 
            cout<<"Not Possible Dynamic"<<endl;     
        
       


}
 



    

