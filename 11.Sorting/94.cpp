#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
void rearrangeArray(vector<int> arr, int n) { 
	sort(arr.begin(), arr.begin()+n); 
	vector<int> tempArr(n,0); 
	int x = 0; 
	for (int i = n-1, j = 0; i > n / 2 || j <= n / 2; i--, j++) { 
		tempArr[x] = arr[i]; 
		x++; 
		tempArr[x] = arr[j]; 
		x++; 
	} 
	for (int i = 0; i < n; i++) 
		arr[i] = tempArr[i]; 
    for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
    cout<<endl;
} 

int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a; 
        int n; cin>>n;
		nhap(a,n);
	    rearrangeArray(a, n); 
        
    }
    return 0; 
} 