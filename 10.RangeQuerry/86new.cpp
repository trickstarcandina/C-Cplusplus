#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
// Function to return the minimum number of jumps to reach arr[h] from arr[l] 
int minJumps(vector<int> a, int n) { 
	// Base case: when source and destination are same 
	if (n == 1) return 0; 
	// Traverse through all the points reachable from arr[l] 
	// Recursivel, get the minimum number of jumps needed to reach arr[h] from these reachable points 
	int res = INT_MAX; 
	for (int i = n - 2; i >= 0; i--) { 
		if (i + a[i] >= n - 1) { 
			int sub_res = minJumps(a, i + 1); 
			if (sub_res != INT_MAX) 
				res = min(res, sub_res + 1); 
		} 
	} 
	return res; 
}  
int main() { 
    int T; cin >> T;
    while (T--){
        vector<int> a; 
        int n; cin>>n;
		nhap(a,n);
        cout << minJumps(a, n)<<endl; 
    }  
	return 0; 
} 