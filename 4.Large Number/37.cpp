#include<bits/stdc++.h>
using namespace std;

char numtostring(int x){
	return(char)(x+48);
}
void chuanhoa(string &a, string &b){
	if(a.size()==b.size() && a.at(0)<b.at(0)){
			a.swap(b);
	}
	if(a.size()<b.size()){
		a.insert(0,b.size()-a.size(),'0');
		a.swap(b);	
	}
	else
		b.insert(0,a.size()-b.size(),'0');
}
string tru(string a, string b){
	string s="";
	chuanhoa(a,b);
	//cout<<" "<<a<<endl<<" "<<b<<endl;
	int l=a.size();
	int borrow=0;
	for(int i=l-1; i>=0;i--)
    {
        int tmp=(a[i]-'0')-(b[i]-'0')-borrow;
        if(tmp<0)
        {
            tmp+=10;
            borrow=1;
        }
        else 
			borrow=0;
        s.insert(0,1,numtostring(tmp%10));
    }
    while(s.length()>1 && s[0]=='0') s.erase(0,1);
    return s;
	
}
int main(){
    int T;
    cin >> T;
    while (T--){
        string a,b;
        cin >> a>> b;
        cout << tru(a,b) << endl;
    }
    return 0;
}
