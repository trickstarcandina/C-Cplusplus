#include<bits/stdc++.h>
using namespace std;
int number(string s){
	long long c=0,l=0;
	for(int i=0;i<s.length();i++){
        if(i%2==0) c=c+s[i]-'0';
        else l=l+s[i]-'0';
    }    
	long long x=abs(c-l);
	if(x%11==0) return 1;
    else return 0;
}
int main(){
	int T;cin>>T;
	while(T--){
        string s;
		cin>>s;
		cout<<number(s)<<endl;
	}
	return 0;
}

