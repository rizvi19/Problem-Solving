#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll n, m, k, count=0, x;
    vector<int> a, b;
    
    cin >> n >> m >> k;
    
    for(ll i=0; i<n; i++){
        cin >> x; a.push_back(x);
    }
    for(ll i=0; i<n; i++){
        cin >> x; b.push_back(x);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    ll i=0, j=0;
        
    while(i<n && j<m){    
        if(abs(a[i]-b[j]) <= k){
            count++;
            i++; j++;
        }
        else if(a[i]-b[j] > k){ j++;}
        else {i++;}
    }
    
    
    cout << count <<"\n";
    
    
    return 0;
}
