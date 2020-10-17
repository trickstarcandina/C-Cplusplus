#include <bits/stdc++.h>
using namespace std;
char numToString(int n){
    return (char)(n+48);
}
void chuanHoa(string &a, string &b) {
    if (a.length() >= b.length())
        b.insert(0, a.length()-b.length(), '0');  
    else
        a.insert(0, b.length()-a.length(), '0');
} 
string sum(string a, string b){
    string s = "";
    chuanHoa(a,b);  
    int l = a.length();
    int temp = 0;
    for (int i=l-1; i>=0; i--){
        temp = (a[i]-'0') + (b[i]-'0') + temp;  
        s.insert(0,1,numToString(temp%10));       
        temp = temp/10;     
    }
    if (temp>0){
        s.insert(0,1,numToString(temp));
    } 
    return s;
}
long long Modulo(string b){
	long long a=1e9+7;
    long long ans = 0;
    for (int i = 0; i < b.size(); i++)
        ans = (ans * 10 + b[i] - '0') % a;
    return ans;
}
int main(){
    int T;
    cin >> T;
    while (T--){
        int n; cin >> n;
        string first, second, temp;
        first = '1'; second = '1';
    	int i = 3;
    	if(n==1 || n==2) cout<<"1"<<endl;
    	//cout << 1 << " " << first << "\n";
    	//cout << 2 << " " << second << "\n";
    	else{
    		while (i <= n){
        		i++;
        		temp = sum(first,second);
       		 	//cout << i << " " << temp << "\n";
        		first = second;
        		second = temp;
    		}
    		if(temp.size()<10) cout<<temp<<endl;
    		else cout<<Modulo(temp)<<endl;
    	}
    }
    return 0;
}

