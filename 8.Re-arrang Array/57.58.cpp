#include<bits/stdc++.h>
using namespace std;
void stringArr(int n,string s[]){
	for(int i=0;i<n;i++)
	cin>>s[i];
}
int compare(string a,string b){
	string ab=a+b;
	string ba=b+a;
	if(ab > ba) return 1;else return 0; 
}
void swap(string &a,string &b){
	string c=a;
	a=b;
	b=c;
}
void result(int n,string s[]){
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	if(compare(s[i],s[j])==1) swap(s[i],s[j]);
}
void output(int n,string s[]){
	for(int i=0;i<n;i++)
	cout<<s[i];
	cout<<endl;
}
int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		string s[n];
		stringArr(n,s);
		result(n,s);
		output(n,s);
	}
	return 0;
}
