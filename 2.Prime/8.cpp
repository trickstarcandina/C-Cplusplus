#include <bits/stdc++.h> 
using namespace std;   
void primeFactors(long long n)  {  
    // In số 2s chia n 
    while (n % 2 == 0)  {  
        cout << 2 << " ";  
        n = n/2;  
    }  
    // n phải là số lẻ tại thời điểm này. Vì vậy, chúng ta có thể bỏ qua một yếu tố (Lưu ý i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i + 2)  {  
        // Trong khi chia n, in i và chia n
        while (n % i == 0)  {  
            cout << i << " ";  
            n = n/i;  
        }  
    }  
    // Điều kiện này là để xử lý trường hợp khi n là số nguyên tố lớn hơn 2 
    if (n > 2)  
        cout << n << " ";  
}  
int main()  {  
	int T;
    cin >> T;
    while (T--){
    	long long n; cin>>n;
    	primeFactors(n); 
    	cout<<endl;
	}   
    return 0;  
}  
