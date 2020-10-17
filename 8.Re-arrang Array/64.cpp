#include<bits/stdc++.h>
using namespace std;
int k,n;
int x[10000];
void out(){
	for(int i=0;i<k*n;i++){
		cin>>x[i];
	}
	sort(x,x+k*n);
	for(int i=0;i<k*n;i++){
		cout<<x[i]<<" ";
	}	
	cout<<endl;
}
int main(){
	int t; cin >>t;
	while(t--){cin>>k>>n;
		out();	
	}
}
