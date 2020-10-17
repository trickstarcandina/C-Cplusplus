#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
void nhap2(int &Q,vector<int> &b ){
    int x;
    for(int i=0;i<Q*2;i++){
        cin>>x;
        b.push_back(x);
    }
}
void process(vector<int> a,vector<int> b,int n,int Q){
    int l,r;
    for(int i=0;i<Q*2;i=i+2){
        int sum=0;
        l=b[i]; r=b[i+1];
        for(int i=l;i<=r;i++){
            sum=sum+a[i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main() { 
	int t; cin>>t;
    while(t--){
        vector<int> a;
        vector<int> b;
		int n; cin>>n;
        int Q; cin>>Q;
		nhap(a,n);
        nhap2(Q,b);
        process(a,b,n,Q);
    }
	return 0; 
} 
