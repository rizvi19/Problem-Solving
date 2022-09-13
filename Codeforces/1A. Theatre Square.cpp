#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int main(){
    unsigned long long n, m, a, y;
    
    
    cin >> n >> m >> a;
    if(a == 1) cout << n*m;
    else{
    y = ceil((double)n/a)*ceil((double)m/a);
    
    cout << y;
    }

return 0;
}
