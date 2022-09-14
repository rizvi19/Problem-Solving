#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll n, count=0;
    
    cin >> n;
    vector< pair<int, int> > t;
    
    for(int i=0; i<n; i++){
        ll x, y;
        cin >> x >> y;
        
        t.push_back(make_pair(x, y));
    }
    
    sort(t.begin(), t.end());
    for(int i=0; i<n-1; i++){
        if((t[i].second - t[i].first) > (t[i+1].first - t[i].first))count++;
    }
    
        
    cout << count << "\n";
    
    

    return 0;
}