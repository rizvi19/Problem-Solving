#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, m;
	cin >> n;
	
	cout << n;
	
	    
	while(n!=1){
	    if(n%2){
	        cout << " " << n*3 + 1;
	        n=n*3 + 1;
	    }else{
	        cout << " " << n/2;
	        n/=2;
	    }
	}
	cout << "\n";
	
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