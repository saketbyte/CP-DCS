// A C++ program to find median of two sorted arrays of
// unequal sizes

/*
 * Approach:The idea is simple, calculate the median of both
 * the arrays and discard one half of each array.
 *
 *
 * In addition to that there are more basic corner cases:

If the size of smaller array is 0. Return the median of a larger array.
if the size of smaller array is 1.
The size of the larger array is also 1. Return the median of two elements.
If the size of the larger array is odd. Then after adding the element from 2nd array, it will be even so the median will be an average of two mid elements. So the element from the smaller array will affect the median if and only if it lies between (m/2 – 1)th and (m/2 + 1)th element of the larger array. So, find the median in between the four elements, the element of the smaller array and (m/2)th, (m/2 – 1)th and (m/2 + 1)th element of a larger array
Similarly, if the size is even, then check for the median of three elements, the element of the smaller array and (m/2)th, (m/2 – 1)th element of a larger array
If the size of smaller array is 2
If the larger array also has two elements, find the median of four elements.
If the larger array has an odd number of elements, then the median will be one of the following 3 elements
Middle element of larger array
Max of the first element of smaller array and element just before the middle, i.e M/2-1th element in a bigger array
Min of the second element of smaller array and element
just after the middle in the bigger array, i.e M/2 + 1th element in the bigger array
If the larger array has even number of elements, then the median will be one of the following 4 elements
The middle two elements of the larger array
Max of the first element of smaller array and element just before the first middle element in the bigger array, i.e M/2 – 2nd element
Min of the second element of smaller array and element just after the second middle in the bigger array, M/2 + 1th element
 *
 */

// GEEKS FOR GEEKS COPY PASTE AND UNDERSTOOD BUT YET TO WRITE ON OWN
#include <bits/stdc++.h>
using namespace std;

// A utility function to find median of two integers
float MO2(int a, int b)
{ return ( a + b ) / 2.0; }

// A utility function to find median of three integers
float MO3(int a, int b, int c)
{
	return a + b + c - max(a, max(b, c))
					- min(a, min(b, c));
}

// A utility function to find a median of four integers
float MO4(int a, int b, int c, int d)
{
	int Max = max( a, max( b, max( c, d ) ) );
	int Min = min( a, min( b, min( c, d ) ) );
	return ( a + b + c + d - Max - Min ) / 2.0;
}

// Utility function to find median of single array
float medianSingle(int arr[], int n)
{
if (n == 0)
	return -1;
if (n%2 == 0)
		return (double)(arr[n/2] + arr[n/2-1])/2;
return arr[n/2];
}

// This function assumes that N is smaller than or equal to M
// This function returns -1 if both arrays are empty
float findMedianUtil( int A[], int N, int B[], int M )
{
	// If smaller array is empty, return median from second array
	if (N == 0)
	return medianSingle(B, M);

	// If the smaller array has only one element
	if (N == 1)
	{
		// Case 1: If the larger array also has one element,
		// simply call MO2()
		if (M == 1)
			return MO2(A[0], B[0]);

		// Case 2: If the larger array has odd number of elements,
		// then consider the middle 3 elements of larger array and
		// the only element of smaller array. Take few examples
		// like following
		// A = {9}, B[] = {5, 8, 10, 20, 30} and
		// A[] = {1}, B[] = {5, 8, 10, 20, 30}
		if (M & 1)
			return MO2( B[M/2], MO3(A[0], B[M/2 - 1], B[M/2 + 1]) );

		// Case 3: If the larger array has even number of element,
		// then median will be one of the following 3 elements
		// ... The middle two elements of larger array
		// ... The only element of smaller array
		return MO3( B[M/2], B[M/2 - 1], A[0] );
	}

	// If the smaller array has two elements
	else if (N == 2)
	{
		// Case 4: If the larger array also has two elements,
		// simply call MO4()
		if (M == 2)
			return MO4(A[0], A[1], B[0], B[1]);

		// Case 5: If the larger array has odd number of elements,
		// then median will be one of the following 3 elements
		// 1. Middle element of larger array
		// 2. Max of first element of smaller array and element
		// just before the middle in bigger array
		// 3. Min of second element of smaller array and element
		// just after the middle in bigger array
		if (M & 1)
			return MO3 ( B[M/2],
						max(A[0], B[M/2 - 1]),
						min(A[1], B[M/2 + 1])
					);

		// Case 6: If the larger array has even number of elements,
		// then median will be one of the following 4 elements
		// 1) & 2) The middle two elements of larger array
		// 3) Max of first element of smaller array and element
		// just before the first middle element in bigger array
		// 4. Min of second element of smaller array and element
		// just after the second middle in bigger array
		return MO4 ( B[M/2],
					B[M/2 - 1],
					max( A[0], B[M/2 - 2] ),
					min( A[1], B[M/2 + 1] )
				);
	}

	int idxA = ( N - 1 ) / 2;
	int idxB = ( M - 1 ) / 2;

	/* if A[idxA] <= B[idxB], then median must exist in
		A[idxA....] and B[....idxB] */
	if (A[idxA] <= B[idxB] )
	return findMedianUtil(A + idxA, N/2 + 1, B, M - idxA );

	/* if A[idxA] > B[idxB], then median must exist in
	A[...idxA] and B[idxB....] */
	return findMedianUtil(A, N/2 + 1, B + idxA, M - idxA );
}

// A wrapper function around findMedianUtil(). This function
// makes sure that smaller array is passed as first argument
// to findMedianUtil
float findMedian( int A[], int N, int B[], int M )
{
	if (N > M)
	return findMedianUtil( B, M, A, N );

	return findMedianUtil( A, N, B, M );
}

// Driver program to test above functions
int main()
{
	int A[] = {900};
	int B[] = {5, 8, 10, 20};

	int N = sizeof(A) / sizeof(A[0]);
	int M = sizeof(B) / sizeof(B[0]);

	printf("%f", findMedian( A, N, B, M ) );
	return 0;
}
