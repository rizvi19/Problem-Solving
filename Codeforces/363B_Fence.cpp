#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, m;
	cin >> n >> m;
    ll a[n+5]={0};
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    ll pre[n+5]={0};
    pre[0]=0;
    for(int i=1; i<=n; i++)
        pre[i]=pre[i-1]+a[i];
    ll k=0;
    pair<ll, ll> ans[n+5];
	for(int i=m; i<=n; i++){
        ans[k]={pre[i]-pre[k], k};
        k++;
    }
    sort(ans, ans+n+1);
    ll out;
    for(int i=0; i<=n; i++){
        if(ans[i].first){
            out=ans[i].second; break;
        }
    }
    cout << out+1 << "\n";
    // for(int i=0; i<n; i++){
    //     cout << ans[i].first << " " << ans[i].second << "\n";
    // }
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
