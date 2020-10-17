#include <bits/stdc++.h>
using namespace std;
void sang(int n) {
    bool prime[n+1];
    for(int i = 0; i <= n;++i) {
        prime[i] = true;
    }
    prime[0] = false; prime[1] = false;
    for(int i = 2; i * i <= n; ++i) {
        if(prime[i] == true) {
            for(int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++) {
    	if (prime[i] == true && prime[n-i]==true) {
      		cout<<i<<" "<<n-i;
      		break;
    	}
    	else {
    		prime[i] == false;
			prime[n-i]==false;
		}
  	}
  	cout<<endl;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int n; cin>>n;
    	sang(n);
    }
    return 0;
}
