#include <bits/stdc++.h>
using namespace std;
bool ngto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tong(int n){
	int x=0;
	while(n>0){
		x=x+n%10;
		n=n/10;
	}
	return x;
}
void check(int n){
	int x=tong(n);
	vector <int> a;
	if(ngto(n)) cout<<"No"<<endl;
    else{
    	for(int i=2;i<=n;i++){
    		while(n%i==0){
    			n=n/i;
    			a.push_back(i);	
			}
		}
	}
	int y=0;
	for(int i=0;i<a.size();i++){
		y=y+tong(a[i]);
		cout<<"";
	}
	if(x==y) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	int n; cin>>n;
    	check(n);
	}
    return 0;
}
