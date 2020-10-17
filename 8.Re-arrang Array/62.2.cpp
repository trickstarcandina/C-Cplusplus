#include <iostream>
using namespace std;
int arr[10000];
int maxx(int num1, int num2){
	if (num1>num2){
		return num1;
	}
	else
		return num2;
}
int minn(int num1, int num2){
	if(num1<num2){
		return num1;
	}
	else
		return num2;
}
long long  maxProduct(int arr[], int n){
	long long localmin=1, localmax=1;//localmax is maximum +ve integer
	long long maxproduct =0;			//localmin is least -ve integer
	for (int i = 0; i < n; ++i){
		if( arr[i]>0) //if the element is greater than 0
		{				//product previous max to the element
			localmax = localmax * arr[i];
			localmin = minn(localmin*arr[i],1);
		}
		else if(arr[i]==0){
			localmax = 1;
			localmin = 1;
		}
		else  //if the element is negative
		{
			long long t = localmax;
			localmax = maxx(localmin * arr[i], 1);
			localmin = t * arr[i];
		}
		if(localmax > maxproduct){
			maxproduct = localmax;
		}
	}
	cout<<maxproduct<<endl;
}
void nhap(int arr[],int n){
	for(int i=0;i<n;i++)
		cin>>arr[i];
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; 
		nhap(arr,n);
		maxProduct(arr, n); 
	}
	return 0;
}
