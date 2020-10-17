#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
void kLargest( vector<int> arr, int n, int k) {  
	sort(arr.begin(), arr.begin() + n, greater<int>()); 
	for (int i = 0; i < k; i++) 
		cout << arr[i] << " "; 
    cout<<endl;
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; int k; cin>>k;
		nhap(a,n); 
        kLargest(a, n, k);
    }
    return 0; 
}
