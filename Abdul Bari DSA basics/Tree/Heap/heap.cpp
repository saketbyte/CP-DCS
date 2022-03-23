#include<iostream>
using namespace std;


void insert(int A[], int n)
{
    int i =n;
    int temp =0;


    temp = A[i];
    while(i>1 && temp>A[i/2])
    {
        A[i] = A[i/2];
        i = i/2;
    }

    A[i] = temp;
}
int popElement(int A[], int n)
{
    int i,j,x, temp;
    int val = A[1];
    
    x = A[n];
    A[1] = A[n];
    A[n] = val;
    

    i = 1; j = i*2;

    while(j<=n-1)
    {
        if(j<n-1 && A[j+1]>A[j])
            j+=1;
        
        if(A[i]<A[j])
        {
            temp = A[i];
            A[i]=A[j];
            A[j] = temp;
            i=j;
            j=2*j;

        }
        else
        break;

    }
    
    return val;

}
int main()
{
    int H[] = {0,10,20,30,25,5,40,35};
   
    for(int i =1; i<=7; i++)
        insert(H,i);

    cout<<popElement(H,7)<<endl;

    for(int i =1; i<=7; i++)
        cout<<H[i]<<endl;      

    


}