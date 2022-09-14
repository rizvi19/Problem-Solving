#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll knights(ll n){
    return n*n*(n*n-1)/2 - 4*(n-1)*(n-2);
}

void solve() {
	ll n, m;
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << knights(i) << "\n";
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