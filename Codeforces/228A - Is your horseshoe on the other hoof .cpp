#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, a[4];
    
    for(int i=0; i<4; i++)
        cin >> a[i];
    sort(a, a+4);
    for(int j=0; j<3; j++){
        
            if(a[j] == a[j+1])
                c++;
        
    }
    
    cout << c;


return 0;
}
