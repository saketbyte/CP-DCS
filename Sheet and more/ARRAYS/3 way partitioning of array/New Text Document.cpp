class Solution{   
public:
 
    void threeWayPartition(vector<int>& arr,int lowVal, int highVal)
    {
int start = 0, end = arr.size();
  
    // Traverse elements from left
    for (int i=0; i<=end;)
    {
     
        if (arr[i] < lowVal)
            swap(arr[i++], arr[start++]);
  
        else if (arr[i] > highVal)
            swap(arr[i], arr[end--]);
  
        else
            i++;
    }
    }
};