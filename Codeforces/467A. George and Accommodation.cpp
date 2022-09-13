#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll count=0, n;
    
    cin >> n;
    
    pair<int, int> r[n];
    for(int i=0; i<n; i++){
        
        cin >> r[i].first >> r[i].second;
        if(r[i].second-r[i].first>=2){
            count++;
        }
    }
    
    cout << count;
        
    return 0;
}