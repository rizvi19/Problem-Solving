#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, m[200001];
	cin >> n;
	for(int i=1; i<n; i++){
	    cin >> m[i];
	}
	sort(m+1, m+n);
	
	for(int i=1; i<=n ; i++){
	    if(m[i]==i){
	        continue;
	    }
	    else{
	        cout << i << "\n";
	        break;
	    }
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