#include <bits/stdc++.h>
using namespace std;
bool ngto(int n){
	if(n==0||n==1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void check(int n){
	int k=1;
	if(n==2) cout<<1<<endl;
	else if(ngto(n)) cout<<2<<endl;
	else{
		for(int i=3;i<=n;i=i+2){
    		if(n%i==0){
   		 		k++;
    		}
		}
		cout<<k<<endl;
	}
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int n; cin>>n;
    	check(n);
	}
    return 0;
}
