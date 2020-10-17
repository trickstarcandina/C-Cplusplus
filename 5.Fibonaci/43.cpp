#include <bits/stdc++.h>
using namespace std;
int fibonaci(int n){
	int a[100];
	a[1]=1,a[2]=1;
	if(n==1||n==2) return 1;
	for (int i=3;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	return a[n];
}
bool check(int n){
    int i = 0;
    while(n > fibonaci(i)){
        ++i;
    }
    if(n == fibonaci(i))
        return 1;
    return 0;
}
void xuly(int n, int a[]){
	for(int i=0;i<n;i++)
        if(check(a[i])) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int T;
    cin >> T;
    while (T--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        	cin>>a[i];
        xuly(n,a);
    }
    return 0;
}

