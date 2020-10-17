#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
// Function to print the maximum for 
// every k size sub-array 
void print_max(vector<int> a, int n, int k) { 
	// max_upto array stores the index 
	// upto which the maximum element is a[i] 
	// i.e. max(a[i], a[i + 1], ... a[max_upto[i]]) = a[i] 
	int max_upto[n]; 
	// Update max_upto array similar to 
	// finding next greater element 
	stack<int> s; 
	s.push(0); 
	for (int i = 1; i < n; i++) { 
		while (!s.empty() && a[s.top()] < a[i]) { 
			max_upto[s.top()] = i - 1; 
			s.pop(); 
		} 
		s.push(i); 
	} 
	while (!s.empty()) { 
		max_upto[s.top()] = n - 1; 
		s.pop(); 
	} 
	int j = 0; 
	for (int i = 0; i <= n - k; i++) { 
		// j < i is to check whether the 
		// jth element is outside the window 
		while (j < i || max_upto[j] < i + k - 1) 
			j++; 
		cout << a[j] << " "; 
	} 
	cout << endl; 
}  
int main() { 
	int t; cin>>t;
	while (t--){
		int n; cin>>n;
		int k; cin>>k;
		vector<int> a;
		nhap(a,n);
		print_max(a, n, k); 
	}
	return 0; 
} 
