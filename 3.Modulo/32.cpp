#include<bits/stdc++.h> 
using namespace std; 
// In tất cả k sao cho mảng [i]% k giống nhau cho tất cả i
void printEqualModNumbers (int arr[], int n) { 
	sort(arr, arr + n); 
	// khác biệt tối đa sẽ là sự khác biệt giữa phần tử đầu tiên và phần tử cuối cùng của mảng được sắp xếp
	int d = arr[n-1] - arr[0]; 
	// Tìm tất cả các ước của d và lưu trong vectơ v []
	vector <int> v; 
	for (int i=1; i*i<=d; i++) { 
		if (d%i == 0) { 
			v.push_back(i); 
			if (i != d/i) 
				v.push_back(d/i); 
		} 
	} 
	// kiểm tra từng v [i] nếu mô đun của nó với từng phần tử mảng có giống nhau hay không
	int dem=0;
	for (int i=0; i<v.size(); i++) { 
		int temp = arr[0]%v[i]; 
		// kiểm tra từng phần tử mảng nếu mô đun của nó với k có bằng k hay không
		int j; 
		for (j=1; j<n; j++) 
			if (arr[j] % v[i] != temp) 
				break; 
		// nếu kiểm tra là in đúng v [i]
		if (j == n) dem++;
			//cout << v[i] <<" "; 
	} 
	cout<<dem<<endl;
} 
int main() { 
	int t; cin >> t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		} 
		printEqualModNumbers(arr, n); 
	}
	return 0; 
} 

