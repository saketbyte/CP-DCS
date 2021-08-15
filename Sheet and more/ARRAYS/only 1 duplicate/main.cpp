// FLoyd Cycle Method

/* Intuition / Logic
The repeated number will always be at the junction between the straight path and the cycle because,
 the cycle exists only because two nodes reach to the same next as one value is repeated. 
 We traverse the array and we go to the element at the index same as the current element value.
  Since there is a repeated value, we would be going to a index twice, hence there will be cycle 
  if there is a repeated value. This method is only applicable to questions in which all elements are between 0 and array.length - 1 . 
  Two pointer in a cycle, starting at the same point and moving at different speeds will always collide at some point. 
  At any point when the slow and fast pointers collide the fast pointer must have covered twice the distance of the slow pointer 
  because its moving two steps in every iteration while slow pointer moves only one. And where would the fast point move that extra distance?
   It could only move that in the cycle because that is only how it could come back the same point in the cycle, 
   as the slow and fast are colliding at a point in the cycle, hence the distance moved by the slow pointer would be multiple of the 
   length of the cycle. At last we  would move both the slow and fast pointer by one step until they meet again and that would be our
    duplicate number. */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
    int slow = nums[0];
    int fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
            
    fast = nums[0];
    while(slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
        return slow;
        
    }
};















// Hashing

#include <iostream>

using namespace std;

int question(int A[], int n)
{

    int hash [n+1] = {0};
    int i;
    for( i =0; i<n;i++) {
        if(hash[A[i]]==0)
        hash[A[i]]++;
        else if(hash[A[i]]>=1)
        break;
    }
    return A[i];

}


int main() {

    int n;
    cin>>n;
    int A[n];
    for(int i =0;i<n;i++)
        cin>>A[i];

    cout<<question(A,n)<<endl;
    return 0;
}
