#include <bits/stdc++.h> 
using namespace std; 
void nhap(vector<int> &a,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
}
// Function for binary search in ascending part 
int ascendingBinarySearch(vector<int> arr, int low, int high, int key) { 
    while (low <= high) { 
	    int mid = low + (high - low) / 2; 
	    if (arr[mid] == key) 
	    	return mid; 
	    if (arr[mid] > key) 
	    	high = mid - 1; 
	    else
	    	low = mid + 1; 
    } 
	return -1; 
} 
// Function for binary search in descending part of array 
int descendingBinarySearch(vector<int> arr, int low, int high, int key) { 
    while (low <= high) { 
	    int mid = low + (high - low) / 2; 
	    if (arr[mid] == key) 
	    	return mid; 
	    if (arr[mid] < key) 
	    	high = mid - 1; 
	    else
		    low = mid + 1; 
    } 
	return -1; 
} 
int findBitonicPoint(vector<int> arr ,int n, int l, int r ) { 
	int mid; 
	mid = (r + l) / 2; 
	if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]) { 
		return mid; 
	} 
	else
	    if(arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) { 
		    findBitonicPoint(arr,n, mid , r); 
	    } 
        else
	        if(arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1]) { 
		        findBitonicPoint(arr, n, l, mid); 
	        } 
}   
// Function to search key in bitonic array 
int searchBitonic(vector<int> arr, int n, int key, int index) { 
	if(key > arr[index]) 
		return -1; 
	else if(key == arr[index]) 
		return index; 
	else{ 
        int temp = ascendingBinarySearch(arr, 0, index - 1, key); 
		if (temp != -1) { 
			return temp; 
		} 
		// Search in right of k 
		return descendingBinarySearch(arr, index + 1, n - 1, key); 
	} 
} 
int main() { 
    int T;
    cin >> T;
    while (T--){
        vector<int> a;
        int n; cin>>n; int k; cin>>k;
		nhap(a,n); 
        int l, r; 
	    l = 0; r = n - 1;
        int index; 
	    index = findBitonicPoint(a, n, l, r);
        int x = searchBitonic(a, n, k, index); 
	    cout<<x<<endl;
    }
    return 0; 
} 

