#include <bits/stdc++.h>
using namespace std;
long long gcd(long long x, long long y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
    // return (!y) ? x : gcd(y, x%y);
}
long long lcm_of_arr(long long n)
{
    long long a[n + 5];
    a[0] = 1;
    long long ans = 1;
    for (int i = 1; i < n; i++)
    {
        a[i] = i + 1;
        ans = ((a[i] / gcd(a[i], ans)) * ans);
    }
    return ans;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        cout << lcm_of_arr(n) << endl;
    }
    return 0;
}
