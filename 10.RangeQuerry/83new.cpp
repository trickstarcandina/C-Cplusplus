#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
// Utility method to construct left and right array 
int preprocess(vector<int> arr, int N, int left[], int right[]) { 
	// initialize first left index as that index only 
	left[0] = 0; 
	int lastIncr = 0; 
	for (int i = 1; i < N; i++) { 
		// if current value is greater than previous, update last increasing 
		if (arr[i] > arr[i - 1]) 
			lastIncr = i; 
		left[i] = lastIncr; 
	} 
	// initialize last right index as that index only 
	right[N - 1] = N - 1; 
	int firstDecr = N - 1; 
	for (int i = N - 2; i >= 0; i--) { 
		// if current value is greater than next, update first decreasing 
		if (arr[i] > arr[i + 1]) 
			firstDecr = i; 
		right[i] = firstDecr; 
	} 
} 
// method returns true if arr[L..R] is in mountain form 
bool isSubarrayMountainForm(vector<int> arr, int left[], int right[], int L, int R) { 
	// return true only if right at starting range is greater than left at ending range 
	return (right[L] >= left[R]); 
} 
int main() { 
    int t; cin>>t;
    while(t--){
        vector<int> arr;
		int n; cin>>n;
		nhap(arr,n);
        int left[n], right[n]; 
	    preprocess(arr, n, left, right); 
	    int L,R;
	    cin>>L>>R;
	    if (isSubarrayMountainForm(arr, left, right, L, R)) 
	    	cout << "Yes"<<endl; 
	    else
		    cout << "No"<<endl;
    } 
	return 0; 
} 
