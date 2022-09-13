#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll t, n, a, b, c;
    
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        
        if(a+c==2*b || (a==b && b==c)){
            cout << "YES" << "\n";
        }   
        
        else if((2*b-c)>0 && (2*b-c)%a==0 ){
            cout << "YES" << "\n";
        }
        
        else if((2*b-a)>0 && (2*b-a)%c==0 ){
            cout << "YES" << "\n";
        }
        
        else if((a+c)%(2*b) == 0){
            cout << "YES" << "\n";
        }
        
        else {
            cout << "NO" << "\n";
        }
    }
   
   

    return 0;
}