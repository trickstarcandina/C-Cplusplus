#include <iostream> 
using namespace std; 
void nhap(int n,int a[]){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
//hàm đổi chỗ
int minSwap(int *arr, int n, int k) { 	
	//tim số phần tử nhỏ hơn bằng k 
	int count = 0; 
	for (int i = 0; i < n; ++i) 
		if (arr[i] <= k) 
			++count;  
	// Tìm các phần tử không mong muốn hiện tại có kích thước 'count
	int bad = 0; 
	for (int i = 0; i < count; ++i) 
		if (arr[i] > k) 
			++bad; 
	// Khởi tạo kết quả với giá trị 'bad'
	int ans = bad; 
	for (int i = 0, j = count; j < n; ++i, ++j) { 	
		// Số đếm giảm trước
		if (arr[i] > k) 
			--bad; 	
		// Số lượng tăng hiện tại
		if (arr[j] > k) 
			++bad; 	
		// Cập nhật và nếu số lượng 'bad' ít hơn trong hiện tại
		ans = min(ans, bad); 
	} 
	return ans; 
} 
int main() {
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int k; cin>>k;
		int a[n];
		nhap(n,a); 
		cout << minSwap(a, n, k) << endl; 
 	}
	return 0; 
} 

