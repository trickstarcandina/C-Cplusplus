#include <bits/stdc++.h>
using namespace std;
long long a[100];
void fibo(long long a[]){
	a[0]=0; a[1]=1;
	for (int i=2;i<=100;i++){
		a[i]=a[i-1]+a[i-2];
	}
}
bool check(long long n, long long a[]){
    for(int i=0;i<=100;i++){
    	if(n==a[i]) return true;
	}
	return false;
}
int main() { 
	int T; cin >> T;
	fibo(a);
    while (T--){
        long long n; cin >> n;
		if(check(n,a)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl ; 
	}
	return 0; 
} 

