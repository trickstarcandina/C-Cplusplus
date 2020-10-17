#include<iostream>
using namespace std;
void arr(int n,long long a[]){
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void swap(int &a,int &b){
	int c=a; a=b; b=c;
}
void result(int n,long long a[]){
	int i=0;
	while(i<n-1){
		if(a[i]==0){
			for(int j=i+1;j<n;j++)
				if(a[j] != 0) {
					swap(a[i],a[j]);
					break;
			}
		} 
	    i++;
	}
}
void out(int n,long long a[]){
	result(n,a);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		long long a[n];
		arr(n,a);
		out(n,a);
	}
}




