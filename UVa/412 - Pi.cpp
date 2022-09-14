#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
	ll n, m;
	while(cin >> n && n){
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    int count=0;
	    for(int i=0; i<n-1; i++){
	        for(int j=i+1; j<n; j++){
	            if(__gcd(a[i],a[j])==1)
	                count++;
	        }
	    }
	    int x=n*(n-1)/2;
	    if(count)
	        cout << fixed << setprecision(6) << sqrt(6*x*1.0/count) << "\n";
	    else
	        cout << "No estimate for this data set." << "\n";
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