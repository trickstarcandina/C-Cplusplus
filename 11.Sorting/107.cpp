#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
void out(vector<int> a,int n){
    sort(a.begin(),a.begin()+n); 
    int d=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) d++;
    }
    cout<<a[n-1]-a[0]+1-n+d<<endl;
}
int main() { 
    int T; cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; 
		nhap(a,n); 
        out(a,n);
    }
    return 0; 
}
