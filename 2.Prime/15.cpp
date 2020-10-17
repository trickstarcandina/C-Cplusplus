#include <bits/stdc++.h>
using namespace std;
int check(int n,int p){
	int k=0;
	while(n%p==0) {
		k++;
		n=n/p;
	}
	return k;
	
}
void dem(int n,int p){
	int x=0;
	for(int i=1;i<=n/p;i++){
		if(i%p==0) x=x+check(i,p);
		x++;
	}
	cout<<x<<endl;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int n,p; cin>>n>>p;
    	dem(n,p);
	}
    return 0;
}
