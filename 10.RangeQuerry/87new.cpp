#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
/* maxSumIS() returns the maximum sum of increasing subsequence in arr[] of size n */
int maxSumIS(vector<int> arr, int n) { 
	int i, j, max = 0; 
	int msis[n]; 
	/* Initialize msis values for all indexes */
	for ( i = 0; i < n; i++ ) 
		msis[i] = arr[i]; 
	/* Compute maximum sum values in bottom up manner */
	for ( i = 1; i < n; i++ ) 
		for ( j = 0; j < i; j++ ) 
			if (arr[i] > arr[j] && 
				msis[i] < msis[j] + arr[i]) 
				msis[i] = msis[j] + arr[i]; 
	/* Pick maximum of all msis values */
	for ( i = 0; i < n; i++ ) 
		if ( max < msis[i] ) 
			max = msis[i]; 
	return max; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a; 
        int n; cin>>n;
		nhap(a,n);
        cout << maxSumIS( a, n ) <<endl; 
    }
    return 0; 
} 
