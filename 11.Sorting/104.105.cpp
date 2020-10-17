#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<long long> &a,long long &n){
	long long x;
	for(long long i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
long long minMaxProduct(vector<long long> arr1, vector<long long> arr2, long long n1, long long n2) { 
	long long max = arr1[0]; 
	long long min = arr2[0]; 
	long long i; 
	for (i = 1; i < n1 && i < n2; ++i) { 
		if (arr1[i] > max) 
			max = arr1[i]; 
		if (arr2[i] < min) 
			min = arr2[i]; 
	} 
	while (i < n1) { 
		if (arr1[i] > max) 
		max = arr1[i]; 
		i++; 
	} 
	while (i < n2) { 
		if (arr2[i] < min) 
		min = arr2[i]; 
		i++; 
	} 
	return max * min; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<long long> a;
        vector<long long> b;
        long long n; cin>>n; long long m; cin>>m;
		nhap(a,n); nhap(b,m);
        cout << minMaxProduct(a, b, n, m)<<endl;
    }
    return 0; 
}
