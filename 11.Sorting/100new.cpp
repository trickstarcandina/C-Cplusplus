#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
void printUnsorted( vector<int> arr, int n) { 
    int s = 0, e = n-1, i, max, min; 
    // step 1(a) of above algo 
    for (s = 0; s < n-1; s++) { 
    	if (arr[s] > arr[s+1]) break; 
    } 
    if (s == n-1) { 
    	cout << "The complete array is sorted"; 
    	return; 
    } 
    // step 1(b) of above algo 
    for(e = n - 1; e > 0; e--) { 
    	if(arr[e] < arr[e-1]) break; 
    } 
    // step 2(a) of above algo 
    max = arr[s]; min = arr[s]; 
    for(i = s + 1; i <= e; i++) { 
    	if(arr[i] > max) max = arr[i]; 
    	if(arr[i] < min) min = arr[i]; 
    } 
    // step 2(b) of above algo 
    for( i = 0; i < s; i++) { 
    	if(arr[i] > min) { 
    	    s = i; 
            break; 
	    }	 
    } 
    // step 2(c) of above algo 
    for( i = n -1; i >= e+1; i--) { 
    	if(arr[i] < max) { 
    	    e = i; 
    	    break; 
    	} 
    } 
	// step 3 of above algo 
    cout << s << " " << e<<endl; 
    return; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n;
		nhap(a,n); 
        printUnsorted(a,n); 
    }
    return 0; 
}