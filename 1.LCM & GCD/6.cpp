#include <bits/stdc++.h> 
using namespace std; 
bool isSplittable(int n, int m) 
{ 
	unsigned long long total_sum = (n * (n + 1)) / 2; 
	unsigned long long sum_s1 = (total_sum + m) / 2; 
	unsigned long long sum_s2 = total_sum - sum_s1; 
	if (total_sum < m) 
		return false;  
	if (sum_s1 + sum_s2 == total_sum && 
		sum_s1 - sum_s2 == m)  
		return (__gcd(sum_s1, sum_s2) == 1); 
	return false; 
} 
int main(){
    int T;
    cin >> T;
    while (T--){
    long long n,m;
    cin>>n>>m;
	if (isSplittable(n, m)) 
		cout << "Yes"<<endl; 
	else
		cout << "No"<<endl; 
	}
	return 0; 
} 

