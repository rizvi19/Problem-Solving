#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int t, n=0;
    string s;
    
    cin >> s;
    
    for(int i=0; i<s.size(); i++){
        
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout << "YES";
            n=1;
            break;
        }

    }
    if(n==0) cout << "NO";
   
    return 0;
}