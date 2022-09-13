#include <bits/stdc++.h>
using namespace std;

int main(){
    
    unsigned long long int t, w, h, k, da[4];
    
    cin >> t;
    while(t--){
        cin >> w >> h;
        
        for(int i=0; i<4; i++){
            cin >> k;
            int a[k];
            for(int j=0; j<k; j++){
                cin >> a[j]; 
            }
            if(i==0 || i==1){
                da[i] = (a[k-1]-a[0])*h;
            }
            else{
                da[i] = (a[k-1]-a[0])*w;
            }
            
        }
        sort(da, da+4);
    
        cout << da[3] << endl;
    }
    
    
    
    
    return 0;
}
