#include <iostream>
using namespace std;

/* The logic is simple a negative number is needed at even position and a positive number at odd position. We just check for this to be untrue and then simply swap it with the
 * next element in unchecked part of array which is supposed to be there. If there is no such element, we simply dont swap and continue.*/

int main() {
    int n ;
    cin>>n;
    int A[n];

    for(int i =0;i<n;i++)
        cin>>A[i];

    for(int i =0;i<n;i++)
    {
        if(i%2 ==0 && A[i] >=0)
        {

            int temp = A[i];
            for(int j = i+1;j<n;j++)
            {
                if(A[j]<0)
                {
                    A[i] = A[j];
                    A[j] = temp;
                    break;
                }
            }

        }
        else
            if(i%2 ==0 && A[i] <0)
            {

                int temp = A[i];
                for(int j = i+1;j<n;j++)
                {
                    if(A[j]>=0)
                    {
                        A[i] = A[j];
                        A[j] = temp;
                        break;
                    }
                }

            }
    }


    for(int i =0;i<n;i++)
        cout<<A[i];
}
