#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
int kthSmallest(vector<int> arr, int n, int k) { 
	sort(arr.begin(), arr.begin()+n); 
	return arr[k-1]; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; int k; cin>>k;
		nhap(a,n); 
        cout<<kthSmallest(a, n, k)<<endl;
    }
    return 0; 
}
