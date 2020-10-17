#include<bits/stdc++.h>
using namespace std;
void xuly(string s){
	vector <int> a(10,0);
	for(int i=0;i<s.size();i++){
		int x=s[i]-'0';
		a[x]++;
	}
	int max=0;
	for(int i=0;i<=9;i++){
		if(a[i]%2==1 && a[i]>max){
			max=a[i];
		} 
	}
	if(a[0]==max && )
	
}
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		xuly(s);
	}	
}
