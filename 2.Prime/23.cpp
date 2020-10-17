#include <bits/stdc++.h>
using namespace std;
int a[1000000];
void arr(){
	for(int i=2;i<=1000000;i++) a[i]=1;
	for(int i=2;i<=1000000;i++) {
		if(a[i]==1){
			for(int x=2;i*x<=1000000;x++)
				a[i*x]=0;
		}
	}	
}
void check(long long n){
	int d=0;
	long long x=sqrt(n);
	for(int i=2;i<=x;i++){
		if( a[i]==1) d++;
	}
	cout<<d<<endl;
}
int main(){
    int T;
    cin >> T;
    arr();
    while (T--){
    	long long n;  cin>>n;
    	check(n);
	}
    return 0;
}
