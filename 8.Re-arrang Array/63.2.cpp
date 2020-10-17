#include <bits/stdc++.h> 
using namespace std; 
void printArray(vector <int> arr, int n) { 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
}  
void nhap(vector <int> &arr,int &n){
	for(int i=0;i<n;i++){
		int x; cin>>x;
		arr.push_back(x);
	}	
}
int first(vector <int> arr, int low, int high, int x, int n) { 
	if (high >= low) { 
		int mid = low + (high - low) / 2; 
		if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x) 
			return mid; 
		if (x > arr[mid]) 
			return first(arr, (mid + 1), high, x, n); 
		return first(arr, low, (mid - 1), x, n); 
	} 
	return -1; 
} 
void sortAccording(vector <int> A1, vector <int> A2, int m, int n) { 
	vector <int> temp;
	vector <int> visited; 
	for (int i = 0; i < m; i++) { 
		temp.push_back(A1[i]); 
		visited.push_back(0); 
	} 
	sort(temp.begin(), temp.begin() + m); 
	//printArray(temp, m);
	int ind = 0; 
	for (int i = 0; i < n; i++) { 
		int f = first(temp, 0, m - 1, A2[i], m); //cout<<" "<<f<<endl;
		if (f == -1) continue;  
		for (int j = f; (j < m && temp[j] == A2[i]); j++) {
			//int k=ind++; cout<<k<<endl;
			//cout<< A1[k]<<" "<<temp[j]<<endl;
			A1[ind++] = temp[j];
			//cout<<"	"<<visited[j]<<endl;
			visited[j] = 1; 
		} 
	} 
	//cout<<endl;
	for (int i = 0; i < m; i++) {
		if (visited[i] == 0){
			//int o=ind++; cout<<o<<endl;
			A1[ind++] = temp[i]; //cout<< A1[ind++]<<" "<<temp[i]<<endl;
		}
	}
	printArray(A1, m);
} 
int main() { 
	int t; cin>>t;
	while(t--){
		int n,m;
		cin>>m>>n;
		vector <int> A1;
		vector <int> A2; 
		nhap(A1,m);
		nhap(A2,n);
		//printArray(A1, m);
		//printArray(A2, n);
		sortAccording(A1, A2, m, n);  
	}
	return 0; 
} 

