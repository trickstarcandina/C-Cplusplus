#include <bits/stdc++.h> 
using namespace std; 
// Function to calculate sum of all numbers present in a string containing alphanumeric characters 
int findSum(string str) { 
	// A temporary string 
	string temp = ""; 
	// holds sum of all numbers present in the string 
	int sum = 0; 
	// read each character in input string 
    for(int i=0;i<str.size();i++){
        char ch=str[i]; 
		// if current character is a digit 
		if (isdigit(ch)) 
			temp += ch; 
		// if current character is an alphabet 
		else{ 
			// increment sum by number found earlier 
			// (if any) 
			sum += atoi(temp.c_str()); 

			// reset temporary string to empty 
			temp = ""; 
		} 
	} 
	// atoi(temp.c_str()) takes care of trailing 
	// numbers 
	return sum + atoi(temp.c_str()); 
} 
int main() { 
    int t; cin>>t;
    while(t--){
	    string str ;
        cin>>str; 
	    cout << findSum(str)<<endl; 
    }
	return 0; 
} 
