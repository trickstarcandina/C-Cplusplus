#include<bits/stdc++.h>
using namespace std;

void arr(long long a[]){
	int N[9];
	N[1]=2;N[2]=3;N[3]=5;N[4]=7;N[5]=13;N[6]=17;N[7]=19;N[8]=31;
	for(int i=1;i<=8;i++){
	a[i]=pow(2,N[i]-1)*(pow(2,N[i])-1);	
}
}
bool check(long long n,long long a[]){
	for(int i=1;i<=8;i++){
	if(n==a[i]) return true;
}	
	return false;
}
int main(){
	int T;
	cin>>T;
	long long a[9];
	arr(a);
	while(T--){
		long long n;
		cin>>n;
		if(check(n,a)) cout<<"1"<<endl;else cout<<"0\n";
	}
}
