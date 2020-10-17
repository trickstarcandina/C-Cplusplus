#include <bits/stdc++.h> 
using namespace std; 
void nhap(int n,int a[]){
	for(int i=1;i<=n;i++) cin>>a[i];
}
int gcd(int a, int b) { 
	if (b == 0) 
		return a; 

	else
		return gcd(b, a % b); 
} 
// Chức năng xoay mảng trái [] của siz n bởi d * 
void leftRotate(int arr[], int d, int n) { 
	int g_c_d = gcd(d, n); 
	for (int i = 0; i < g_c_d; i++) { 
		// di chuyển giá trị thứ i của các khối 
		int temp = arr[i]; 
		int j = i;
		while (1) { 
			int k = j + d; 
			if (k >= n) 
				k = k - n; 
			if (k == i) 
				break; 
			arr[j] = arr[k]; 
			j = k; 
		} 
		arr[j] = temp; 
	} 
} 
void printArray(int arr[], int size) { 
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
} 
int main() { 
	int T;cin>>T;
	while(T--){
		int n,d;
		cin>>n>>d;
		int arr[n]; 
		nhap(n,arr);
		int m = sizeof(arr) / sizeof(arr[0]); 
		leftRotate(arr, d, m); 
		printArray(arr, m); 
	}
	return 0; 
} 

