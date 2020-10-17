#include<bits/stdc++.h>
using namespace std;
void input(int &n,vector<string> &arr){
	for(int i=0 ;i<n;i++){
		string m; cin>>m;
		arr.push_back(m);
	}
}
int myCompare(string X, string Y) { 
	string XY = X.append(Y); 
	string YX = Y.append(X); 
	return XY.compare(YX) > 0 ? 1: 0; 
} 
void printLargest(vector<string> arr) { 
	sort(arr.begin(), arr.end(), myCompare); 
	for (int i=0; i < arr.size() ; i++ ) 
		cout << arr[i]; 
} 
int main() { 
	int T; cin>>T;
	while(T--){
		vector<string> arr;
		int n; cin>>n; 
		input(n,arr); 
		printLargest(arr); 
		cout<<endl;
	}
	return 0; 
} 

