#include<bits/stdc++.h> 
using namespace std; 
long long maxPrimeFactors(long long n) { 
	// Khởi tạo biến thừa số nguyên tố tối đa với biến số thấp nhất 
	long long maxPrime = -1; 
	// In số 2s chia n
	while (n % 2 == 0) { 
		maxPrime = 2; 
		n >>= 1; // tương đương với :v  n /= 2 
	} 
	// n phải là số lẻ tại thời điểm này, do đó bỏ qua các số chẵn và chỉ lặp lại cho các số nguyên lẻ
	for (int i = 3; i <= sqrt(n); i += 2) { 
		while (n % i == 0) { 
			maxPrime = i; 
			n = n / i; 
		} 
	} 
	// Điều kiện này là để xử lý trường hợp khi n là số nguyên tố lớn hơn 2
	if (n > 2) 
		maxPrime = n; 
	return maxPrime; 
} 
int main(){
    int T;
    cin >> T;
    while (T--){
    	long long n; cin>>n;
    	cout<<maxPrimeFactors(n)<<endl;
	}
    return 0;
}
