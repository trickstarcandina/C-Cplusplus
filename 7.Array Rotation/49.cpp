#include <bits/stdc++.h> 
using namespace std; 
int maxSum(int arr[], int n); 
int findPivot(int arr[], int n);  
int maxSum(int arr[], int n) { 
	int sum = 0; 
	int i; 
	int pivot = findPivot(arr, n); 
	int diff = n - 1 - pivot; 
	for(i = 0; i < n; i++) { 
		sum= sum + ((i + diff) % n) * arr[i]; 
	} 
	return sum; 
} 
int findPivot(int arr[], int n) { 
	int i; 
	for(i = 0; i < n; i++) { 
		if(arr[i] > arr[(i + 1) % n]) 
			return i; 
	} 
} 
int main(void) { 
	int arr[] = {8, 3, 1, 2}; 
	int n = sizeof(arr) / sizeof(int); 
	int max = maxSum(arr, n); 
	printf("%d", max); 
	return 0; 
} 

