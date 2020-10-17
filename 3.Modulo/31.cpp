#include<bits/stdc++.h>
using namespace std;
long long powerLL(long long x, long long n, long long m) { 
	long long result = 1; 
	while (n) { 
		if (n % 2 != 0) 
			result = result * x % m; 
		n = n / 2; 
		x = x * x % m; 
	} 
	return result; 
}
long long mod(string a,long long b,long long m){ 
    long long res = 0; 
    for (int i = 0; i < a.length(); i++) 
        res = (res*10 + a[i]-'0') %m; 
    
    return powerLL(res,b,m); 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		long long b,m;
		cin>>a>>b>>m;
		cout<<mod(a,b,m)<<endl;
	}
	return 0;
}
