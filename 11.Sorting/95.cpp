#include <bits/stdc++.h> 
using namespace std; 
void arr(int n,int x,vector<int> &a,vector<int> &b){
	int m;
	for(int i=0;i<n;i++){
		cin>>m;
		a.push_back(m);
		b[i]=abs(x-a[i]);
	}
}
void result(vector<int> &a,vector<int> &b,int f,int l){
	int i=f,j=l,mid=(i+j)/2;
	while(i<j){
		while(b[i]<b[mid]) i++;
		while(b[j]>b[mid]) j--;
		if(i<=j){
			swap(b[i],b[j]);
			swap(a[i],a[j]);
			i++;
			j--;
		}
		if(i<l) result(a,b,i,l);
		if(j>f) result(a,b,f,j);
	}
}
void out(int n,vector<int> a){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main() { 
    int T;
    cin >> T;
    while (T--){
        int n,x; cin>>n>>x;
		vector<int> a; vector<int> b(n,0);
		arr(n,x,a,b);
        result(a,b,0,n-1);
		out(n,a); 
    }
    return 0; 
} 