/* The solution can be further optimized by observing that while traversing the two sorted arrays parallelly, 
if we encounter the jth second array element is smaller than ith first array element, 
then jth element is to be included and replace some kth element in the first array. 
This observation helps us with the following algorithm   */
// CPP program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to merge two arrays
void merge(int arr1[], int arr2[], int n, int m)
{
	int i = 0, j = 0, k = n - 1;

	// for optimize
	bool flag = false;

	// Untill i less than equal to k
	// or j is less tha m
	while (i <= k && j < m) {
		if (arr1[i] < arr2[j])
			i++;
		else {
			swap(arr2[j++], arr1[k--]);
			flag = true;
		}
	}


	// For the best case time complexity will be O(n) 
	if(flag){
	// Sort first array
	sort(arr1, arr1 + n);

	// Sort second array
	sort(arr2, arr2 + m);
	}
}

// Driver Code
int main()
{

	int ar1[] = { 1, 5, 9, 10, 15, 20 };
	int ar2[] = { 2, 3, 8, 13 };
	int m = sizeof(ar1) / sizeof(ar1[0]);
	int n = sizeof(ar2) / sizeof(ar2[0]);
	merge(ar1, ar2, m, n);

	cout << "After Merging \nFirst Array: ";
	for (int i = 0; i < m; i++)
		cout << ar1[i] << " ";
	cout << "\nSecond Array: ";
	for (int i = 0; i < n; i++)
		cout << ar2[i] << " ";
	return 0;
}

