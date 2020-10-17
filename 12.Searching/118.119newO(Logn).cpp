#include<bits/stdc++.h> 
using namespace std; 
void nhap(int a[],int &n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
} 
int count(int arr[], int x, int n) {     
    /* get the index of first occurrence of x */
    int *low = lower_bound(arr, arr+n, x); 
    // If element is not present, return 0 
    if (low == (arr + n) || *low != x) 
       return 0;   
    /* Else get the index of last occurrence of x.  Note that we  are only looking in the  subarray after first occurrence */   
    int *high = upper_bound(low, arr+n, x);      
    return high - low; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        int n; cin>>n; int x; cin>>x;
        int a[n];
		nhap(a,n); 
        int c = count(a, x, n);
        if(c==0) cout<<-1<<endl;
        else cout<<c<<endl;
    }
    return 0; 
}
//Time Complexity: O(Logn)