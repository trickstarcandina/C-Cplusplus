#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
// This function prints the first repeating element in arr[] 
void printFirstRepeating(vector<int> arr, int n) { 
	// Initialize index of first repeating element 
	int min = -1; 
	// Creates an empty hashset 
	set<int> myset; 
	// Traverse the input array from right to left 
	for (int i = n - 1; i >= 0; i--) { 
		// If element is already in hash set, update min 
		if (myset.find(arr[i]) != myset.end()) 
			min = i; 
		else // Else add element to hash set 
			myset.insert(arr[i]); 
	} 
	if (min != -1) 
        cout << arr[min]<<endl; 
    else
        cout << -1<<endl; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; 
		nhap(a,n); 
        printFirstRepeating(a, n); 
    }
    return 0; 
}