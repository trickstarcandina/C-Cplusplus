#include<bits/stdc++.h>
using namespace std;
/* The function assumes that there are at least two elements in array. The function returns a negative value if the array is sorted in decreasing order and 
returns 0 if elements are equal */
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
int maxDiff (vector <int> arr, int n) { 
	// Initialize diff, current sum and max sum 
	int diff = arr[1]-arr[0]; 
	int curr_sum = diff; 
	int max_sum = curr_sum; 
	for(int i=1; i<n-1; i++) { 
		// Calculate current diff 
		diff = arr[i+1]-arr[i]; 
		// Calculate current sum 
		if (curr_sum > 0) curr_sum += diff; 
		else curr_sum = diff; 
		// Update max sum, if needed 
		if (curr_sum > max_sum) max_sum = curr_sum; 
	} 
    return max_sum; 
} 
int main() { 
    int t; cin>>t;
    while(t--){
        vector<int> a;
		int n; cin>>n;
		nhap(a,n);
        cout  << maxDiff(a, n)<<endl; 
    }
    return 0; 
} 