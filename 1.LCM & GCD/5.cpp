#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main(){
    int T;
    cin >> T;
    while (T--){
    	long long a,x,y;
        cin>>a>>x>>y;       
    	string result;          
    	ostringstream convert;   
    	convert << a;      
    	result = convert.str(); 
        string m;
        for (int i=0;i<gcd(x,y);i++){
			m += result;
		}
        cout<<m<<endl;
    }
    return 0;
}
