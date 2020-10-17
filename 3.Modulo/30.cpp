#include <bits/stdc++.h>
using namespace std;
long long check(string n, long long m){
	long long ans = 0;
    for (int i = 0; i < n.size(); i++)
        ans = (ans * 10 + n[i] - '0') % m;
    return ans;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		string n;
		long long m;
		cin>>n>>m;
		cout<<check(n,m)<<endl;
	}
}
