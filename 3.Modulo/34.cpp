#include<bits/stdc++.h> 
using namespace std;  
// Tra ve nCr% p. Trong chuong trình dua trên Ðinh lý Lucas này, hàm này chi duoc goi cho n <p và r <p. 
int nCrModpDP(int n, int r, int p) { 
    // Mang C se luu tru hàng cuoi cùng cua tam giác pascal o cuoi. Và muc cuoi cùng cua hàng cuoi cùng là nCr
    int C[r+1]; 
    memset(C, 0, sizeof(C)); 
    C[0] = 1; // Hàng trên cùng cua Tam giác Pascal
    // Tam giác tu trên xuong duoi
    for (int i = 1; i <= n; i++) { 
        // Ðien các muc cua hàng hien tai bang cách su dung giá tri hàng truoc dó  
        for (int j = min(i, r); j > 0; j--) 
            // nCj = (n-1)Cj + (n-1)C(j-1); 
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
}  
// Hàm dua trên dinh lý Lucas tra ve nCr% p
// Hàm này hoat dông nhu chuyen doi thâp phân sang nhi phân
// Hàm de quy. Ðau tiên chúng ta tính các chu sô cuôi cua n và r trong co so p, sau dó lap lai cho các chu so còn lai
int nCrModpLucas(int n, int r, int p) { 
   if (r==0) 
      return 1; 
    // Tính các chu so cuoi cua n và r trong co so p 
   int ni = n%p, ri = r%p; 
   // Tính ket qua cho các chu so cuoi duoc tính o trên và cho các chu so còn lai. Nhân hai ket qua và tính ket qua cua phép nhân trong modulo p.
   return (nCrModpLucas(n/p, r/p, p) *  // Các chu so cuoi cua n và r 
           nCrModpDP(ni, ri, p)) % p;   // Các chu so còn lai
}  
int main(){
    int T;
    cin >> T;
    long long p=pow(10,9)+7;
    while (T--){
        int n,r;
        cin >> n >>r;
        cout << nCrModpLucas(n, r, p) << endl;
    }
    return 0;
}

