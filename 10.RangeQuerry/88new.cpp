#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
// Returns length of smallest subarray with sum greater than x. 
// If there is no subarray with given sum, then returns n+1 
int smallestSubWithSum(vector<int> arr, int n, int x) { 
	// Initialize current sum and minimum length 
	int curr_sum = 0, min_len = n+1; 
	// Initialize starting and ending indexes 
	int start = 0, end = 0; 
	while (end < n) { 
		// Keep adding array elements while current sum is smaller than x 
		while (curr_sum <= x && end < n) 
			curr_sum += arr[end++]; 
		// If current sum becomes greater than x. 
		while (curr_sum > x && start < n) { 
			// Update minimum length if needed 
			if (end - start < min_len) 
				min_len = end - start; 
			// remove starting elements 
			curr_sum -= arr[start++]; 
		} 
	} 
	return min_len; 
}  
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a; 
        int n; cin>>n;
        int x; cin>>x;
		nhap(a,n);
        int res = smallestSubWithSum(a, n, x); 
	    (res == n+1)? cout << "-1\n" : cout << res << endl; 
    }
    return 0; 
}