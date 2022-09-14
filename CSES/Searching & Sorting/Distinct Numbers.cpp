#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll t, n;
    
    set<ll> x;
    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> t;
        x.insert(t);
    }
    cout << x.size() << "\n";
        
        
    return 0;
}