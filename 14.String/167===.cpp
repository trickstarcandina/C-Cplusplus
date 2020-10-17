#include <bits/stdc++.h> 
using namespace std; 
int countDivisbleby4(string s,int m) { 
	// In the first loop we will count number of  0's, 4's and 8's present in the string 
	int count = 0; 
	for (int i = 0; i < m; ++i) 
	    if (s[i] == '4' || s[i] == '8' || s[i] == '0') 
			count++ ; 
	// In second loop we will convert pairs  of two consecutive characters into integer and store it in variable h . 
    // Then we check whether h is divisible by 4 or not . If h is divisible we increases 
	// the count with ( i + 1 ) as index of first character of pair 
	for (int i = 0; i < m - 1; ++i) { 
	    int h = ( s[i] - '0' ) * 10 + ( s[i+1] - '0' ); 
	    if (h % 4 == 0) 
		    count = count + i + 1 ; 
	} 
	return count; 
} 
int main() { 
    int t; cin>>t;
    while(t--){
        int m,n;
        cin>>m;
        string str;
        cin>>str; 
	    cout << countDivisbleby4(str,m)<<endl;
    } 
	return 0; 
} 
