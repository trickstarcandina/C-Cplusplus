#include<bits/stdc++.h>
using namespace std;
void arr(int n,int a[]){
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void out(int n,int a[]){
	int mid=n/2,i=0;
	while(i<mid){
		cout<<a[n-1-i]<<" "<<a[i]<<" ";
		i++;
	}
	if(n%2==1) cout<<a[mid];
	cout<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n];
		arr(n,a);
		sort(a, a+n);
		out(n,a);
	}
}

