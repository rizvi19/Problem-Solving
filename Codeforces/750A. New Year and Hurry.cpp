#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll a, b;
    double n, x;
    
    cin >> a >> b;
        
    x = ((240-b)*2)/5;
    n = (-1 + sqrt(1+4*x))/2;
    
    if((int)n > a) cout << a;
    else cout << (int)n;

    return 0;
}