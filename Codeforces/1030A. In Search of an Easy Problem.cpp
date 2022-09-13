#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll c, t, n;
    
    cin >> n;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==0) {
            c=0; continue;
        }
        else if(a[i]==1){ 
            c=1; break;
        }
    }
    
    cout << (c==0? "EASY" : "HARD");
    
 
    return 0;
}