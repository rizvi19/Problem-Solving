#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    ll t, n, m;
    
    
    cin >> t;
    while(t--){
        int c=0;
        cin >> n;
        
        vector<int> a;
        for(int i=0; i<n; i++){
            cin >> m;   a.push_back(m);
        }
        
        if (n==1){
              cout << "YES" << "\n";  continue;  
        }
        
        sort(a.begin(), a.end());
        
        for(int i=0; i<n-1; i++){
            
            if(a[i+1]-a[i] <=1){
                
               c=1;   continue; 
            } 
            else{
                c=0;    break;
            }
        }
        
        cout << (c==1? "YES" : "NO") << "\n";
    }
        
        
    return 0;
}