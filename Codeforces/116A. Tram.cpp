#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t, a, b, s=0, m=0;
    
    cin >> t;
    
    for(int i=0; i<t; i++){
        cin >> a >> b;
        
        s = s-a;
        s = s+b;
        m = max(m, s);
    }
    
    cout << m;
  
    

    return 0;
}