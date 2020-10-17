#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}

void result(int n,int a[],int b[]){
	for(int i=0;i<n;i++)
	if(i==0) b[i]=a[i]*a[i+1];else if(i==n-1) b[i]=a[i]*a[i-1]; else b[i]=a[i-1]*a[i+1];
}

void output(int n,int b[]){
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";
	cout<<endl;
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n],b[n];
		arr(n,a);
		result(n,a,b);
		output(n,b);
	}
}




