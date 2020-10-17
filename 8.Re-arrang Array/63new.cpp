#include <bits/stdc++.h> 
using namespace std; 
// Function to print an array according 
// to the order defined by another array 
void print_in_order(int a1[], int a2[], int n, int m) { 
	// Declaring map and iterator 
	map<int, int> mp; 
	map<int, int>::iterator itr; 
	// Store the frequncy of each 
	// number of a1[] int the map 
	for (int i = 0; i < n; i++) 
		mp[a1[i]]++; 
	// Traverse through a2[] 
	for (int i = 0; i < m; i++) { 
		// Check whether number 
		// is present in map or not 
		if (mp.find(a2[i]) != mp.end()) { 
			itr = mp.find(a2[i]); 
			// Print that number that 
			// many times of its frequncy 
			for (int j = 0; j < itr->second; j++) 
				cout << itr->first << " "; 
			mp.erase(a2[i]); 
		} 
	} 
	// Print those numbers that are not 
	// present in a2[] 
	for (itr = mp.begin(); itr != mp.end(); itr++) { 
		for (int j = 0; j < itr->second; j++) 
			cout << itr->first << " "; 
	} 
	cout << endl; 
} 
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
}
int main() { 
	int t; cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a1[n];
		int a2[m]; 
		nhap(a1,n);
		nhap(a2,m);  
		print_in_order(a1, a2, n, m); 
	}
	return 0; 
} 

