#include <bits/stdc++.h>
using namespace std;
int check(int a,int m){
	for(int i=0;i<=m-1;i++){
		if((a*i) % m ==1) return i;
	}
	return -1;
}

int main(){
	int T,a,m;
	cin>>T;
	while(T--){
		cin>>a>>m;
		cout<<check(a,m)<<endl;
	}
}
