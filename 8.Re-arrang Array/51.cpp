#include<bits/stdc++.h>
using namespace std; 
vector <long long> a;
void xuly(){
	int n;cin>>n;
	vector <long long> b(n,-1);
	long long m;
	for(int i=0;i<n;i++){
		cin>>m;
		a.push_back(m);
	}
	for(int i=0;i<n;i++){
		if(a[i] >= 0 && a[i] < n) b[a[i]]=a[i];
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	a.clear();
	b.clear();
}
int main(){
	int t; cin>>t;
	while(t--){
		xuly();
	}
	return 0;
}
