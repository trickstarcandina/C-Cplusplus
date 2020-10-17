#include<iostream>
#include<cmath>
using namespace std;
long long ucln(long long a,long long b){
	long long r=1;
	while(r!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long long bcnn(long long a,long long b){
	long long c= a*b/ucln(a,b);
	return c;
}
long long result(long long n,long long d){
	if(pow(10,d)<=n) return -1;
	long long x=pow(10,d-1)-1;
	x=x/n;
	return (x+1)*n;
}
int main(){
	long long T,a,b,c,d;
	cin>>T;
	while(T--){
		cin>>a>>b>>c>>d;
		b=bcnn(a,b);
		c=bcnn(b,c);
		cout<<result(c,d)<<endl;
	}
}

