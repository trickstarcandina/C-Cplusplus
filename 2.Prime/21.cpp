#include <bits/stdc++.h>
using namespace std;
void sang(int n){
	int x=sqrt(n);
	bool prime[x+1];
	for(int i=0;i<=x;i++){
		prime[i]=true;
	}
	prime[0]=false; prime[1]=false;
	for(int i=2;i<x;i++){
		if(prime[i]==true)
			for(int j=i*i;j<=x;j+=i){
				prime[j]=false;
			}
	}
	for(int i=2;i<=x;i++){
		if(prime[i]==true) cout<<i*i<<" ";
	}
	cout<<endl;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int n; cin>>n;
    	sang(n);
	}
    return 0;
}
