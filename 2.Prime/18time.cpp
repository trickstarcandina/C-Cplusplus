#include <bits/stdc++.h>
using namespace std;
int check(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return 1; 
    return 0;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	long long n; cin>>n;
    	cout<<check(n)<<endl;
	}
    return 0;
}
