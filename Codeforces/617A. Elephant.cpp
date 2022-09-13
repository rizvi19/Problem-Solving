#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin >> x;

    if(x>=1 && x<=5){
        cout << 1;
    }    
    else{
        cout << ceil((double)x/(double)5); 
    }


    return 0;
}