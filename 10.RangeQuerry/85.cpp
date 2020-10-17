#include <bits/stdc++.h> 
using namespace std;  
void nhap(vector<long long> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
long long maxSubArraySum(vector<long long> a, int size) { 
    long long max_so_far = a[0]; 
    long long curr_max = a[0]; 
    for (int i = 1; i < size; i++) { 
		curr_max = max(a[i], curr_max+a[i]); 
		max_so_far = max(max_so_far, curr_max); 
    } 
    return max_so_far; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<long long> a; 
        int n; cin>>n;
		nhap(a,n);
        cout << maxSubArraySum(a, n)<<endl; 
    }
    return 0; 
} 
