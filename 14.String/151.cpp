#include<bits/stdc++.h>
using namespace std;
int number(string s){
	int x=s.length(),n=0,sum=0;
	for(int i=x-1;i>=x-4;i--){
		sum=sum+pow(2,n);
		n++;
	}
	if(sum%5==0) return 1;
    else return 0;
}
int main(){
	int T;cin>>T;
	while(T--){
        string s;
		cin>>s;
        if(number(s)==1) cout<<"Yes\n";
        else cout<<"No\n";
	}
	return 0;
}

