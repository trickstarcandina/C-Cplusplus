#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
/* For a given array arr[], returns the maximum j – i such that arr[j] > arr[i] */
int maxIndexDiff(vector <int> arr, int n)  {  
    int maxDiff;  
    int i, j;  
    int *LMin = new int[(sizeof(int) * n)];  
    int *RMax = new int[(sizeof(int) * n)]; 
    /* Construct LMin[] such that LMin[i] stores the minimum value from (arr[0], arr[1], ... arr[i]) */
    LMin[0] = arr[0];  
    for (i = 1; i < n; ++i)  
        LMin[i] = min(arr[i], LMin[i - 1]);  
  	/* Construct RMax[] such that RMax[j] stores the maximum value from (arr[j], arr[j+1], ..arr[n-1]) */
    RMax[n - 1] = arr[n - 1];  
    for (j = n - 2; j >= 0; --j)  
        RMax[j] = max(arr[j], RMax[j + 1]);  
    /* Traverse both arrays from left to right to find optimum j - i. This process is similar to merge() of MergeSort */
    i = 0, j = 0, maxDiff = -1;  
    while (j < n && i < n)  {  
        if (LMin[i] < RMax[j]){  
            maxDiff = max(maxDiff, j - i);  
            j = j + 1;  
        }  
        else
            i = i + 1;  
    }  
    return maxDiff;  
}  
int main() { 
    int t; cin>>t;
    while(t--){
        vector<int> a;
		int n; cin>>n;
		nhap(a,n);
        cout  << maxIndexDiff(a, n)<<endl; 
    }
    return 0; 
} 
