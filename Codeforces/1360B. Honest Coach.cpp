#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long int t, a, b;
    
  
    cin >> t;
    
    while(t--){
        cin >> a;
        int b[a], s=1001;
        for(int i=0; i<a; i++){
            cin >> b[i];
        }
        sort(b, b+a);
        
        for(int i=a-1; i>0; i--){
            s = min(b[i]-b[i-1], s);
        }
            
        cout << s << endl;
        
        
        
    }

    return 0;
}