#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll a, b;
    
    cin >> a >> b;
        
    cout << min(a, b) << " ";
    cout << abs(a-b)/2;
    
    

    return 0;
}