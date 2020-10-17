#include<bits/stdc++.h> 
using namespace std; 
const int MAX_CHAR = 26; 
// Returns characters that needs to be added to make str 
void missingChars(string str,int k) { 
	// A boolean array to store characters present in string. 
	bool present[MAX_CHAR] = {false}; 
	// Traverse string and mark characters present in string. 
	for (int i=0; i<str.length(); i++) 
	{ 
		if (str[i] >= 'a' && str[i] <= 'z') 
			present[str[i]-'a'] = true; 
		else if (str[i] >= 'A' && str[i] <= 'Z') 
			present[str[i]-'A'] = true; 
	} 
	int x=0;
	for (int i=0; i<MAX_CHAR; i++) 
		if (present[i] == false) 
			x++;
    //cout<<x<<endl;
    if(x<=k)cout<< 1<<endl;
    else cout<< 0<<endl;
} 
int main() { 
	int t; cin>>t;
	while(t--){
		string str;
        cin>>str;
        int k; cin>>k;
		missingChars(str,k);
	}
	return 0; 
} 	 