#include <bits/stdc++.h> 
using namespace std; 
// returns number of words in str 
int countWords(string str) { 
    int state = 0; 
    int wc = 0; // word count 
    int i = 0; 
    // Scan all characters one  by one 
    while (i < str.length()) { 
        // If next character is a separator,  set the state as OUT 
        if (str[i] == ' ' || str[i] == '\n'||    str[i] == '\t') 
            state = 0; 
            // If next character is not a word  separator and state is OUT, then  set the state as IN and increment word count 
        else if (state == 0) { 
            state = 1; 
            ++wc; 
        } 
        // Move to next character 
        ++i; 
    }    
    return wc; 
} 
int main() { 
    int t; cin>>t;
    string str; 
    //cin.ignore();
    getline(cin, str);
    while(t--){
        getline(cin, str);
	    cout<<countWords(str)<<endl;
    }
	return 0; 
} 