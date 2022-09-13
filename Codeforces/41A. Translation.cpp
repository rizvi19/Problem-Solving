#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string a, b;
    cin >> a >> b;
    
    int x=a.size(), y=b.size(), c=0;
    
    for(int i=0; i<x; i++){
        if(a[i] == b[y-1]){
            c++;
        }
        y--;
    }
  
    if(c==x){
        cout << "YES";
    }
    else cout << "NO";

    return 0;
}