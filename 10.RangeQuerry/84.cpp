#include <bits/stdc++.h>
using namespace std;
void sang(int l,int r) {
    vector<bool> prime(r-l+1,true);
    //for(int i = 0; i <= r-l;++i) {
    //    prime[i] = true;
    //}
    for (int i = 2; i * i <= r; ++i) {
    	for (int j = max(i * i, (l + (i - 1)) / i * i); j <= r; j += i) {
        	prime[j - l] = false;
    	}
	}
	int dem=0;
	for (int i = max(l, 2); i <= r; ++i) {
    	if (prime[i - l]) dem++;
	}
	cout<<dem<<endl;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int l,r; cin>>l>>r;
    	sang(l,r);
    }
    return 0;
}
