#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t, n, sum=0, a[51];
    
    cin >> t;
    
   while(t--){
       
       cin >> n;
       for(int i=0; i<n; i++){
           cin >> a[i]; 
       }
       for(int i=0; i<n; i++){
           sum += a[i]; 
       }
       
       if(sum > 0 && sum>=n){
           cout << sum-n << "\n";
       }
       
       else cout << 1 << "\n";
       sum=0;
   }
        

    return 0;
}