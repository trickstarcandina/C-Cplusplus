#include<bits/stdc++.h>
using namespace std;
const long long mod=1000000007;
long long gcd(long long a,long long b){
    long long temp;
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

int main(){
    int t;cin>>t;
    while(t--){
        long long a,x,y;
        cin>>a>>x>>y;
        for(int i=1;i<=gcd(x,y);i++){
            cout<<a;
        }
        cout<<endl;
    }
}