#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
} 
/* Function prints Intersection of arr1[] and arr2[] m is the number of elements in arr1[] n is the number of elements in arr2[] */
int printIntersection(vector<int> arr1, vector<int> arr2, int m, int n) { 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
	    if (arr1[i] < arr2[j]) i++; 
	    else if (arr2[j] < arr1[i]) j++; 
	    else /* if arr1[i] == arr2[j] */
	    { 
	    cout << arr2[j] << " "; 
	    i++; 
	    j++; 
	    } 
    } 
} 
int printUnion(vector<int> arr1, vector<int> arr2, int m, int n) { 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
           cout << arr1[i++] << " ";  
        else if (arr2[j] < arr1[i]) 
           cout << arr2[j++] << " ";  
        else{ 
           cout << arr2[j++] << " "; 
           i++; 
        } 
    } 
    /* Print remaining elements of the larger array */
    while(i < m) cout << arr1[i++] << " "; 
    while(j < n) cout << arr2[j++] << " "; 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a; vector<int> b;
        int n,m; cin>>n>>m;
		nhap(a,n); nhap(b,m);
        printUnion(a, b, n, m);
        cout<<endl;
	    printIntersection(a, b,n, m); 
        cout<<endl;
    }
    return 0; 
}
