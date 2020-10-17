#include<bits/stdc++.h>
using namespace std;

void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
void out(vector<int> a,int n,int k){
	sort(a.begin(),a.begin()+n);
	cout<<a[k-1]<<endl;
}
int main(){
	int t; cin >>t;
	while(t--){
		vector<int> a;
		int k,n; cin>>n>>k;
		nhap(a,n);
		out(a,n,k);
		
	}
}
