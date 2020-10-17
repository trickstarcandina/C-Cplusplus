#include <bits/stdc++.h> 
using namespace std; 
// function to return equivalent base 4 number of the given binary number 
int equivalentBase4(string bin) { 
	if (bin.compare("00") == 0) 
		return 0; 
	if (bin.compare("01") == 0) 
		return 1; 
	if (bin.compare("10") == 0) 
		return 2; 
	return 3; 
} 
// function to check whether the given binary number is divisible by 5 or not 
string isDivisibleBy5(string bin) { 
	int l = bin.size(); 
	if (l % 2 != 0) 
	// add '0' in the beginning to make length an even number 
		bin = '0' + bin; 
	// to store sum of digits at odd and even places respectively 
	int odd_sum, even_sum = 0; 
	// variable check for odd place and even place digit 
	int isOddDigit = 1; 
	for (int i = 0; i<bin.size(); i+= 2) { 
		// if digit of base 4 is at odd place, then add it to odd_sum 
		if (isOddDigit) 
			odd_sum += equivalentBase4(bin.substr(i, 2)); 
		// else digit of base 4 is at even place, add it to even_sum 
		else
			even_sum += equivalentBase4(bin.substr(i, 2)); 
		isOddDigit ^= 1; 
	} 
	// if this diff is divisible by 11(which is 5 in decimal) then, the binary number is divisible by 5 
	if (abs(odd_sum - even_sum) % 5 == 0) 
		return "Yes"; 
	// else not divisible by 5 
	return "No"; 			
} 
int main(){
	int T;cin>>T;
	while(T--){
        string s;
		cin>>s;
		cout << isDivisibleBy5(s); 
        cout<<endl;
	}
	return 0; 
}