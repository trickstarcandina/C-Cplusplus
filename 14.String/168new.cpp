#include <bits/stdc++.h> 
using namespace std; 
string dao(string s){
	int length = s.length();
    string temp;
    for (int i = length-1; i >=0; i--) {
        temp.push_back(s[i]);
    }
    return temp;
}
void reverseWords(string s){
	string ss;
	string x;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]==' '){
			ss.append(dao(x));
			//cach 2 reverse(x.begin(), x.end()); ss.append(x);
			ss.append(" ");
			x.clear();
		}
		else {
			//x.insert(0,1,s[i]);
			x.push_back(s[i]);
		}
	}
	cout<<ss<<endl;
}
int main() { 
    int t; cin>>t;
	string s;
	getline(cin,s); 
    while(t--){
        getline(cin,s); 
		s.insert(0," ");
	    reverseWords(s); 
    }
	return 0; 
} 
