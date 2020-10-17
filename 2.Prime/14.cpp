#include <bits/stdc++.h>
using namespace std;
bool ngto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int n; cin>>n;
    	if(ngto(n)) cout<<0<<endl;
    	else{
    		int j=0;
    		for(int i=(n/2);i>=2;i--){
    			if(n%i==0 && ngto(i)){ 
    				n=n/i;
    				j++;
				}	
			}
			if(j==3 && n==1) cout<<1<<endl;
			else cout<<0<<endl;
		}
	}
    return 0;
}
