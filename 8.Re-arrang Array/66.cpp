#include <bits/stdc++.h> 
using namespace std; 
string pro(string str) { 
	int l = str.length(); 
	int index = -1; 
	for (int i = l - 2; i >= 0; i--) { 
		if (str[i] > str[i+1]) { 
			index = i; 
			break; 
		} 
	} 
	int small = -1; 
	for (int i = l - 1; i > index; i--) { 
		if (str[i] < str[index]) { 
			if (small == -1) 
				small = i; 
			else if (str[i] >= str[small]) 
				small = i; 
		} 
	} 
	if (index == -1) 
		return "-1"; 
	if (small != -1) { 
		swap(str[index], str[small]); 
		return str; 
	} 
	return "-1"; 
} 
int main() {
	int t;
	cin >> t;
	while (t--) {
		string str; 
		cin>>str;
    	cout << pro(str)<<endl; 
	}
	return 0;
}
