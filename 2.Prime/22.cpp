#include <bits/stdc++.h>
using namespace std;
bool ngto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void check(int n){
	for(int i=1;i<=n;i++){
		if(i%2==0) cout<<2<<" ";
		else {
			if(ngto(i)) cout<<i<<" ";
			else{
				for(int j=3;j<sqrt(n);j++){
					if(i%j==0 && ngto(j)){
						cout<<j<<" ";
						break;
					}
				}
			}
		}
	}
	cout<<endl;
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
