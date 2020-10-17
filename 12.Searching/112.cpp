#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
int BinarySearch(vector<int> a, int n, int x){ 
	int left = 0;
	int right = n - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (x == a[mid]) 
			return mid;
		else if (x < a[mid]) 
			right = mid - 1;
		else if (x > a[mid]) 
			left = mid + 1;
	} 
	return -1;
}
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; int x; cin>>x;
		nhap(a,n); 
        if(BinarySearch(a,n,x)!=-1) cout<<1<<endl;
        else cout<<BinarySearch(a,n,x)<<endl;
    }
    return 0; 
}
