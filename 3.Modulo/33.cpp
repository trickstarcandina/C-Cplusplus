#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int findCountOfSolutions(int n, int p) { 
	ll ans = 0; 
	// Di chuyển tất cả các số nhỏ hơn số đã cho p. Lưu ý rằng chúng ta không đi qua từ 1 đến n, nhưng 1 đến p
	for (ll x=1; x<p; x++) { 
		// Nếu x là một giải pháp, thì đếm tất cả các số có dạng x + i * p sao cho x + i * p nằm trong phạm vi [1, n] 
		if ((x*x)%p == 1) { 
			// Số lớn nhất ở dạng x + p * i trong phạm vi [1, n]
			ll last = x + p * (n/p); 
			if (last > n) 
				last -= p; 
			// Thêm số lượng các dạng có dạng x + p * i. 1 được thêm cho x chính nó.
			ans += ((last-x)/p + 1); 
		} 
	} 
	return ans; 
} 
int main() { 
	int T;
    cin >> T;
    while (T--){
		ll n , p ;
		cin >> n >>p; 
		cout << findCountOfSolutions(n, p);
		cout<<endl; 
	}
	return 0; 
} 

