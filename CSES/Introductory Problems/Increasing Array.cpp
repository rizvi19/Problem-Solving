#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, m[200001], ans=0;
	cin >> n;
	
	for(int i=0; i<n; i++){
	    cin >> m[i];
	}
	
	for(int i=0; i<n-1; i++){
	    if(m[i+1]<m[i]){
	        ans += m[i]-m[i+1];
	        m[i+1] += m[i]-m[i+1];
	        
	    }
	}
	
	cout << ans << "\n";
	
	
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
