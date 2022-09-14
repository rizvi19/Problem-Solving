#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll x, n, count=0;
    vector<int> w ;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        ll m;
        cin >> m;
        w.push_back(m);
    }
    
    sort(w.begin(), w.end());
    
    ll i=0, j=n-1;
    while(i<=j){
        if(w[i]+w[j] <= x){
            count++; i++; j--;
        }
        else{
            count++; j--;    
        }  
    }
    
    cout << count << "\n";
    
        
        
    
    

    return 0;
}