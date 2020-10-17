#include<bits/stdc++.h> 
using namespace std;
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
// Function returns the minimum number of swaps required to sort the array 
int minSwaps(vector<int> arr, int n) { 
	// Create an array of pairs where first element is array element and second element is position of first element 
	pair<int, int> arrPos[n]; 
	for (int i = 0; i < n; i++) { 
		arrPos[i].first = arr[i]; 
		arrPos[i].second = i; 
	} 
	// Sort the array by array element values to get right position of every element as second element of pair. 
	sort(arrPos, arrPos + n); 
	// To keep track of visited elements. Initialize all elements as not visited or false. 
	vector<bool> vis(n, false); 
	// Initialize result 
	int ans = 0; 
	// Traverse array elements 
	for (int i = 0; i < n; i++) { 
		// already swapped and corrected or 
		// already present at correct pos 
		if (vis[i] || arrPos[i].second == i) 
			continue; 
		// find out the number of node in  this cycle and add in ans 
		int cycle_size = 0; 
		int j = i; 
		while (!vis[j]) { 
			vis[j] = 1; 
			// move to next node 
			j = arrPos[j].second; 
			cycle_size++; 
		} 
		// Update answer by adding current cycle. 
		if (cycle_size > 0) { 
			ans += (cycle_size - 1); 
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
	    cout << minSwaps(a, n)<<endl; 
    }
    return 0; 
} 