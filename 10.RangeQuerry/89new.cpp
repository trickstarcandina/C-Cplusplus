#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
// Returns beginning index of maximum average subarray of length 'k' 
void findMaxAverage(vector<int> arr, int n, int k) { 
	// Check if 'k' is valid 
	//if (k > n) 	return -1; 
	// Compute sum of first 'k' elements 
	int sum = arr[0]; 
	for (int i=1; i<k; i++) 
		sum += arr[i]; 
	int max_sum = sum, max_end = k-1; 
	// Compute sum of remaining subarrays 
	for (int i=k; i<n; i++) { 
		int sum = sum + arr[i] - arr[i-k]; 
		if (sum > max_sum) { 
			max_sum = sum; 
			max_end = i; 
		} 
	} 
	for(int i=max_end - k + 1;i<=max_end - k + k;i++){
        cout<<arr[i]<<" ";
    }
	cout<<endl; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a; 
        int n; cin>>n;
        int k; cin>>k;
		nhap(a,n);
	    findMaxAverage(a, n, k);
    }
    return 0; 
}