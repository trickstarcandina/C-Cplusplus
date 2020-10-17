#include<bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
int findmissing(vector<int> ar, int N) { 
    int l = 0, r = N - 1; 
    while (l <= r) { 
        int mid = (l + r) / 2; 
        // If this is the first element  which is not index + 1, then  missing element is mid+1 
        if (ar[mid] != mid + 1 &&  ar[mid - 1] == mid) 
            return mid + 1; 
        // if this is not the first missing element search in left side 
        if (ar[mid] != mid + 1) 
            r = mid - 1; 
        // if it follows index+1 property then  search in right side 
        else
            l = mid + 1; 
    } 
    // if no element is missing 
    return -1; 
} 
int search(vector<int> ar, int size) { 
	int a = 0, b = size - 1; 
	int mid; 
	while ((b - a) > 1) { 
		mid = (a + b) / 2; 
		if ((ar[a] - a) != (ar[mid] - mid)) 
			b = mid; 
		else if ((ar[b] - b) != (ar[mid] - mid)) 
			a = mid; 
	} 
	return (ar[mid] + 1); 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n;
		nhap(a,n-1); 
        //cout<<search(a, n-1)<<endl;
		cout << findmissing(a, n-1)<<endl;
    }
    return 0; 
}
