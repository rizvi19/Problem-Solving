#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll pas[101][101]={0};

void pascal(){
    pas[0][0]=1; pas[1][0]=1; pas[1][1]=1; 
    for(int i=2; i<=100; i++){
        pas[i][0]=1;
        for(int j=1; j<=i; j++){
            pas[i][j]=pas[i-1][j-1] + pas[i-1][j];
        }
    }
}

void solve() {
	ll n, m;
	    
    pascal();
    
	while(cin >> n >> m && n && m){
	    cout << n << " things taken " << m << " at a time is " << pas[n][m] << " exactly." << "\n"; 
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