#include<bits/stdc++.h>
using namespace std;
int n;
void nhap(){
	int max=-1;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		if(max<x) max=x;
	}
	cout<<max<<endl;
}
int main(){
	int t; cin >>t;
	while(t--){ cin>>n;
		nhap();
		
	}
}
