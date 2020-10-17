#include<bits/stdc++.h>
using namespace std;
void nhap(vector<int> &a,vector<int> &b,int &n){
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
        b.push_back(x);
	}
}
void result(vector<int> a,int f,int l){
	int i=f,j=l,mid=(i+j)/2;
	while(i<j){
		while(a[i]<a[mid]) i++;
		while(a[j]>a[mid]) j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++; j--;
		}
		if(i<l) result(a,i,l);
		if(j>f) result(a,f,j);
	}
}
int binarySearch(vector<int> a, int key, int left, int right){
    if(left > right) return -1; 
    else{
        int mid = (left + right) / 2;
        if(a[mid] == key) return mid;
        if(a[mid] > key)  return binarySearch(a, key, left, mid - 1);
        if(a[mid] < key)  return binarySearch(a, key, mid + 1, right);
        }
}
void out(int n,vector<int> a,vector<int> b){
	for(int i=0;i<n;i++){
		if(b[i]==a[n-1]) cout<<"_"<<" ";
		else {
			int x=binarySearch(a,b[i],0,n-1)+1;
			cout<<a[x]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;cin>>n;
		vector<int> a; vector<int> b;
		nhap(a,b,n);
		result(a,0,n-1);
		out(n,a,b);
	}
}

