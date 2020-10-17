#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
void print2Smallest(vector<int> arr, int arr_size) { 
	int i, first, second; 
	if (arr_size < 2) { 
		return; 
	} 
	first = second = INT_MAX; 
	for (i = 0; i < arr_size ; i ++) { 
		if (arr[i] < first) { 
			second = first; 
			first = arr[i]; 
		} 
		else if (arr[i] < second && arr[i] != first) 
			second = arr[i]; 
	} 
	if (second == INT_MAX) 
		cout << -1<<endl; 
	else
		cout << first << " " << second << endl; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; 
		nhap(a,n);
        print2Smallest(a, n);  
    }
    return 0; 
}