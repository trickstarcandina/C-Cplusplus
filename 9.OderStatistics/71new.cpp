#include<bits/stdc++.h> 
using namespace std;
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
long long FindMaxSum(vector<int> arr, int n) { 
	long long incl = arr[0]; 
	long long excl = 0; 
	long long excl_new=0;  
	for (int i = 1; i < n; i++) { 
		if(incl>excl)	excl_new =incl;
		else excl_new =excl;
		//excl_new = (incl > excl)? incl: excl; 
		incl = excl + arr[i]; 
		excl = excl_new; 
	} 
	return ((incl > excl)? incl : excl); 
} 
int main() { 
	int T;cin>>T;
	while(T--){
		vector<int> a;
		int n; cin>>n;
		nhap(a,n);
		cout<< FindMaxSum(a, n)<<endl; 
	}
	return 0; 
} 

