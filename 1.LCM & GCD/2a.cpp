#include <bits/stdc++.h>
using namespace std;
long long n;
int kt(int x){
    if (x < 2)  return 0;
	for (int i = 2; i <= sqrt((float)x); i ++){
        if (x%i==0) return 0;
    }
    return 1;
}
long long LCM(int n){
	vector<int> Nguyento;
	for(int i=0;i<=n;i++){
		if(kt(i)) Nguyento.push_back(i);
	}
	long long res=1;
	for (int i = 0; i < Nguyento.size(); i++){
		int x = Nguyento[i];
		while(x * Nguyento[i] <= n){
			x *= Nguyento[i];
		}
		res *= x;
	}
	return res;
}
int main(){
    int T;
    cin >> T;
    while (T--){
        cin >> n;
        cout << LCM(n) << endl;
    }
    return 0;
}

