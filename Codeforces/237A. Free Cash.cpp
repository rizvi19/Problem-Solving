#include <bits/stdc++.h>
#define ll long long
#define fr first
#define sc second

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll  n, count=1, x=1;
    
    cin >> n;

    pair<int, int> t[n];
    for(int i=0; i<n; i++){
        cin >> t[i].fr >> t[i].sc;
    }
        
    for(int i=0; i<n-1; i++){
        if(t[i]==t[i+1]){
            count++;
            x = max(x, count);
        }
        else if(t[i]!=t[i+1]){
            x = max(x, count);
            count = 1;
        } 
    }
        
    cout << x <<"\n";
   
    
    return 0;
}