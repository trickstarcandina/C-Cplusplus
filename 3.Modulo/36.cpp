#include <bits/stdc++.h>
using namespace std;
long long a,b,c;
long long mulmod(long long a,long long b,long long c){
    if (b == 1)
        return a%=c;
	else{
		long long m = mulmod(a, b/2,c);
    	if (b%2==0)
    	    return (m+m)%c;
    	else
    		return (m+m+a)%c;
	}	
}	
int main(){
    int T;
    cin >> T;
    while (T--){
    	cin>>a>>b>>c;
    	cout<<mulmod(a,b,c)<<endl;
	}
    return 0;
}
