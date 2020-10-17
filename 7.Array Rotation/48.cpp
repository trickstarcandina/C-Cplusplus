#include <bits/stdc++.h> 
using namespace std;
void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int max(int n,int a[]){
	int i=0;
	while(i<n && a[i]<a[i+1])
	i++;
	return i+1;
}

int main(){
	int T; cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n];
		arr(n,a);
		cout<<max(n,a)<<endl;
	}
}

