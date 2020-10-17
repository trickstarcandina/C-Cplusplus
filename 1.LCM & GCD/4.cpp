#include <bits/stdc++.h>
using namespace std;
long long gcd(long long x, long long y){
    // if (y == 0)
    //     return x;
    // else
    //     return gcd(y, x % y);
    return (!y) ? x : gcd(y, x%y);
}
//1
// 1221
// 1234567891011121314151617181920212223242526272829
//tinh b%a
//ucln(b,a) =ucls(a,b%a);
long long Modulo(string b, long long a){
    long long ans = 0;
    for (int i = 0; i < b.size(); i++)
        ans = (ans * 10 + b[i] - '0') % a;
    return ans;
}
int main(){
    int T;
    cin >> T;
    while (T--){
        long long a;
        string b;
        cin >> a >> b;
        cout << gcd(a, Modulo(b, a)) << endl;
    }
    return 0;
}
