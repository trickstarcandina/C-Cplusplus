#include <bits/stdc++.h> 
using namespace std; 
void arr(int n,string a){
	for(int i=1;i<=n;i++) cin>>a[i];
}
void change(int n,int d,string a,string &b){
	d=d%n;
    for(int i=d+1;i<=n;i++){
    	b=b+a[i];
    	b=b+" ";
    }
    for(int i=1;i<=d;i++){
    	b=b+a[i];
    	b=b+" ";
    }
}
int main(){
	int T; cin>>T;
	while(T--){
		int n,d;
		cin>>n>>d;
		string a,b;
		arr(n,a);
		change(n,d,a,b);
		cout<<b<<endl;
	}
}

