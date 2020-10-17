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
        temp = (a[i]-'0') + (b[i]-'0') + temp;    // tinh tong tung doi mot
        s.insert(0,1,numToString(temp%10));         // gan phan don vi vao
        temp = temp/10;     // lay lai phan hang chuc
    }
    if (temp>0)  // neu hang chuc > 0 thi them vao KQ
	{
        s.insert(0,1,numToString(temp));
    } 
    return s;
}
int main(){
    int T;
    cin >> T;
    while (T--){
        string a,b;
        cin >> a>> b;
        cout << sum(a,b) << endl;
    }
    return 0;
}
