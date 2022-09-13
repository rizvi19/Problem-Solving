#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll t, n;
    
    cin >> n;
    
    if(n%2==0){
        cout << 4 << " " << n-4;
    }
    else{
        cout << 9 << " " << n-9;
    }
        
    
    return 0;
}