#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
	ll n, m;
	cin >> n >> m;
	
	ll flag= (m%n==0? 1: 0);
	if(flag)
	    cout << n << " " << m << "\n";
	else 
	    cout << -1 << "\n";
	
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