#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
int findMin(vector<int> arr, int low, int high) { 
	// This condition is needed to handle the case when array is not rotated at all 
	if (high < low) return arr[0]; 
	// If there is only one element left 
	if (high == low) return arr[low]; 
	// Find mid 
	int mid = low + (high - low)/2; /*(low + high)/2;*/
	// Check if element (mid+1) is minimum element. Consider the cases like {3, 4, 5, 1, 2} 
	if (mid < high && arr[mid + 1] < arr[mid]) 
	    return arr[mid + 1]; 
	// Check if mid itself is minimum element 
	if (mid > low && arr[mid] < arr[mid - 1]) 
	    return arr[mid]; 
	// Decide whether we need to go to left half or right half 
	if (arr[high] > arr[mid]) 
	    return findMin(arr, low, mid - 1); 
	return findMin(arr, mid + 1, high); 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; 
		nhap(a,n); 
        cout<<findMin(a, 0, n-1)<<endl;
    }
    return 0; 
}