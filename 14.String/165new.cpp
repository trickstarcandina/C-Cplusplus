#include <bits/stdc++.h> 
using namespace std; 
const int MAX_CHAR = 256; 
// Function to print distinct characters in given string str[] 
void printDistinct(string str) { 
	int n = str.length(); 
	// count[x] is going to store count of character 'x' in str. If x is not present, then it is going to store 0. 
	int count[MAX_CHAR]; 
	// index[x] is going to store index of character  'x' in str. If x is not present or x is  more than once, 
    //then it is going to store a value (for example, length of string) that cannot be  a valid index in str[] 
	int index[MAX_CHAR]; 
	// Initialize counts of all characters and indexes of distinct characters. 
	for (int i = 0; i < MAX_CHAR; i++) { 
		count[i] = 0; 
		index[i] = n; // A value more than any index in str[] 
	} 
	// Traverse the input string 
	for (int i = 0; i < n; i++) { 
		// Find current character and increment its count 
		char x = str[i]; 
		++count[x]; 
		// If this is first occurrence, then set value in index as index of it. 
		if (count[x] == 1 && x !=' ') 
			index[x] = i; 
		// If character repeats, then remove it from index[] 
		if (count[x] == 2) 
			index[x] = n; 
	} 
	// Since size of index is constant, below operations take constant time. 
	sort(index, index+MAX_CHAR); 
	for (int i=0; i<MAX_CHAR && index[i] != n; i++) 
	cout << str[index[i]]; 
} 
int main() { 
    int t; cin>>t;
    while(t--){
        string str;
        cin>>str;
        printDistinct(str);
        cout<<endl;
    }
	return 0; 
} 
