#include <bits/stdc++.h>
using namespace std;
void sang(int m,int n) {
    bool prime[n-m+1];
    for(int i = 0; i <= n-m;++i) {
        prime[i] = true;
    }
    for (int i = 2; i * i <= n; ++i) {
    	for (int j = max(i * i, (m + (i - 1)) / i * i); j <= n; j += i) {
        	prime[j - m] = false;
    	}
	}
	for (int i = max(m, 2); i <= n; ++i) {
    	if (prime[i - m]) {
        	cout<<i<<" ";
    	}
	}
  	cout<<endl;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int m,n; cin>>m>>n;
    	sang(m,n);
    }
    return 0;
}
