#include <bits/stdc++.h>
using namespace std;
int check(int n,int k){
	int d=0,i=2;
	while(n!=1){
		if(n%i==0){
			d=d+1;
			if(d==k) return i;
			n=n/i;
		}
		else i++;
	}
	return -1;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int n,k; cin>>n>>k;
    	cout<<check(n,k)<<endl;
	}
    return 0;
}
