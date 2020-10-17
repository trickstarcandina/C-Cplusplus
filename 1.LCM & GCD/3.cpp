#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int n,a[1000000];
void nhap(){
	cin >> n;
	for(int i = 0; i <n ; i++)
		cin >> a[i];
}
long long pow2(long long n,long long k){
	if(k == 0) return 1;
	long long st = pow2(n,k/2);
	if(k % 2 == 0) return (st * st) % mod;
	return (st * st % mod) * n % mod;
}
void solve(){
	nhap();
	long long gcd = a[0];
	long long res = 1;
	for(int i = 1 ; i < n; i++)
		gcd =__gcd((long long)a[i],gcd);
	for(int i = 0 ; i < n ; i++)
		res=(res * pow2(a[i],gcd)) % mod;
	cout << res <<endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
