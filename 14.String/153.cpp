#include<bits/stdc++.h>
using namespace std;
void check(string s){
    for(int i=0;i<s.size();i++){
		string str1;
		string str2;
		
        if(str1.compare(str2)>0) swap(s[i],s[i+1]);
    }
    
}
int main(){
	int T;cin>>T;
	while(T--){
        string s;
		cin>>s;
		check(s);
        cout<<s<<endl;
	}
	return 0;
}

