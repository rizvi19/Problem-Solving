#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
	ll a, b, c;
    cin >> a >> b >> c;
    ll x=abs(a-1), y=abs(b-c)+abs(c-1);
    if(x<y) cout << 1 << "\n";
    else if (x>y) cout << 2 << "\n";
    else cout << 3 << "\n";
	
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	cin >> t;
	while (t--) solve();
	
    return 0;
}