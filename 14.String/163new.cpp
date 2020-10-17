#include <bits/stdc++.h> 
using namespace std; 
const int MAX_CHAR = 26; // assuming lower case only 
int countSubstringWithEqualEnds(string s) { 
	int result = 0; 
	int n = s.length(); 
	// Calculating frequency of each character in the string. 
	int count[MAX_CHAR] = {0}; 
	for (int i=0; i<n; i++) 
		count[s[i]-'a']++; 
	// Computing result using counts 
	for (int i=0; i<MAX_CHAR; i++) 
		result += (count[i]*(count[i]+1)/2); 
	return result; 
} 
int main() { 
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout << countSubstringWithEqualEnds(s)<<endl; 
    }
	return 0;
} 
