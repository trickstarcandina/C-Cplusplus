#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<long long> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
int out(vector<long long> a, int n) { 
    vector<long long> b(10,0);
	for(int i=0;i<n;i++){
        long long x=0;
        while(a[i]>0){
            x=a[i]%10;
            b[x]++;
            //b.push_back(x);
            a[i]=a[i]/10;
        }
    }
    for(int i=0;i<10;i++){
        if(b[i]>0) cout<<i<<" ";
    }
    cout<<endl;
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<long long> a;
        int n; cin>>n;
		nhap(a,n); 
        out(a, n);
    }
    return 0; 
}
