#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int ss(int a,int b){
    if(a>b) return a;
    else return b;
}
void process(int n,int m,int a1[],int a2[]){
    int minn,maxx;
    if(n>m){
        maxx=n; minn=m;
    }
    else {
        maxx=m; minn=n;
    }
    long long sum=0;
    for(int i=0;i<minn;i++){
        sum=sum+ss(a1[i],a2[i]);
    }
    for(int i=minn;i<maxx;i++){
        if(maxx=n) sum+=a1[i];
        else sum+=a2[i];
    }
    cout<<sum<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a1[n]; int a2[m];
        nhap(a1,n); nhap(a2,m);
        process(n,m,a1,a2);
    }
}