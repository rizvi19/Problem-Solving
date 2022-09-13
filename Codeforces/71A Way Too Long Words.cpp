#include<bits/stdc++.h>
#include<cstring>
using namespace std;
 
int main(){
    char s[101], a;
    int t;
    cin >> t;
    
    while(t--){
        cin >> s;
    
        int l = strlen(s);
        
        if(l>10){
            cout << s[0] << l-2 << s[l-1] << endl; 
        }
        else cout << s << endl;
        
    }
