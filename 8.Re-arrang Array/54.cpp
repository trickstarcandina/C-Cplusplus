#include<bits/stdc++.h> 
using namespace std;
void Res(int n,int a[]){
	int d;
	if (n%2==0) d=0;
	else d=1;
	for (int i=1;i<=n/2;i++) {
		cout<<a[i]<<" ";
		cout<<a[i+d+n/2]<<" ";
	}
	if (n % 2 == 1) cout<<a[1+n/2]<<" ";	 
	cout<<endl;
} 
int main (){
	int T;
	cin>>T;
	while (T--) {
		int n,a[1000];
		cin>>n;
		for (int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		Res(n,a);
	}
	return 0;
}
