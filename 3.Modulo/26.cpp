#include <bits/stdc++.h>
using namespace std;
long long powerLL(long long x,long long n,long long m) { 
	long long result = 1; 
	while (n) { 
		if (n % 2 != 0) 
			result = result * x % m; 
		n = n / 2; 
		x = x * x % m; 
	} 
	return result; 
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	long long x,y,p; cin>>x>>y>>p;
    	cout<<powerLL(x,y,p)<<endl;
	}
    return 0;
}
