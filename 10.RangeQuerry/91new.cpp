#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
// Returns minimum number of count operations required to make arr[] palindrome 
int findMinOps(vector<int> arr, int n) { 
	int ans = 0; // Initialize result 
	// Start from two corners 
	for (int i=0,j=n-1; i<=j;) { 
		// If corner elements are same, problem reduces arr[i+1..j-1] 
		if (arr[i] == arr[j]) { 
			i++; 
			j--; 
		}
		// If left element is greater, then  we merge right two elements 
		else if (arr[i] > arr[j]) { 
			// need to merge from tail. 
			j--; 
			arr[j] += arr[j+1] ; 
			ans++; 
		} 
		// Else we merge left two elements 
		else{ 
			i++; 
			arr[i] += arr[i-1]; 
			ans++; 
		} 
	} 
	return ans; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a; 
        int n; cin>>n;
		nhap(a,n);
	    cout << findMinOps(a, n)<<endl;
    }
    return 0; 
}
