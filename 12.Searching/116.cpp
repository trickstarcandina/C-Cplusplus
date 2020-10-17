#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
bool compare(int x, int y) { 
	return abs(x) < abs(y); 
} 
void findMinSum(vector<int> arr, int n) { 
	sort(arr.begin(), arr.begin() + n, compare); 
	int min = INT_MAX, x, y; 
	for (int i = 1; i < n; i++) { 
		if (abs(arr[i - 1] + arr[i]) <= min && arr[i - 1] + arr[i]!=0) { 
			min = abs(arr[i - 1] + arr[i]); 
			x = i - 1; 
			y = i; 
		} 
	} 
	cout << arr[x] + arr[y]<<endl; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; 
		nhap(a,n); 
        findMinSum(a, n); 
    }
    return 0; 
}