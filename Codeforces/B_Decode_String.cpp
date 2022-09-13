#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
	ll n;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++){
        if(i+2<n){
            if(s[i+2]=='0'){
                if(s[i+1]=='0'){
                    if(s[i]=='1'){
                        cout << "j";
                        i+=2;
                    }
                    else if(s[i]=='2'){
                        cout << "t";
                        i+=2;
                    }
                    
                }
                else if(i+3<n && s[i+3]=='0'){
                    cout << (char)((int)s[i]+96-48);
                    
                }
                else{
                    cout << (char)((int)s[i+1]-48+10*((int)s[i]-48)+96);
                    i+=2;
                }
                
            }
            else{
                cout << (char)((int)s[i]+96-48);
            }
        }
        else{
                cout << (char)((int)s[i]+96-48);
            }
    }
    cout <<  "\n";
	
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	cin >> t;
	while (t--) solve();
	
    return 0;
}