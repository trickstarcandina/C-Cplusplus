#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
int findMinDiff(vector<int> arr, int n) {  
    sort(arr.begin(), arr.begin()+n); 
    int diff = INT_MAX; 
    for (int i=0; i<n-1; i++) 
	    if (arr[i+1] - arr[i] < diff) 
		    diff = arr[i+1] - arr[i];  
    return diff; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a; 
        int n; cin>>n;
		nhap(a,n);
	    cout << findMinDiff(a, n)<<endl;
    }
    return 0; 
} 
