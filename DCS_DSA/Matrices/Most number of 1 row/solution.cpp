class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	 
    int res_index = -1; 
	    int j = m - 1;
	    
	    for(int i = 0; i < n; i++)
	    {
	        while(j >= 0)
	        {
	            if(arr[i][j] == 1)
	            {
	                j--;
	                
	                res_index = i;
	            }
	            else
	            {
	                break;
	            }
	        }
	    }
	    
	    return res_index;
	    
	    // moving from top to bottom row-wise. In column-wise I am moving right to left.
	    //Because row-wise it is sorted. If I find 1 then I decrement the column and update 
	    //the resultant index, otherwise I move to the next row.
	}
	 

};