#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    int n, x;
    
    cin >> x;
    set<int> s;
    n = x+1;
    while(1){
        s.insert((int)(n/1000));
        s.insert((int)(n/100)%10);
        s.insert((int)(n/10)%10);
        s.insert(n%10);
        
        if(s.size()==4){
            cout << n;  break;
         }
        else n++;
        s.clear();
    }
        
    return 0;
}