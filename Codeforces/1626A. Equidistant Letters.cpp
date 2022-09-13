#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >>s;
        sort(s.begin(), s.end());
        cout << s << "\n";
    }
   
    return 0;
}