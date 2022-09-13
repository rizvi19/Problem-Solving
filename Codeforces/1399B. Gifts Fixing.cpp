#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll t, n;
    
    cin >> t;
    while(t--){
        
        cin >> n;
        ll a[n], b[n], c, steps=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        for(int i=0; i<n; i++){
            c = max(a[i]-*min_element(a, a+n), b[i]-*min_element(b, b+n));
            steps = steps +c;
        }
       
        cout << steps << endl;
    }
    

    return 0;
}