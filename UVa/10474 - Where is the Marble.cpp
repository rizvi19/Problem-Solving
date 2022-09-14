#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, m, p, qq=1;
	while(cin >> n >> m && n||m){
		cout << "CASE# " << qq << ":" << "\n";
		//if(n==0 && m==0) return;
		vector<int> x, y;
		for(int i=0; i<n; i++){
			cin >> p;
			x.push_back(p);
		}
		for(int i=0; i<m; i++){
			cin >> p;
			y.push_back(p);
		}
		sort(x.begin(), x.end());
		//sort(y.begin(), y.end());

		for(int i=0; i<m; i++){
			auto wh = lower_bound(x.begin(), x.end(), y[i]); 
			if(wh != x.end() && *wh == y[i]){
				cout << y[i] << " found at " << (lower_bound(x.begin(), x.end(), y[i]) - x.begin())+1 << "\n";
			}
			else {
				cout << y[i] << " not found" << "\n";
			}
		}

		qq++;
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