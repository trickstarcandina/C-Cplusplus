#include <bits/stdc++.h> 
using namespace std; 
//Hàm LCM
int FindLCM(int a, int b) { 
	return (a * b) / __gcd(a, b); 
} 
// Hàm để tính tất cả các ước trong phạm vi đã cho
int rangeDivisor(int m, int n, int a, int b) { 
	// Tìm LCM của a và b
	int lcm = FindLCM(a, b); 
	int a_divisor = n / a - (m - 1) / a; 
	int b_divisor = n / b - (m - 1) / b; 
	// Tìm ước số chung bằng cách sử dụng LCM
	int common_divisor = n / lcm - (m - 1) / lcm; 
	int ans = a_divisor + b_divisor - common_divisor; 
	return ans; 
}  
int main() { 
	int T;
    cin >> T;
    while (T--){
    	int m,n,a,b; cin>>m>>n>>a>>b;
    	cout<<rangeDivisor(m, n, a, b)<<endl;
	}
	return 0; 
} 

