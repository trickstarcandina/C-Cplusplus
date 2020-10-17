#include<bits/stdc++.h>
using namespace std;

void result(string a,string b){
	int n1=a.length(),n2=b.length(),n=abs(n1-n2);
	string c;
	for(int i=1;i<=n;i++)
	c=c+'0';
	if(n1<n2) a=c+a;else if(n1>n2) b=c+b;
	if(a<b) swap(a,b);
	n=a.length()-1;
	int x=0;
	stack<int>s;
	for(int i=n;i>=0;i--){
		x= (a[i]-'0')-(b[i]-'0') -x;
		if(x<0){
			s.push(x+10);
			x=1;
		} else {
			s.push(x);
			x=0;
		}
	}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	cout<<endl;
}

int main(){
	int T;
	cin>>T;
	string a,b;
	while(T--){
		cin>>a>>b;
		result(a,b);
	}
}

