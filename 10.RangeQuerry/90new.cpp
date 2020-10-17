#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
// Returns count of minimum operations to convert a zero array to target array with increment and doubling operations. 
// This function computes count by doing reverse steps, i.e., convert target to zero array. 
int countMinOperations(vector<int> target, int n) { 
	// Initialize result (Count of minimum moves) 
	int result = 0; 
	// Keep looping while all elements of target don't become 0. 
	while (1) { 
		// To store count of zeroes in current target array 
		int zero_count = 0; 
		int i; // To find first odd element 
		for (i=0; i<n; i++) { 
			// If odd number found 
			if (target[i] & 1) 
				break; 
			// If 0, then increment zero_count 
			else if (target[i] == 0) 
				zero_count++; 
		} 
		// All numbers are 0 
		if (zero_count == n) return result; 
		// All numbers are even 
		if (i == n) { 
			// Divide the whole array by 2 and increment result 
			for (int j=0; j<n; j++) 
			target[j] = target[j]/2; 
			result++; 
		} 
		// Make all odd numbers even by subtracting one and increment result. 
		for (int j=i; j<n; j++) { 
		    if (target[j] & 1) { 
			target[j]--; 
			result++; 
		    } 
		} 
	} 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a; 
        int n; cin>>n;
		nhap(a,n);
	    cout << countMinOperations(a, n)<<endl;
    }
    return 0; 
}
