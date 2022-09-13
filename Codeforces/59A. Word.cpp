#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    
    int n=s.length(), l=0, u= 0;
    
    for(int i=0; i<n; i++){
        if(s[i]>=65 && s[i] <=90){
            u++;
        }
        else{
            l++;
        }
    }
    
    if(u>l){
        for(int i=0; i<n; i++){
            s[i] = toupper(s[i]);
        }
    }
    
    else if(l>=u){
        for(int i=0; i<n; i++){
            s[i] = tolower(s[i]);
        }
    }
    cout << s;

    return 0;
}