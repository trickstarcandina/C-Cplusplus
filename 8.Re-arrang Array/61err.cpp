 #include <bits/stdc++.h> 
using namespace std; 
void nhap(int arr[],int n){
	for(int i=0;i<n;i++)
		cin>>arr[i];
}
int ceilIndex(int arr[], int l, int r, int x) { 
	if (l > r) 
		return -1; 
	int mid = l + (r - l) / 2; 
	if (arr[mid] == x) 
		return mid; 
	if (x < arr[mid]) 
		return ceilIndex(arr, l, mid - 1, x); 
	return ceilIndex(arr, mid + 1, r, x); 
} 
void revereseArr(int arr[], int n) { 
	int i = 0; 
	int j = n - 1; 
	while (i < j) 
	swap(arr[i++], arr[j--]); 
} 
// Returns length of longest Bitonic 
// subsequence in O(n Log n) time. 
int getLBSLengthLogn(int arr[], int n) {
	if (n == 0) 
		return 0; 
	// Aux array storing the input array 
	// in same order to calculate LIS: 
	int increasing[n]; 
	int tail1[n]; // To store lengths of IS 
	// Aux array storing the input array 
	// in reverse order to calculate LIS: 
	// This will calculate Longest Decreasing 
	// Subsequence which is required for 
	// Longest Bitonic Subsequence 
	int decreasing[n]; 
	int tail2[n]; // To store lengths of DS 
	// initializing first index same as 
	// original array: 
	increasing[0] = arr[0]; 
	// index in initialized as 1 from where 
	// the remaining computations will be done 
	int in = 1; 
	// tail1 stores Longest Increasing subsequence 
	// length values till index in 
	tail1[0] = 0; 
	// remaining computations to get the 
	// LIS length for increasing 
	for (int i = 1; i < n; i++) { 
		if (arr[i] < increasing[0]) { 
			increasing[0] = arr[i]; 
			tail1[i] = 0; 
		} 
		else if (arr[i] > increasing[in - 1]) { 
			increasing[in++] = arr[i]; 
			tail1[i] = in - 1; 
		} 
		else{ 
			increasing[ceilIndex(increasing, -1, 
						in - 1, arr[i])] = arr[i]; 
			tail1[i] = ceilIndex(increasing, -1, 
								in - 1, arr[i]); 
		} 
	} 
	// reiitializing the index to 1 
	in = 1; 
	// reversing the array to get the Longest 
	// Decreasing Subsequence Length: 
	revereseArr(arr, n); 
	decreasing[0] = arr[0]; 
	tail2[0] = 0; 
	for (int i = 1; i < n; i++) { 
		if (arr[i] < decreasing[0]) { 
			decreasing[0] = arr[i]; 
			tail2[i] = 0; 
		} 
		else if (arr[i] > decreasing[in - 1]) { 
			decreasing[in++] = arr[i]; 
			tail2[i] = in - 1; 
		} 
		else{ 
			decreasing[ceilIndex(decreasing, -1, 
					in - 1, arr[i])] = arr[i]; 
			tail2[i] = ceilIndex(decreasing, -1, 
								in - 1, arr[i]); 
		} 
	} 
	revereseArr(arr, n); 
	revereseArr(tail2, n); 
	// Longest Bitonic Subsequence length is 
	// maximum of tail1[i] + tail2[i] + 1: 
	int ans = 0; 
	for (int i = 0; i < n; i++) 
		if (ans < (tail1[i] + tail2[i] + 1)) 
			ans = (tail1[i] + tail2[i] + 1); 
	return ans; 
} 

int main() { 
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int arr[n];
		nhap(arr,n); 
		cout << getLBSLengthLogn(arr, n) << endl;
	}
	return 0; 
} 
