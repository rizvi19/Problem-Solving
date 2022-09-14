#include <bits/stdc++.h>
using namespace std;

void solve() {
	int t;
	cin >> t;
	for(int i=1; i<=t; i++){
	    int n, a[51], h=0, l=0;
	    cin >> n;
	    for(int j=0; j<n; j++){
	        cin >> a[j];
	    }
	    for(int j=0; j<n-1; j++){
	       if(a[j]<a[j+1])
	            h++;
	       else if (a[j]>a[j+1])
	            l++;
	    }
	    
	    cout << "Case " << i << ": " << h << " " << l << "\n";
	    
	}
	
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
// 	cin >> t;
	while (t--) solve();
	
    return 0;
}