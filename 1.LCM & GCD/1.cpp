#include<iostream>
using namespace std;
long long gcd(long long a, long long b) {
    long long tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long a,b;
		cin >> a >>b;
		long long x=a*b;
		cout << x/gcd(a,b)<<" "<< gcd(a,b)<<endl;
	}
}
