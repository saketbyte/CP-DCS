
class Solution{   
public:

// void swap(vector<int>& A, int x,int y )
// {
//     int temp = A[x];
//     A[x] = A[y];
//     A[y] = temp;
// }
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& A,int a, int b)
    {


    int low = 0, mid = 0;
    int last = A.size()-1;
    
    while(mid<=last){
        
        if(A[mid]<a){
            swap(A[low],A[mid]);
            mid++;
            low++;
            }
        else if(A[mid] <=b && A[mid]>=a)
        mid++;
        
        else if(A[mid]>b)
        {
            swap(A[mid],A[last]);
            last--;
        }
    }
    
}    
};