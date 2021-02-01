#include <bits/stdc++.h>
using namespace std;

/*
 * So how did I do this ?
 * I had to watch several youtube videos and still couldnt understand how they are processing the function calls and the values returned each time.
 * Solution: Do a dry run of the complete code line by line or atleast of the appraoch.
 *
 * Essentially we are doing the merge sort here. All the youtubers and everyone is saying that we will count the number of inversions in two phases:
 * 1. While sorting we would count how many anomalies from the ascending order occur.
 * 2. While merging we would count how many across the two sets to be merged the anomalies occur.
 *
 * Yes they are two different processes but as far as I could understand, these two processes are being carried out by one and the same counting code during merge.
 *
 * As we know the sequence of statements written in the recursive function is very important so based on some analysis and doing editing with the code, I can say that-
 * 1. The first call to mergeSort is used to count the inversions in the left half of the partitioned tree and the values returned at each call is only "the merging anomalies count"
 * starting from the very single element merge itself.
 * 2. The second call to mergeSort is identical except for the fact that this is accounting for the recursions in the right half.
 * 3. Then finally, however this occurs at each step but yeah, finally the merge function executes at each call to account for the number of anomalies at merging time of left and right half.
 *
 * See basically you can not count anything during the partitioning right ? So all the counts are essentially being made during the merging phase of 1-->2-->4-->8 and so on elements.
 * Starting from the root of the tree, we can move to left left left untill it ends with 1 element on each side, then merge merge merge untill it finishes all the possible merges, then
 * we move to part with the right right right untull it ends with 1 element on each branch and then merge merge untill it merges with the already sorted left sub-array to be merged with.
 */



#define ll long long
// Function to find inversion count in the array

ll _mergeSort(ll arr[], ll temp[],
              ll left, ll right);
ll merge(ll arr[], ll temp[], ll left,
         ll mid, ll right);




long long int inversionCount(long long arr[], long long N)
{
    ll temp[N];
    return _mergeSort(arr,temp,0,N-1 );
}

ll _mergeSort(ll arr[],ll temp[],ll left,ll right){
    ll mid,inver_count=0;
    if(right>left){
        mid=(right+left)/2;
        inver_count+=_mergeSort(arr,temp,left,mid);  // THIS VERY STATEMENT ACCOUNTS FOR ALL THE CALLS TO MANAGE THE LEFT BRANCHING OF THE TREE.


        inver_count+=_mergeSort(arr,temp,mid+1,right); // THIS VERY STATEMENT ACCOUNTS FOR ALL THE CALLS TO MANAGE THE RIGHT BRANCHING OF THE TREE.

        inver_count+=merge(arr,temp,left,mid+1,right); // THIS STATEMENT IS EXECUTED FOR EACH MERGING AT EACH CALL OF THE MERGE SORT FUNCTION TO MERGE THE TWO PARTED SUB ARRAYS.
    }
    return inver_count;

}


// arr[]: Input Array
// N : Size of the Array arr[]

ll merge(ll arr[],ll temp[],ll left,ll mid,ll right){
    ll i,j,k;
    ll inver_count=0;
    i=left;
    j=mid;
    k=left;

    while((i<=mid-1) &&(j<= right)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            inver_count+=(mid-i);
        }

    }
    while(i<=mid-1){
        temp[k++]=arr[i++];

    }

    while(j<=right){
        temp[k++]=arr[j++];

    }
    for(ll i=left;i<=right;i++){
        arr[i]=temp[i];
    }
    return inver_count;
}



// { Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while(T--){
        long long N;
        cin >> N;

        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }

        cout << inversionCount(A,N) << endl;
    }

    return 0;
}
// } Driver Code Ends