#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
int countPairsWithDiffK(vector<int> arr, int n, int k) { 
	int count = 0; 
	sort(arr.begin(), arr.begin()+n); 
	for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j]+arr[i]==k) count++;
        }
    } 
    return count;
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; int k; cin>>k;
		nhap(a,n); 
        cout << countPairsWithDiffK(a, n, k)<<endl;
    }
    return 0; 
}
