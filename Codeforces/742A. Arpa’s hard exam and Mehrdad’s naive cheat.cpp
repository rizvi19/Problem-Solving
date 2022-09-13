#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,t;
    int x;
    cin >> n;
    
    if(n==0) cout << 1;
    else{
        x = n%4;
        if(x==1) cout << 8;
        else if(x==2) cout << 4;
        else if(x==3) cout << 2;
        else if(x==0) cout << 6;
    }
        
    
    

    return 0;
}