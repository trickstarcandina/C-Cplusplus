#include <bits/stdc++.h>
using namespace std;

void dem(int n){
	for(int i=2;i<=n;i++){
		int k=0;
		while(n%i==0){
			k++;
			n=n/i;
		}
		if(k>0) cout<<i<<" "<<k<<" ";
	}
	cout<<endl;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int n; cin>>n;
    	dem(n);
	}
    return 0;
}
