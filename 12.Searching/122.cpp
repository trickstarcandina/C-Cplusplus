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
	int l = 0; int r = 1; 
    if(k==0){ //k=0 va day co nhieu so bang nhau
        while(r < n) { 
            if(arr[r]==arr[l]){
                count++;  l=l+2; r=r+2;
            }
            else{
                l++; r++; 
            }
        }
    }
    else{ //truong hop con lai
	    while(r < n) { 
	    	if(arr[r] - arr[l] == k) { 
	    		count++; 
	    		l++; 
	    		r++; 
	    	} 
	    	else if(arr[r] - arr[l] > k) 
	    		l++; 
	    	else 
               r++; 
	    } 
    }
    if(count>0) return 1;
	else return -1;
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
