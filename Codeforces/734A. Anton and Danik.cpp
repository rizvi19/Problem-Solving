#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    int a=0, d=0, n;
    string s;
    cin >> n >> s;
    
    for(int i=0; i<n; i++){
        if(s[i]=='A') a++;
        else if(s[i]=='D') d++;
    }
    if(a==d) cout << "Friendship";
    else if(a>d) cout << "Anton";
    else cout << "Danik";

    return 0;
}