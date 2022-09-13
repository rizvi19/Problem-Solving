#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll count=0, t, n;
    
    cin >> n;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(int i=0; i<n-1; i++){
        if(a[i]!=a[i+1]) count++;
    }
    
    cout << count+1;
   
        
        
    
    

    return 0;
}