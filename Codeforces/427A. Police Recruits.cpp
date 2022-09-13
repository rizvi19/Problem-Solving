#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll t, n, a[100001], count=0, c=0;
    
    
    cin >> n;

    for(auto &i:a) cin >> i;
    
    for(int i=0; i<n; i++){
        c += a[i];
        if(c < 0){
          count++; c=0; 
        } 
    }
    cout << count << "\n";
       
    return 0;
}