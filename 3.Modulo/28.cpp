#include <bits/stdc++.h>
using namespace std;
int check(int n,long long k){
	int s=(n/k)*(k*(k-1))/2;
	for(int i=n+1-n%k;i<=n;i++)
		s+=i%k;
	return s;
	
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		long long k;
		cin>>n>>k;
		cout<<check(n,k)<<endl;
	}
}
