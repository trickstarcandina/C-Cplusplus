#include<bits/stdc++.h>
using namespace std;
char numtostring(int x){
	return(char)(x+48);
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
        s.insert(0,1,numtostring(temp%10));    
        temp = temp/10;     
    }
    if (temp>0)  {
        s.insert(0,1,numtostring(temp));
    } 
    return s;
}
string nhanbe(char a, string b)    {
    string s = "";
    int temp = 0;
    for (int i=b.length()-1; i>=0; i--)      {
        temp = (a-'0') * (b[i]-'0') + temp;
        s.insert(0,1,numtostring(temp%10));
        temp = temp/10;
    } 
    if (temp>0){
        s.insert(0,1,numtostring(temp));
    } 
    return s;
}
string nhan(string a, string b)   {
    string s = "";
    int l = a.length();
    string s1[l]; 
    for (int i=l-1; i>=0; i--)   // nhan tung chu so cua a voi b sau do cong don vao
    {
        s1[i] = nhanbe(a[i], b);   // nhan tung so cua a voi b
        s1[i].insert(s1[i].length(), l-i-1, '0');   
        s = sum(s, s1[i]);  // cong don theo cach cong so lon
    }
    return s;
}
int main(){
    int T;
    cin >> T;
    while (T--){
        string a,b;
        cin >> a>> b;
        cout << nhan(a,b) << endl;
    }
    return 0;
}
