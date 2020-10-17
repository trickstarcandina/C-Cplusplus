#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
// This function prints common elements in ar1 
void findCommon(vector<int> ar1, vector<int> ar2, vector<int> ar3, int n1, int n2, int n3) { 
	// Initialize starting indexes for ar1[], ar2[] and ar3[] 
	int i = 0, j = 0, k = 0; 
	// Iterate through three arrays while all arrays have elements 
	while (i < n1 && j < n2 && k < n3) { 
		// If x = y and y = z, print any of them and move ahead 
		// in all arrays 
		if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) 
		{ cout << ar1[i] << " "; i++; j++; k++; } 
		// x < y 
		else if (ar1[i] < ar2[j]) 
			i++; 
		// y < z 
		else if (ar2[j] < ar3[k]) 
			j++; 
		// We reach here when x > y and z < y, i.e., z is smallest 
		else
			k++; 
	} 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> ar1,ar2,ar3;
        int n1,n2,n3; cin>>n1>>n2>>n3;
		nhap(ar1,n1); nhap(ar2,n2); nhap(ar3,n3); 
        findCommon(ar1, ar2, ar3, n1, n2, n3); 
    }
    return 0; 
}

