#include <bits/stdc++.h>
using namespace std;
bool ngto(long long n){
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
    	for(int i=1;i<=n;i++){
    		if(i%2==0) cout<<2<<" ";
    		else if (ngto(i)) cout<<i<<" ";
    		else {
    			for(int j=2;j<=(n/2);j++){
    				if(i%j==0 && ngto(j)) {
    					cout<<j<<" ";
    					break;
					}
    			
				}
			}	
		}
    	cout<<endl;	
    }
    return 0;
}
