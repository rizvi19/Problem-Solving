#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, m;
	cin >> n;
	if(n>=2 &&n<=3){
	    cout << "NO SOLUTION" << "\n";
	}else if(n==1){
	    cout << 1 << "\n";
	}
	else{
	    cout << 2;
	    for(int i=4; i<=n; i++){
	        if(i%2==0){
	            cout << " " << i;
	        }
	    }
	    for(int i=1; i<=n; i++){
	        if(i%2){
	            cout << " " << i;
	        }
	    }
	    cout << "\n";
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