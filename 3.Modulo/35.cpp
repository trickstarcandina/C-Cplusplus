#include <bits/stdc++.h>
using namespace std;
long long p=pow(10,9)+7;
long long horner(int poly[], int n, int x) { 
    long long result = poly[0]; 
    for (int i=1; i<n; i++) 
        result = (result*x + poly[i])%p; 
    return result; 
} 
void nhap(int n, int poly[]){
	for(int i=0;i<n;i++){
        cin >> poly[i];
	}
}
int main(){
    int T;
    cin >> T;
    while (T--){
        int n,x;
        cin >> n >> x;
        int poly[n];
        nhap(n,poly);
        cout << horner(poly, n, x) << endl;
    }
    return 0;
}
