#include<bits/stdc++.h> 
using namespace std; 
int a[100000];
int countPairsWithDiffK(int a[], int n, int k) { 
	sort(a, a+n); 
	int res = 0; 
    for (int i = 0; i < n-1; i++) {  
        int ans = lower_bound(a, a + n, a[i] + k) - a; 
        // tra ve vi tri dau tien >= a[i] + k, tra ve dia chi
        // khong co tra ve last 
        res=res+ans-i-1;
    } 
    return res; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        int n; cin>>n; int k; cin>>k;
        
        for(int i=0;i<n;i++){
		    cin>>a[i];
	    } 
        cout << countPairsWithDiffK(a, n, k)<<endl;
    }
    return 0; 
}
