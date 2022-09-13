#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, a[3];
    cin >> n;
    while(n--){
        int j=0;
        for(int i=0; i<3; i++){
            cin >> a[i];
            if(a[i] == 1)
                j++;
        }
        if(j >= 2)
            c++;
    }
    cout << c;



return 0;
}
