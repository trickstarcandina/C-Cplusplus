#include<bits/stdc++.h> 
using namespace std; 
const int MAX_CHAR = 26; 
void sortString(string &str) { 
    int charCount[MAX_CHAR] = {0}; 
    for (int i=0; i<str.length(); i++) 
        charCount[str[i]-'A']++;     
    for (int i=0;i<MAX_CHAR;i++) 
        for (int j=0;j<charCount[i];j++) 
            cout << (char)('A'+i); 
} 
void splitString(string str) { 
    string alpha;
    long long num=0; 
    for (int i=0; i<str.length(); i++) {      
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
            alpha.push_back(str[i]); 
        else    
            num=num+str[i]-'0';
    } 
    sortString(alpha);
    cout << num << endl; 
} 
int main() { 
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        splitString(s); 
    }	 
	return 0; 
} 
