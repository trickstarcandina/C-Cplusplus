#include <bits/stdc++.h>
using namespace std;
long long a[1000000];
void arr(long long a[]){
	for(long long i=2;i<=1000000;i++) a[i]=1;
	for(long long i=2;i<=1000000;i++) {
		if(a[i]==1){
			for(long long x=2;i*x<=1000000;x++)
				a[i*x]=0;
		}
	}	
}
void check(long long l,long long r,long long a[1000000]){
	int d=0;
	long long x=sqrt(r);
	for(long long i=l;i<=x;i++){
		if( a[i] == 1) d++;
	}
	cout<<d<<endl;
}
int main(){
    int T;
    cin >> T;
    arr(a);
    while (T--){
    	long long l,r; cin>>l>>r;
    	check(l,r,a);
	}
    return 0;
}
