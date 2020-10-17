#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}	
/* lis() returns the length of the longest increasing 
subsequence in arr[] of size n */
int lis(vector <int> arr, int n ) { 
	int lis[n]; 
	lis[0] = 1; 
	/* Compute optimized LIS values in bottom up manner */
	for (int i = 1; i < n; i++ ) { 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ ) 
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1) 
				lis[i] = lis[j] + 1; 
	} 
	// Return maximum value in lis[] 
	return *max_element(lis, lis+n); 
} 	
int main() { 
	int t; cin>>t;
    while(t--){
        vector<int> a;
		int n; cin>>n;
		nhap(a,n);
        cout  << lis( a, n )<<endl; 
    } 
	return 0; 
}
