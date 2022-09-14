#include <bits/stdc++.h>
#define ll long long
using namespace std;

int bigmod(ll p, ll q, ll r){
    if(q==0)
        return 1;
    
    if(q%2==0){
        return (bigmod(p, q/2, r) * bigmod(p, q/2, r))%r;
        
    }else{
        return (p%r * bigmod(p,q-1,r))%r;
    }
}
void solve() {
	ll b, m, p;
	while(cin >> b >> p >> m){
	    cout << bigmod(b, p, m) << "\n";
	}
	
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	// cin >> t;
	while (t--) solve();
	
    return 0;
}