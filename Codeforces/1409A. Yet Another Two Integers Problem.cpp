#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll t, a, b;
    
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << fixed << (int)ceil((double)abs(a-b)/10) << "\n";
    }
     
    return 0;
}