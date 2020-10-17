#include <iostream>
using namespace std;
long long maxx(int num1, int num2){
	if (num1>num2){
		return num1;
	}
	else
		return num2;
}
long long minn(int num1, int num2){
	if(num1<num2){
		return num1;
	}
	else
		return num2;
}
long long maxSubarrayProduct(long long arr[],long long n) { 
	long long max_ending_here = 1; 
	long long min_ending_here = 1; 
	long long max_so_far = 1; 
	long long flag = 0; 
	/* Các giá tri sau là duoc duy trì sau lan lap thu i:
	max luôn là 1 hoac mot so duong
	min luôn là 1 hoac mot so âm */
	for (int i = 0; i < n; i++) { 
		/* Neu là duong, cap nhat max.
		Chi cap nhat min neu min là am */
		if (arr[i] > 0) { 
			max_ending_here = max_ending_here * arr[i]; 
			min_ending_here = minn(min_ending_here * arr[i], 1); 
			flag = 1; 
		} 
		/* Neu phan tu này là 0, thì gtri toi da không the ket thúc o dây, 
		tao ca max và min 0.Gia su: output luôn >=1 */
		else if (arr[i] == 0) { 
			max_ending_here = 1; 
			min_ending_here = 1; 
		} 	
		/* Neu phan tu âm.
		max có the là 1 hoac duong. min có the là 1 hoac âm.
		min* Array [i], min tiep theo se là 1 neu truoc dó max là 1,
		neu không min tiep theo se là truoc max * mang [i] */
		else { 
			int temp = max_ending_here; 
			max_ending_here = maxx(min_ending_here * arr[i], 1); 
			min_ending_here = temp * arr[i]; 
		} 
		if (max_so_far < max_ending_here) 
			max_so_far = max_ending_here; 
	} 
	if (flag == 0 && max_so_far == 1) 
		return 0; 
	return max_so_far; 
}  
void nhap(long long arr[],long long n){
	for(int i=0;i<n;i++)
		cin>>arr[i];
}
int main() { 
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		long long arr[n]; 
		nhap(arr,n);
		cout << maxSubarrayProduct(arr, n)<<endl; 
	}
	return 0; 
} 
