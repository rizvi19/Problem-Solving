#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll n, count=0, ans=0;
    
    cin >> n;
    vector< pair<int, int> > t;
    
    for(int i=0; i<n; i++){
        ll x, y;
        cin >> x >> y;
        
        t.push_back(make_pair(x, 1));
        t.push_back(make_pair(y, -1));
    }
    
    sort(t.begin(), t.end());
    for(auto x:t){
       count += x.second;
       ans = max(ans, count);
    }
    
        
    cout << ans << "\n";
    
    
 
    return 0;
}
