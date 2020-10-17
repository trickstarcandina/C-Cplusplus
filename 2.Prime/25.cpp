#include <bits/stdc++.h>
using namespace std;
int FindLCM(int a, int b) { 
	return (a * b) / __gcd(a, b); 
} 
int sang(int m,int n,int a){
	int k=0;
	for(int i=m;i<=n;i++){
		if(i%a==0){
			int o=i/a;
			for(int j=o;j*a<=n;j++){
				k++;
			}
			break;
		}
	}
	return k;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int m,n,a,b; cin>>m>>n>>a>>b;
    	cout<<sang(m,n,a)+sang(m,n,b)-sang(m,n,FindLCM(a,b))<<endl;
	}
    return 0;
}
