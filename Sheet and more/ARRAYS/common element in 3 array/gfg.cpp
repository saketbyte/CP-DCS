/*
* The logic used is very simple, we use three variables to point to the array elements and then if the three elements
* are not equal then increment the pointer of the element with smaller value. This doesn't have to ensure the case
* to increase the pointer for the minimum of all, because we are moving linearly through each, if any one doesnt satisfy
* the given condition then neither will and in the next iteration some other pointer will be moved if need be.
*
*
*
*/

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           int i =0, j=0, k=0;
         
           vector <int> r;
           int last =INT_MIN;
           
           
           while(i<n1 && j<n2 && k<n3)
           {
               
               if(A[i]==B[j] && A[i]==C[k] && last != A[i])
                {
                    
                        last = A[i];
                         r.push_back(A[i]);
                         i++;
                         j++;
                         k++;
                   
                 
                }
                
               
               else if(A[i]<B[j])
                    i++;
               else if(B[j]<C[k])
                    j++;
               else 
                    k++;
               
           }
           
           return r;
           
        }

};