#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    int h, n, w[1001], count=0;
    
    cin >> n >> h;
    for(auto &i:w) cin >> i;
    
    for(int i=0; i<n; i++){
        if(w[i]>h) count+=2;
        else count++;
    }
   
    cout << count << "\n";    
        
    
    

    return 0;
}