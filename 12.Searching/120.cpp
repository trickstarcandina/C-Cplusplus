#include<bits/stdc++.h> 
using namespace std; 
//bool isPrime[1000000];
void SieveOfEratosthenes(int n, bool isPrime[]) { 
	isPrime[0] = isPrime[1] = false; 
	for (int i=2; i<=n; i++) 
		isPrime[i] = true; 
	for (int p=2; p*p<=n; p++) { 
		if (isPrime[p] == true) { 
			for (int i=p*p; i<=n; i += p) 
				isPrime[i] = false; 
		} 
	} 
} 
void findPrimePair(int n) { 
	bool isPrime[n+1]; 
	SieveOfEratosthenes(n,isPrime); 
	int check=0;
	for (int i=0; i<n; i++) { 
		if (isPrime[i] && isPrime[n-i]) { 
			cout << i << " " << (n-i)<<" "; 
			check=1;
			break;
		} 
	} 
	if(check==0) cout<<-1;
}  
int main() { 
    int T;
    cin >> T;
    while (T--){
	    int n ;  cin>>n;
	    findPrimePair(n); 
        cout<<endl;
    }
	return 0; 
} 
