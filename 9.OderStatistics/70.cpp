#include<bits/stdc++.h>
using namespace std;
void nhap(int n,vector <int> &x){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int p; cin>>p;
			x.push_back(p);
		}
	}
}
void out(int k,int n,vector <int> &x){
	sort(x.begin(),x.begin()+n*n);
	cout<<x[k-1];
}
int main(){
	int t; cin >>t;
	while(t--){
		int k,n; cin>>n>>k;
		vector <int> x;
		nhap(n,x);
		out(k,n,x);
		
	}
}
